<?php

/**
 * Classe cliente
 */
class Cliente{
  
  /**
   * Nome do cliente
   * @type string;
   */
  private $nom_cli;
  
  /**
   * Endereço do cliente
   * @type string;
   */
  private $end_cli;
  
  /**
   * Construtor da classe Cliente
   * @param {string} $nome     Nome do cliente
   * @param {string} $endereco Endereço do cliente
   * TODO
   */
  public function __construct(
    string $nome,
    string $endereco
  ){
    // Manter atributos
    $this->nom_cli = $nome;
    $this->end_cli = $endereco;
    // TODO
  }
  
}
