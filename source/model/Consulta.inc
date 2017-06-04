<?php

/**
 * Classe Consulta
 */
class Consulta{
  
  /**
   * Data da consulta em timestamp (long)
   * @type integer
   */
  private $dat_con;
  
  /**
   * TODO
   * @type string
   */
  private $historico;
  
  /**
   * Construtor da classe Consulta
   * @param {integer} $data      Data da consulta em timestamp
   * @param {string}  $historico TODO
   */
  public function __construct(
    integer $data,
    string $historico
  ){
    // Manter atributos
    $this->dat_con = $data;
    $this->historico = $historico;
  }
  
  
}
