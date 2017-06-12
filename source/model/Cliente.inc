<?php

// Incluir dependências
require_once "Animal.inc";

/**
 * Classe cliente
 */
class Cliente{
  
  /**
   * Código do cliente
   * @type int
   */
  private $codigo;
  
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
    $codigo,
    $nome,
    $endereco,
    $telefone,
    $cep,
    $email
  ){
    // Manter atributos
    $this->codigo = $codigo;
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
  public function adicionarAnimal($animal){
    // Adicionar no array (push)
    $this->animais[] = $animal;
  }
  
  /**
   * Obter lista de animais
   * @return Animal[]
   */
  public function obterAnimais(){
    return $this->animais;
  }
  
  /**
   * Obter nome do cliente
   * @return string
   */
  public function getNome(){
    return $this->nom_cli;
  }
  
  /**
   * Obter endereço do cliente
   * @return string
   */
  public function getEndereco(){
    return $this->end_cli;
  }
  
  /**
   * Obter cep do cliente
   * @return int
   */
  public function getCep(){
    return $this->cep_cli;
  }
  
  /**
   * Obter email do cliente
   * @return string
   */
  public function getEmail(){
    return $this->email_cli;
  }
  
  /**
   * Obter telefone do cliente
   * @return string
   */
  public function getTelefone(){
    return $this->tel_cli;
  }
}
