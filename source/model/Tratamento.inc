<?php

/**
 * Classe Tratamento
 */
class Tratamento{
  
  /**
   * Data de início do tratamento em timestamp (long)
   * @type integer
   */
  private $dat_ini;
  
  /**
   * Data de fim do tratamento em timestamp (long)
   * @type integer
   */
  private $dat_fim;
  
  /**
   * Construtor da classe Tratamento
   * @param {integer} $inicio Data de início em timestamp
   * @param {integer} $fim    Data de fim em timestamp
   */
  public function __construct(
    string $nome,
    string $endereco,
    integer $inicio,
    integer $fim
  ){
    // Manter atributos
    $this->dat_ini = $inicio;
    $this->dat_fim = $fim;
  }
  
}
