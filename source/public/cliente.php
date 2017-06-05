<?php

// Habilitar exibição de erros e alertas
error_reporting(E_ALL);
ini_set('display_errors', 1);

// Incluir dependências
require_once "../view/ClienteView.inc";
require_once "../control/ClinicaController.inc";

function listarAnimais(){
  // Verificar entradas
  if(! isset($_REQUEST["cliente"]) || empty($_REQUEST["cliente"])){
    return "Faltando informar o nome do cliente";
  }
  $nome = $_REQUEST["cliente"];
  
  // Encontrar cliente
  $control = new ClinicaController();
  $cliente = $control->pesquisarCliente($nome);
  
  // Encontrar seus animais
  $animais = $control->pesquisarAnimais($cliente);
  
  // Exibir a página
  $page = new ClienteView(
    $cliente,
    $animais
  );
  
  return $page->getSourceCode();
}

echo listarAnimais();
