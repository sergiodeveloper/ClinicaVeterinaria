<?php

// Habilitar exibição de erros e alertas
error_reporting(E_ALL);
ini_set('display_errors', 1);

// Incluir dependências
require_once "../view/HomeView.inc";
require_once "../control/ClinicaController.inc";

function CadastrarCliente(){
  // Verificar entradas
  if(! isset($_REQUEST["nome"]) || empty($_REQUEST["nome"]))
    return "Faltando informar o nome do cliente";
  if(! isset($_REQUEST["tel"]) || empty($_REQUEST["tel"]))
    return "Faltando informar o telefone do cliente";
  if(! isset($_REQUEST["CEP"]) || empty($_REQUEST["CEP"]))
    return "Faltando informar o CEP do cliente";
  if(! isset($_REQUEST["endereco"]) || empty($_REQUEST["endereco"]))
    return "Faltando informar o endereço do cliente";
  if(! isset($_REQUEST["email"]) || empty($_REQUEST["email"]))
    return "Faltando informar o e-mail do cliente";

  $nome = $_REQUEST["nome"];
  $tel = $_REQUEST["tel"];
  $cep = $_REQUEST["CEP"];
  $endereco = $_REQUEST["endereco"];
  $email = $_REQUEST["email"];
  
  // Cadastrar cliente
  $control = new ClinicaController();
  $cliente = $control->cadastrarCliente($nome,$endereco,$tel,$cep,$email);
  
  // Exibir a página
  $page = new HomeView();
  
  return $page->getSourceCode();
}

echo cadastrarCliente();
