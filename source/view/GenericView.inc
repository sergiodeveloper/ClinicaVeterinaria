<?php

/**
 * Métodos comuns aos objetos View do projeto Clínica Veterinária
 */
abstract class GenericView{
  
  /**
   * Variáveis acessíveis à esta view
   * @type array Array associativo de objetos de tipos variados
   */
  private $variables = array();
  
  /**
   * Endereço do arquivo de template desta view
   * @type string
   */
  private $templateLocation;
  
  /**
   * Construtor da classe GenericView
   * @param {string} $templateLocation Endereço do arquivo template desta view
   */
  public function __construct($templateLocation){
    // Manter atributos
    $this->templateLocation = $templateLocation;
  }
  
  
  /**
   * Obter variável desta view
   * @param {string} $name Nome da variável
   * @return any Qualquer tipo de dado que estiver na lista
   */
  protected function getVariable($name){
    return $this->variables[$name];
  }
  
  /**
   * Adicionar variável à view
   * @param {string} $name  Nome da variável
   * @param {any}    $value
   */
  protected function addVariable($name, $value){
    $this->variables[$name] = $value;
  }
  
  /**
   * Remover variável da view
   * @param {string} $name Nome da variável
   */
  protected function removeVariable($name){
    unset($this->variables[$name]);
  }
  
  /**
   * Obter código fonte HTML desta view
   * @return string
   */
  public function getSourceCode(){
    // Capturar saída do template
    ob_start();
    require $this->templateLocation;
    $source = ob_get_contents();
    ob_end_clean();
    
    return $source;
  }
}
