<?php
/**
 * Classe Especie
 */
class Especie{
  
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
    string $nome
  ){
    // Manter atributos
    $this->nom_esp = $nome;
  }
  
  
}
