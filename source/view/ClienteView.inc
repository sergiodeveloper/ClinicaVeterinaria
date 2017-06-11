<?php 

// Incluir dependências
require_once "GenericView.inc";
require_once "../model/Cliente.inc";
require_once "../model/Animal.inc";

// Classe para geração da view Cliente
class ClienteView extends GenericView{
  
  /**
   * Construtor da classe ClienteView
   * @param Cliente  $cliente
   * @param Animal[] $animais
   */
  public function __construct($cliente,$animais){
    // Chamar construtor da classe pai
    parent::__construct("template/cliente.inc");
    
    // Adicionar variáveis na view
    $this->addVariable("cliente", $cliente);
    $this->addVariable("animais", $animais);
  }
  
}

