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
   * @return {Cliente} Cliente cadastrado
   */
  public function Reg_Cli(
    $nome,
    $endereco,
    $telefone,
    $cep,
    $email 
  ){
    
    $query = $this->prepare(
      "INSERT INTO Cliente (nome, endereco, telefone, cep, email)
            VALUES (?, ?, ?, ?, ?)"
    );
    
    if($query === false) throw new PDOException("Erro na consulta");
    
    $query->execute([$nome, $endereco, $telefone, $cep, $email]);
    
    return new Cliente(
      $this->lastInsertId(), //Código
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
   * @throws PDOException
   */
  public function consultarPorNome($nome){
    
    $query = $this->prepare(
      "SELECT codigo, nome, endereco, telefone, cep, email
         FROM Cliente
        WHERE nome = ?"
    );
    
    if($query === false) throw new PDOException("Erro na consulta");
    
    $query->execute([$nome]);
    
    $result = $query->fetch();
    
    if($result === false) return null;
    
    return new Cliente(
      $result["codigo"],
      $result["nome"],
      $result["endereco"],
      $result["telefone"],
      $result["cep"],
      $result["email"]
    );
  }
  
}
