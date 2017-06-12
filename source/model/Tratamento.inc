<?php

// Incluir dependências
require_once "Consulta.inc";

/**
 * Classe Tratamento
 */
class Tratamento{
  
  /**
   * Data de início do tratamento em timestamp (long)
   * @type int
   */
  private $dat_ini;
  
  /**
   * Data de fim do tratamento em timestamp (long)
   * @type int
   */
  private $dat_fim;
  
  /**
   * Consultas feitas para este tratamento
   * @type Consulta[] Lista de consultas
   */
  private $consultas = array();
  
  /**
   * Construtor da classe Tratamento
   * @param {int} $inicio Data de início em timestamp
   * @param {int} $fim    Data de fim em timestamp
   */
  public function __construct(
    $inicio,
    $fim
  ){
    // Manter atributos
    $this->dat_ini = $inicio;
    $this->dat_fim = $fim;
  }
  
  
  /**
   * Adicionar consulta à lista
   * @param Consulta $consulta
   */
  public function adicionarConsulta($consulta){
    // Adicionar no array (push)
    $this->consultas[] = $consulta;
  }
  
  /**
   * Obter lista de consultas
   * @return Consulta[]
   */
  public function obterConsultas(){
    return $this->consultas;
  }
}
