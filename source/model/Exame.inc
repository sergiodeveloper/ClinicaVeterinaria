<?php

/**
 * Classe Exame
 */
class Exame{
  
  /**
   * Código do exame
   * @type string
   */
  private $codigo;
  
  /**
   * Descrição do exame
   * @type string
   */
  private $des_exame;
  
  
  /**
   * Construtor da classe Exame
   * @param {string} $descricao Descrição do exame
   */
  public function __construct(
    $codigo,
    $descricao
  ){
    // Manter atributos
    $this->codigo = $codigo;
    $this->des_exame = $descricao;
  }
  
  
}
