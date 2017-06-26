<?php

// Incluir dependências
require_once "GenericDAO.inc";
require_once "Especie.inc";

/**
 * Classe DAO para Especie. Irá manipular Especie no banco de dados
 */
class EspecieDAO extends GenericDAO{
  
  /**
   * Construtor de EspecieDAO
   * @throws PDOException Caso haja falha na conexão com o banco
   */
  public function __construct(){
    // Chamar construtor da classe pai
    parent::__construct();
  }
  
  
  /**
   * Registrar espécie no banco de dados
   * @return int
   * @throws Exception
   */
  public function cadastrarEspecie($nome){
    $query = $this->prepare(
      "INSERT INTO Especie (nome)
            VALUES (?)"
    );
    
    if($query === false) throw new PDOException("Erro na consulta");
    
    $query->execute([$nome]);
    
    return new Especie(
      $this->lastInsertId(), //Código
      $nome
    );
  }
  
  /**
   * Encontrar espécie por nome
   * @param {string} $nome
   * @return Especie
   */
   public function encontrarEspeciePorNome($nome){
     
     $query = $this->prepare(
       "SELECT codigo, nome
          FROM Especie
         WHERE nome = ?"
     );
     
     if($query === false) throw new PDOException("Erro na consulta");
     
     $query->execute([$nome]);
     
     $result = $query->fetch();
     
     if($result === false) return null;
     
     return new Especie(
       $result["codigo"],
       $result["nome"]
     );
   }
   
   /**
    * Encontrar espécie por codigo
    * @param {int} $codigo
    * @return Especie
    */
    public function encontrarEspeciePorCodigo($codigo){
      
      $query = $this->prepare(
        "SELECT codigo, nome
           FROM Especie
          WHERE codigo = ?"
      );
      
      if($query === false) throw new PDOException("Erro na consulta");
      
      $query->execute([$codigo]);
      
      $result = $query->fetch();
      
      if($result === false) return null;
      
      return new Especie(
        $result["codigo"],
        $result["nome"]
      );
    }
  
}
