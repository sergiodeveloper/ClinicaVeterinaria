<?php

// Incluir dependências
require_once "GenericDAO.inc";

/**
 * Classe DAO para Tratamento. Irá manipular Tratamento no banco de dados
 */
class TratamentoDAO extends GenericDAO{
  
  /**
   * Construtor de TratamentoDAO
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
  public function Vis_Trat(): string{
    // TODO
  }
  
  /**
   * Consultar tratamento no banco de dados
   * @return string
   */
  public function Con_Trat(): string{
    // TODO
  }
  
  /**
   * Registrar tratamento no banco de dados
   * @return int
   */
  public function Reg_Trat(): int{
    // TODO
  }
  
}
