<?php

// Incluir dependências
require_once "Tratamento.inc";
require_once "Exame.inc";

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
   * @param {integer} $data      Data da consulta em timestamp
   * @param {string}  $historico Documentação histórica da consulta
   */
  public function __construct(
    integer $data,
    string $historico
  ){
    // Manter atributos
    $this->dat_con = $data;
    $this->historico = $historico;
  }
  
  
  /**
   * Adicionar exame à lista
   * @param Exame $exame
   */
  public function adicionarExame(Exame $exame): void{
    // Adicionar no array (push)
    $this->exames[] = $exame;
  }
  
  /**
   * Obter lista de exames
   * @return Exame[]
   */
  public function obterExames(): array{
    return $this->exames;
  }
  
}
