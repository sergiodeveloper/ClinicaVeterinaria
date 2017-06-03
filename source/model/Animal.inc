<?php
/**
 * Classe Animal
 */
class Animal{
  
  /**
   * Nome do animlal
   * @type string;
   */
  private $nome_animal;
  
  /**
   * Idade do animal
   * @type int;
   */
  private $idade_animal;
  
  /**
   * Sexo do animal
   * @type int;
   */
  private $sexo_animal;
  
  /**
   * Construtor da classe Animal
   * @param {string} $nome  Nome do animal
   * @param {int}    $idade Idade do animal
   * @param {int}    $sexo  Sexo do animal (0: Masculino, 1: Feminino)
   */
  public function __construct(
    string $nome,
    int $idade,
    int $sexo
  ){
    // Manter atributos
    $this->nome_animal = $nome;
    $this->idade_animal = $idade;
    $this->sexo_animal = $sexo;
  }
  
  
}
