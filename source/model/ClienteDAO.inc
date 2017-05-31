<?php

// Incluir dependências
require_once "GenericDAO.inc";

/**
 * Classe DAO para Cliente. Irá manipular Cliente no banco de dados
 */
class ClienteDAO extends GenericDAO{
  
  /**
   * Construtor de ClienteDAO
   * @throws PDOException Caso haja falha na conexão com o banco
   */
  public function __construct(){
    // Chamar construtor da classe pai
    parent::__construct();
    
    
  }
  
}
