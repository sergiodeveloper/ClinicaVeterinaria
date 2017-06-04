<?php
/**
 * Classe Veterinario
 */
class Veterinario{
  
  /**
   * Nome do veterinário
   * @type string
   */
  private $nom_vet;
  
  /**
   * Endereço do veterinário
   * @type string
   */
  private $end_vet;
  
  /**
   * Telefone do veterinário
   * @type string
   */
  private $tel_vet;
  
  /**
   * Construtor da classe Veterinario
   * @param {string} $nome     Nome do veterinário
   * @param {string} $endereco Endereço do veterinário
   * @param {string} $telefone Telefone do veterinário
   */
  public function __construct(
    string $nome,
    string $endereco,
    string $telefone
  ){
    // Manter atributos
    $this->nom_vet = $nome;
    $this->end_vet = $endereco;
    $this->telefone = $telefone;
  }
  
  
}
