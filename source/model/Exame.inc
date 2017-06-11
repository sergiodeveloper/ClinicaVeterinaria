<?php

/**
 * Classe Exame
 */
class Exame{
  
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
    $descricao
  ){
    // Manter atributos
    $this->des_exame = $descricao;
  }
  
  
}
