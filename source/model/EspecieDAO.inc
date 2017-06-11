<?php

// Incluir dependências
require_once "GenericDAO.inc";
require_once "Especie.inc";

/**
 * Classe DAO para Especie. Irá manipular Especie no banco de dados
 */
class EspecieDAO extends GenericDAO{
  
  /**
   * Construtor de EspecieDAO
   * @throws PDOException Caso haja falha na conexão com o banco
   */
  public function __construct(){
    // Chamar construtor da classe pai
    parent::__construct();

    if(!isset($_SESSION['especies'])){
      $_SESSION['especies'] = array();
    }
  }


  /**
   * Registrar espécie no banco de dados
   * @return int
   */
  public function cadastrarEspecie($nome){
    //TODO mudar para banco

    $especie = $this->encontrarEspecie($nome);

    if($especie == null){
      $especie = new Especie($nome);
  	  $_SESSION['especies'][] = $especie;
  	}
    
    return $especie;
  }
  
  /**
   * Encontrar espécie por nome
   * @param {string} $nome
   * @return Especie
   */
   public function encontrarEspecie($nome){
     // TODO Mudar para banco

   	 foreach($_SESSION['especies'] as $i => $especie){
   	   if($especie->getNome() == $nome) return $especie;
   	 }
   	 return null;
   }
  
}
