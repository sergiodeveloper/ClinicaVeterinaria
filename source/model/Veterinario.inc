<?php

// Adicionar dependências
require_once "Consulta.inc";

/**
 * Classe Veterinario
 */
class Veterinario{
  
  /**
   * Código do veterinário
   * @type int
   */
  private $codigo;
  
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
    $codigo,
    $nome,
    $endereco,
    $telefone
  ){
    // Manter atributos
    $this->codigo = $codigo;
    $this->nom_vet = $nome;
    $this->end_vet = $endereco;
    $this->telefone = $telefone;
  }
  
  
  /**
   * Adicionar consulta à lista
   * @param Consulta $consulta
   */
  public function adicionarConsulta($consulta){
    // Adicionar no array (push)
    $this->consultas[] = $consulta;
  }
  
  /**
   * Obter lista de consultas
   * @return Consulta[]
   */
  public function obterConsultas(){
    return $this->consultas;
  }
  
}
