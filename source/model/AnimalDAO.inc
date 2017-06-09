<?php

// Incluir dependências
require_once "GenericDAO.inc";
require_once "Especie.inc";
require_once "Animal.inc";

/**
 * Classe DAO para Animal. Irá manipular Animal no banco de dados
 */
class AnimalDAO extends GenericDAO{
  
  /**
   * Construtor de AnimalDAO
   * @throws PDOException Caso haja falha na conexão com o banco
   */
  public function __construct(){
    // Chamar construtor da classe pai
    parent::__construct();

    if(!isset($_SESSION['animais'])){
      $_SESSION['animais'] = array();
    }
  }
  
  /**
   * Obter animais pertencentes a um cliente específico
   * @return string
   */
  public function Vis_Animal($cliente){
    //foreach($_SESSION['animais'] as $i => $animal){

    //}
  }
  
  /**
   * Registrar animal no banco de dados
   * @return int
   */
  public function Reg_Ani(
    $nome,
    $idade,
    $sexo,
    $especie,
    $dono
  ){
    //TODO mudar para banco

    

    $animal = new Animal(
      $nome,
      $idade,
      $sexo,
      $especie
    );

    $animal->dono = $dono;

    $_SESSION['animais'][] = $animal;

    return $animal;
  }

  /**
   * Obter lista de animais pertencentes a um cliente específico
   * @param Cliente $dono
   * @return Animal[]
   */
  public function obterAnimais($dono){
    // TODO consultar em banco de dados
    
    // Retornar lista de animais
    $animais = array();
    
    foreach($_SESSION['animais'] as $i => $animal){
      if($animal->dono == $dono)
        $animais[] = $animal;
    }

    return $animais;
  }
  
  /**
   * Consultar animal no banco de dados
   * @return string
   */
  public function Con_Animal(){
    // TODO
  }
  
}
