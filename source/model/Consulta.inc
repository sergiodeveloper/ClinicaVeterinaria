<?php

// Incluir dependências
require_once "Tratamento.inc";
require_once "Exame.inc";

/**
 * Classe Consulta
 */
class Consulta{
  
  /**
   * Código da consulta
   * @type int
   */
  private $codigo;
  
  /**
   * Data da consulta em timestamp (long)
   * @type int
   */
  private $dat_con;
  
  /**
   * Documentação histórica da consulta
   * @type string
   */
  private $historico;
  
  /**
   * Exames gerados nesta consulta
   * @type Exame[] Lista de exames
   */
  private $exames = array();
  
  /**
   * Construtor da classe Consulta
   * @param {int}     $data      Data da consulta em timestamp
   * @param {string}  $historico Documentação histórica da consulta
   */
  public function __construct(
    $codigo,
    $data,
    $historico
  ){
    // Manter atributos
    $this->codigo = $codigo;
    $this->dat_con = $data;
    $this->historico = $historico;
  }
  
  
  /**
   * Adicionar exame à lista
   * @param Exame $exame
   */
  public function adicionarExame($exame){
    // Adicionar no array (push)
    $this->exames[] = $exame;
  }
  
  /**
   * Obter lista de exames
   * @return Exame[]
   */
  public function obterExames(){
    return $this->exames;
  }
  
}
