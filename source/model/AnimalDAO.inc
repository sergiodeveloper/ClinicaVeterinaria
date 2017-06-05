<?php

// Incluir dependências
require_once "GenericDAO.inc";
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
  public function Vis_Animal(): string{
    // TODO
  }
  
  /**
   * Obter lista de animais pertencentes a um cliente específico
   * @param Cliente $dono
   * @return Animal[]
   */
  public function obterAnimais(Cliente $dono){
    // TODO consultar em banco de dados
    
    // Retornar lista fictícia de animais
    $animais = array();
    
    $especie = new Especie("Cachorro");
    
    $animais[] = new Animal("Peludinho", 30, 0, $especie);
    $animais[] = new Animal("Snoopy", 50, 0, $especie);
    
    return $animais;
  }
  
  /**
   * Consultar animal no banco de dados
   * @return string
   */
  public function Con_Animal(): string{
    // TODO
  }
  
}
