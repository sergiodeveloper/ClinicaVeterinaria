<?php

// Incluir dependências
require_once "GenericDAO.inc";
require_once "EspecieDAO.inc";
require_once "Especie.inc";
require_once "Animal.inc";

/**
 * Classe DAO para Animal. Irá manipular Animal no banco de dados
 */
class AnimalDAO extends GenericDAO{
  
  /**
   * Construtor de AnimalDAO
   * @throws PDOException Caso haja falha na conexão com o banco
   */
  public function __construct(){
    // Chamar construtor da classe pai
    parent::__construct();
  }
  
  /**
   * Obter animais pertencentes a um cliente específico
   * @return string
   */
  public function Vis_Animal($cliente){
    // TODO
  }
  
  /**
   * Registrar animal no banco de dados
   * @param Especie $especie
   * @return int
   * @throws PDOException
   */
  public function Reg_Ani(
    $nome,
    $idade,
    $sexo,
    $especie,
    $dono
  ){
    $query = $this->prepare(
      "INSERT INTO Animal (nome, idade, sexo, especie, dono)
            VALUES (?, ?, ?, ?, ?)"
    );
    
    if($query == false) throw new PDOException("Erro na consulta");
    
    $query->execute([
      (string) $nome,
      (int) $idade,
      (int) $sexo,
      $especie->getCodigo(),
      $dono->getCodigo()
    ]);
    
    return new Animal(
      $this->lastInsertId(),
      (string) $nome,
      (int) $idade,
      (int) $sexo,
      $especie->getCodigo()
    );
  }

  /**
   * Obter lista de animais pertencentes a um cliente específico
   * @param Cliente $dono
   * @return Animal[]
   */
  public function obterAnimais($dono){
    
    $query = $this->prepare(
      "SELECT codigo, nome, idade, sexo, especie
         FROM Animal
        WHERE dono = ?"
    );
    
    if($query === false) throw new PDOException("Erro na consulta");
    
    $query->execute([$dono->getCodigo()]);
    
    $results = $query->fetchAll();
    
    if($results === false) return null;
    
    $animais = [];
    
    foreach($results as $result){
      $especieDao = new EspecieDAO();
      $especie = $especieDao->encontrarEspeciePorCodigo($result["especie"]);
      
      $animais[] = new Animal(
        $result["codigo"],
        $result["nome"],
        $result["idade"],
        $result["sexo"],
        $especie
      );
    }
    
    return $animais;
  }
  
  /**
   * Consultar animal no banco de dados
   * @return string
   */
  public function Con_Animal(){
    // TODO
  }
  
}
