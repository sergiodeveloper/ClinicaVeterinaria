<?php

// Habilitar exibição de erros e alertas
error_reporting(E_ALL);
ini_set('display_errors', 1);

// Incluir dependências
require_once "../view/ClienteView.inc";
require_once "../control/ClinicaController.inc";

function CadastrarCliente(){
  // Verificar entradas
  if(! isset($_REQUEST["nome"]) || empty($_REQUEST["nome"]))
    return "Faltando informar o nome do animal";
  if(! isset($_REQUEST["idade"]) || empty($_REQUEST["idade"]))
    return "Faltando informar a idade do animal";
  if(! isset($_REQUEST["sexo"]))
    return "Faltando informar o sexo do animal";
  if(! isset($_REQUEST["especie"]) || empty($_REQUEST["especie"]))
    return "Faltando informar a espécie do animal";
  if(! isset($_REQUEST["dono"]) || empty($_REQUEST["dono"]))
    return "Houve um erro, tente novamente.";
  

  $nome = $_REQUEST["nome"];
  $idade = $_REQUEST["idade"];
  $sexo = $_REQUEST["sexo"];
  $nomeEspecie = $_REQUEST["especie"];
  $dono = $_REQUEST["dono"];

  // Cadastrar animal
  $control = new ClinicaController();
  $cliente = $control->pesquisarCliente($dono);

  if($cliente == null){
    return "Houve um erro, tente novamente";
  }

  $especie = $control->cadastrarEspecie($nomeEspecie);

  $control->cadastrarAnimal($nome,$idade,$sexo,$especie,$cliente);
  

  // Exibir a página
  $page = new ClienteView(
    $cliente,
    $control->pesquisarAnimais($cliente)
  );
  
  return $page->getSourceCode();
}

echo cadastrarCliente();
