<?php

// Incluir dependências
require_once "../model/ClienteDAO.inc";

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
  public function pesquisarCliente(string $nome): Cliente{
    
    // Encontrar cliente
    $clienteDao = new ClienteDAO();
    $cliente = $clienteDAO->consultarPorNome($nome);
    
    
  }
  
}
