<?php

// Incluir dependências
require_once "GenericDAO.inc";

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
   * TODO
   * @return string
   */
  public function Vis_Animal(): string{
    // TODO
  }
  
  /**
   * Consultar animal no banco de dados
   * @return string
   */
  public function Con_Animal(): string{
    // TODO
  }
  
}
