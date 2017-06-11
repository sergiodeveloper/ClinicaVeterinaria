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

    if(!isset($_SESSION['clientes'])){

      $_SESSION['clientes'] = array();
    }

  }
  
  /**
   * Registrar cliente no banco de dados
   * @return int
   */
  public function Reg_Cli(
    $nome,
    $endereco,
    $telefone,
    $cep,
    $email 
  ){
    //TODO mudar para banco

    $_SESSION['clientes'][] = new Cliente(
      $nome,
      $endereco,
      $telefone,
      $cep,
      $email
    );
  }
  
  /**
   * Consultar cliente no banco de dados
   * @return string
   */
  public function Con_Cli(){
    // TODO
  }
  
  /**
   * Consultar cliente por nome no banco de dados
   * @param {string} $nome Nome do cliente
   * @return Cliente
   */
  public function consultarPorNome($nome){
    // TODO usar banco de dados real

    foreach($_SESSION['clientes'] as $i => $cliente){
      if($cliente->getNome() == $nome){
        return $cliente;
      }
    }

    return null;
  
  }
  
}
