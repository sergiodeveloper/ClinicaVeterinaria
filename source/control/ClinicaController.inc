<?php

// Incluir dependências
require_once "../model/ClienteDAO.inc";
require_once "../model/AnimalDAO.inc";
require_once "../model/EspecieDAO.inc";

/**
 * Classe de controle da Clínica Veterinária
 */
class ClinicaController{
  
  /**
   * Construtor da classe Clinica Controller
   */
  public function __construct(){
    
  }
  
  /**
   * Pesquisar cliente no sistema
   * @param {string} $nome
   * @return Cliente
   * @throws PDOException Caso haja erro de banco de dados
   */
  public function pesquisarCliente($nome){
    
    // Encontrar cliente
    $clienteDao = new ClienteDAO();
    $cliente = $clienteDao->consultarPorNome($nome);
    
    return $cliente;
  }

  /**
   * Cadastrar cliente no sistema
   * @param {string} $nome,$endereco,$telefone,$cep,$email
   * @throws PDOException Caso haja erro de banco de dados
   */
  public function cadastrarCliente($nome,$endereco,$telefone,$cep,$email){
    
    // Cadastrar cliente
    $clienteDao = new ClienteDAO();
    $clienteDao->Reg_Cli($nome,$endereco,$telefone,$cep,$email);
  }

  /**
   * Cadastrar animal no sistema
   * @param {string} $nome
   * @param int $idade
   * @param int $sexo
   * @param Especie $especie
   * @throws PDOException Caso haja erro de banco de dados
   */
  public function cadastrarAnimal($nome,$idade,$sexo,$especie,$dono){
    
    // Cadastrar animal
    $animalDAO = new AnimalDAO();
    $animalDAO->Reg_Ani($nome, $idade, $sexo, $especie, $dono);
  }

  /**
   * Cadastrar espécie no sistema
   * @param {string} $nome
   * @throws PDOException Caso haja erro de banco de dados
   */
  public function cadastrarEspecie($nome){
    
    // Cadastrar especie
    $especieDAO = new EspecieDAO();
    $especie = $especieDAO->cadastrarEspecie($nome);

    return $especie;
  }
  
  /**
   * Pesquisar animais de um determinado cliente
   * @return Animal[] Lista de animais
   */
  public function pesquisarAnimais($cliente){
    $animalDao = new AnimalDAO();
    $animais = $animalDao->obterAnimais($cliente);
    
    return $animais;
  }
  
}
