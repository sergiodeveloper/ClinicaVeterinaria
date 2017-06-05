<?php

// Incluir dependências
require_once "../view/HomeView.inc";

error_reporting(E_ALL);
ini_set('display_errors', 1);

// Exibir página principal
$home = new HomeView();

echo $home->getSourceCode();


