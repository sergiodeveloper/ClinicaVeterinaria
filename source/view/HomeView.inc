<?php 

// Incluir dependências
require_once "GenericView.inc";

// Classe para geração da view Home
class HomeView extends GenericView{
  
  /**
   * Construtor da classe HomeView
   */
  public function __construct(){
    // Chamar construtor da classe pai
    parent::__construct("template/home.inc");
  }
  
}

