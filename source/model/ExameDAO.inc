<?php

// Incluir dependências
require_once "GenericDAO.inc";

/**
 * Classe DAO para Exame. Irá manipular Exame no banco de dados
 */
class ExameDAO extends GenericDAO{
  
  /**
   * Construtor de ExameDAO
   * @throws PDOException Caso haja falha na conexão com o banco
   */
  public function __construct(){
    // Chamar construtor da classe pai
    parent::__construct();
  }
  
  
}
