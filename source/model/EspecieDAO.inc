<?php

// Incluir dependências
require_once "GenericDAO.inc";

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
  
  
}
