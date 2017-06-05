<?php

/**
 * Métodos comuns aos objetos DAO do projeto Clínica Veterinária
 */
abstract class GenericDAO{
  
  /**
   * Conexão com o banco de dados
   * @type PDO
   */
  private static $connection = null;
  
  /**
   * Construtor da classe DAO
   * @throws PDOException Caso haja erro ao abrir conexão com o banco
   */
  public function __construct(){
    if(GenericDAO::$connection == null){
      // Abrir uma conexão com o banco de dados
      /*
      $connection = new \PDO($dsn, $user, $password); // << TODO
      
      $connection->setAttribute(\PDO::ATTR_ERRMODE, \PDO::ERRMODE_EXCEPTION);
      $connection->setAttribute(\PDO::ATTR_EMULATE_PREPARES, false);
      
      // Manter conexão na classe
      GenericDAO::$connection = $connection;
      */
    }
  }
  
  /**
   * Preparar uma consulta no banco de dados
   * @param {string} $query Consulta a ser preparada
   * @throws PDOException Caso a consulta esteja mal formatada
   */
  public function prepare(string $query): PDOStatement{
    return GenericDAO::$connection->prepare($query);
  }
  
  /**
   * Obter identificador da última linha inserida no banco de dados
   * @return string
   */
  public function lastInsertId(){
    return GenericDAO::$connection->lastInsertId();
  }
  
}
