<?php

// Adicionar dependências
require_once "Consulta.inc";

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
   * Consultas atendidas pelo veterinário
   * @type Consulta[] Lista de consultas
   */
  private $consultas = array();
  
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
  
  
  /**
   * Adicionar consulta à lista
   * @param Consulta $consulta
   */
  public function adicionarConsulta(Consulta $consulta): void{
    // Adicionar no array (push)
    $this->consultas[] = $consulta;
  }
  
  /**
   * Obter lista de consultas
   * @return Consulta[]
   */
  public function obterConsultas(): array{
    return $this->consultas;
  }
  
}
