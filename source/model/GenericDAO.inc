<?php

/**
 * Métodos comuns aos objetos DAO do projeto Clínica Veterinária
 */
abstract class DAO{
  
  /**
   * Conexão com o banco de dados
   * @type PDO
   */
  protected $connection;
  
  /**
   * Construtor da classe DAO
   * @throws PDOException Caso haja erro ao abrir conexão com o banco
   */
  public function __construct(){
    // Abrir uma conexão com o banco de dados
    $connection = new PDO($dsn, $user, $password); // TODO
    
    $connection->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
    $connection->setAttribute(PDO::ATTR_EMULATE_PREPARES, false);
    
    // Manter conexão na instância
    $this->connection = $connection;
  }
  
  /**
   * Preparar uma consulta no banco de dados
   * @param {string} $query Consulta a ser preparada
   * @throws PDOException Caso a consulta esteja mal formatada
   */
  public function prepare(string $query): PDOStatement{
    return $this->connection->prepare($query);
  }
  
}