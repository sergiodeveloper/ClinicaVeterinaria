<?php

// Incluir dependências
require_once "Animal.inc";

/**
 * Classe cliente
 */
class Cliente{
  
  /**
   * Nome do cliente
   * @type string
   */
  private $nom_cli;
  
  /**
   * Endereço do cliente
   * @type string
   */
  private $end_cli;
  
  /**
   * Telefone do cliente
   * @type string
   */
  private $tel_cli;
  
  /**
   * Cep do cliente
   * @type long
   */
  private $cep_cli;
  
  /**
   * Email do cliente
   * @type string
   */
  private $email_cli;
  
  /**
   * Animais do cliente
   * @type Animal[] Lista de animais
   */
  private $animais = array();
  
  /**
   * Construtor da classe Cliente
   * @param {string} $nome     Nome do cliente
   * @param {string} $endereco Endereço do cliente
   * @param {string} $telefone Telefone do cliente
   * @param {long}   $cep      Cep do cliente
   * @param {string} $email    Email do cliente
   */
  public function __construct(
    string $nome,
    string $endereco,
    string $telefone,
    int $cep,
    string $email
  ){
    // Manter atributos
    $this->nom_cli = $nome;
    $this->end_cli = $endereco;
    $this->tel_cli = $telefone;
    $this->cep_cli = $cep;
    $this->email_cli = $email;
  }
  
  /**
   * Adicionar animal à lista
   * @param Animal $animal
   */
  public function adicionarAnimal(Animal $animal){
    // Adicionar no array (push)
    $this->animais[] = $animal;
  }
  
  /**
   * Obter lista de animais
   * @return Animal[]
   */
  public function obterAnimais(): array{
    return $this->animais;
  }
  
  /**
   * Obter nome do cliente
   * @return string
   */
  public function getNome(): string{
    return $this->nom_cli;
  }
  
  /**
   * Obter endereço do cliente
   * @return string
   */
  public function getEndereco(): string{
    return $this->end_cli;
  }
  
  /**
   * Obter cep do cliente
   * @return int
   */
  public function getCep(): int{
    return $this->cep_cli;
  }
  
  /**
   * Obter email do cliente
   * @return string
   */
  public function getEmail(): string{
    return $this->email_cli;
  }
  
  /**
   * Obter telefone do cliente
   * @return string
   */
  public function getTelefone(): string{
    return $this->tel_cli;
  }
}
