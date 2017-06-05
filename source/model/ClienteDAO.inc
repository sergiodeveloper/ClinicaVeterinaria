<?php

// Incluir dependências
require_once "GenericDAO.inc";
require_once "Cliente.inc";

/**
 * Classe DAO para Cliente. Irá manipular Cliente no banco de dados
 */
class ClienteDAO extends GenericDAO{
  
  /**
   * Construtor de ClienteDAO
   * @throws PDOException Caso haja falha na conexão com o banco
   */
  public function __construct(){
    // Chamar construtor da classe pai
    parent::__construct();
  }
  
  /**
   * Registrar cliente no banco de dados
   * @return int
   */
  public function Reg_Cli(): int{
    // TODO
  }
  
  /**
   * Consultar cliente no banco de dados
   * @return string
   */
  public function Con_Cli(): string{
    // TODO
  }
  
  /**
   * Consultar cliente por nome no banco de dados
   * @param {string} $nome Nome do cliente
   * @return Cliente
   */
  public function consultarPorNome(string $nome): Cliente{
    // TODO usar banco de dados real
    
    // Retornar cliente fictício
    return new Cliente(
      $nome,
      "Grécia - SP, Havaí",
      "-55 (12) 345-5678",
      "56203-499",
      "$nome@email.com"
    );
  }
  
}
