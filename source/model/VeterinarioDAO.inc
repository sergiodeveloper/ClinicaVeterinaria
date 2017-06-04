<?php

// Incluir dependências
require_once "GenericDAO.inc";

/**
 * Classe DAO para Veterinario. Irá manipular Veterinario no banco de dados
 */
class VeterinarioDAO extends GenericDAO{
  
  /**
   * Construtor de VeterinarioDAO
   * @throws PDOException Caso haja falha na conexão com o banco
   */
  public function __construct(){
    // Chamar construtor da classe pai
    parent::__construct();
  }
  
  
}
