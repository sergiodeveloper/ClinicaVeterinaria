<?php

// Habilitar exibição de erros e alertas
error_reporting(E_ALL);
ini_set('display_errors', 1);

// Incluir dependências
require_once "../view/HomeView.inc";

// Exibir a página
$page = new HomeView();

echo $page->getSourceCode();


