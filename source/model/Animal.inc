<?php

// Incluir dependências
require_once "Especie.inc";
require_once "Tratamento.inc";

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
   * Lista de tratamentos feitos para este animal
   * @type Tratamento[] Lista de tratamentos
   */
  private $tratamentos = array();
  
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
  
  
  /**
   * Adicionar tratamento à lista
   * @param Tratamento $tratamento
   */
  public function adicionarTratamento(Tratamento $tratamento): void{
    // Adicionar no array (push)
    $this->tratamentos[] = $tratamento;
  }
  
  /**
   * Obter lista de tratamentos
   * @return Animal[]
   */
  public function obterTratamentos(): array{
    return $this->tratamentos;
  }
}
