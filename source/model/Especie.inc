<?php

/**
 * Classe Especie
 */
class Especie{
  
  /**
   * @type int
   */
  private $codigo;
  
  /**
   * Nome da espécie
   * @type string
   */
  private $nom_esp;
  
  
  /**
   * Construtor da classe Especie
   * @param {string} $nome  Nome da espécie
   */
  public function __construct(
    $codigo,
    $nome
  ){
    // Manter atributos
    $this->codigo = $codigo;
    $this->nom_esp = $nome;
  }
  
  /**
   * Obter nome da espécie
   * @return string
   */
  public function getNome(){
    return $this->nom_esp;
  }
  
  /**
   * Obter código da espécie
   * @return int
   */
  public function getCodigo(){
    return $this->codigo;
  }
  
}
