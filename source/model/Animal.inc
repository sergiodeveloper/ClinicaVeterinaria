<?php

// Incluir dependências
require_once "Especie.inc";

/**
 * Classe Animal
 */
class Animal{
  
  
  /**
   * Nome do animal
   * @type string
   */
  private $nome_animal;
  
  /**
   * Idade do animal
   * @type int
   */
  private $idade_animal;
  
  /**
   * Sexo do animal
   * @type int
   */
  private $sexo_animal;
  
  /**
   * Espécie do animal
   * @type Especie
   */
  private $especie;
  
  /**
   * Construtor da classe Animal
   * @param {string}  $nome    Nome do animal
   * @param {int}     $idade   Idade do animal
   * @param {int}     $sexo    Sexo do animal (0: Masculino, 1: Feminino)
   * @param {Especie} $especie Espécie do animal
   */
  public function __construct(
    string $nome,
    int $idade,
    int $sexo,
    Especie $especie
  ){
    // Manter atributos
    $this->nome_animal = $nome;
    $this->idade_animal = $idade;
    $this->sexo_animal = $sexo;
    
    $this->especie = $especie;
  }
  
  
}
