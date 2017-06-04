<?php

// Incluir dependências
require_once "GenericDAO.inc";

/**
 * Classe DAO para Consulta. Irá manipular Consulta no banco de dados
 */
class ConsultaDAO extends GenericDAO{
  
  /**
   * Construtor de ConsultaDAO
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
  public function Lis_Con(): string{
    // TODO
  }
  
  /**
   * TODO
   * @return string
   */
  public function Ver_Con(): string{
    // TODO
  }
  
  /**
   * Registrar consulta no banco de dados
   * @return int
   */
  public function Reg_Con(): int{
    // TODO
  }
  
}
