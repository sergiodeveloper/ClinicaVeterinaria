<!DOCTYPE html>
<html>
  <head>
    <!-- Definir atributos da página -->
    <meta charset="utf-8" />
    <meta name="author" content="" />
    <meta name="description" content="Projeto escolar de uma clínica veterinária utilizando padrão DAO e MVC" />
    <meta name="keywords" content="clinica,veterinaria" />
    <title>Cliente - Clínica Veterinária</title>
    
    <!-- Importar estilos e fontes -->
    <link rel="stylesheet" type="text/css" href="theme.css" />
    
    <!-- Importar scripts do projeto -->
    <!-- ... -->
    
    <!-- Importar analytics -->
    <!-- ... -->
  </head>
  
  <body>
    <header>
      <h1>Cliente: <?php echo $this->getVariable("cliente")->getNome(); ?></h1>
      <nav>
        <!-- TODO: Menu do site -->
      </nav>
    </header>
    
    <main>
      <!-- Conteúdo principal -->
      <div>
        <!-- Informacoes do cliente -->
        Endereço: <?php echo $this->getVariable("cliente")->getEndereco(); ?>,
        Telefone: <?php echo $this->getVariable("cliente")->getTelefone(); ?>,
        CEP: <?php echo $this->getVariable("cliente")->getCep(); ?>,
        Email: <?php echo $this->getVariable("cliente")->getEmail(); ?>
      </div>
      
      <div>
        <h2>Animais</h2>
        <!-- Informações dos animais -->
        <?php 
          foreach($this->getVariable("animais") as $i => $animal){
        ?>
        <div>
          Animal - Nome: <?php echo $animal->getNome(); ?>,
          Idade: <?php echo $animal->getIdade(); ?>,
          Sexo: <?php echo $animal->getSexo()==0?"masculino":"feminino"; ?>,
          Espécie: <?php echo $animal->getEspecie()->getNome(); ?>
        </div>
        <?php
          }
          if(count($this->getVariable("animais")) == 0){
            echo "Nenhum animal encontrado.";
          }
        ?>
        <p>Cadastre seus animais no formulário abaixo:</p>
      </div>

      <h2>Cadastro de animais:</h2>
      <form name="cadastro" action="cadastroAnimal.php" method="POST">
        <div><label for="nome">Nome:</label></div>
        <div>
          <input type="text" name="nome" id="nome" placeholder="Digite aqui">
        </div>

        <div><label for="idade">Idade:</label></div>
        <div>
          <input type="text" name="idade" id="idade" placeholder="Digite aqui">
        </div>

        <div><label for="sexo">Sexo:</label></div>
        <div>
          <input type="text" name="sexo" id="sexo" placeholder="Digite aqui">
        </div>

        <div><label for="especie">Espécie:</label></div>
        <div>
          <input type="text" name="especie" id="especie" placeholder="Digite aqui">
        </div><br>
          <input type="hidden" name="dono" id="dono" value="<?php echo $this->getVariable('cliente')->getNome(); ?>">
        <div>  
          <input type="submit" value="Cadastrar">
        </div>
      </form>

    </main>
    
    <footer>
      <!-- TODO: rodapé da página -->
    </footer>
  </body>
</html>
