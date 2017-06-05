<?php

// Incluir dependências
require_once "../view/HomeView.inc";

// Exibir página principal
$home = new HomeView();

echo $home->getSourceCode();


