<!DOCTYPE html>
<html>
  <head>
    <!-- Definir atributos da página -->
    <meta charset="utf-8" />
    <meta name="author" content="" />
    <meta name="description" content="Projeto escolar de uma clínica veterinária utilizando padrão DAO e MVC" />
    <meta name="keywords" content="clinica,veterinaria" />
    <title>Clínica Veterinária</title>
    
    <!-- Importar estilos e fontes -->
    <link rel="stylesheet" type="text/css" href="theme.css" />
    
    <!-- Importar scripts do projeto -->
    <!-- ... -->
    
    <!-- Importar analytics -->
    <!-- ... -->
  </head>
  
  <body>
    <header>
      <h1>Clínica Veterinária</h1>
      <nav>
        <!-- TODO: Menu do site -->
      </nav>
    </header>
    
    <main>
      <!-- Conteúdo principal -->
      <h2>Consulta de clientes:</h2>
      <form name="consulta" action="cliente.php" method="POST">
        <div><label for="cliente">Nome do cliente</label></div>
        <div>
          <input type="text" name="cliente" id="cliente" placeholder="Digite aqui">
          <input type="submit" value="Pesquisar">
        </div>
      </form>
    <hr>
      <h2>Cadastro de clientes:</h2>
      <form name="cadastro" action="cadastroCliente.php" method="POST">
        <div><label for="nome">Nome:</label></div>
        <div>
          <input type="text" name="nome" id="nome" placeholder="Digite aqui">
        </div>

        <div><label for="endereco">Endereço:</label></div>
        <div>
          <input type="text" name="endereco" id="endereco" placeholder="Digite aqui">
        </div>

        <div><label for="tel">Telefone:</label></div>
        <div>
          <input type="text" name="tel" id="tel" placeholder="Digite aqui">
        </div>

        <div><label for="CEP">CEP:</label></div>
        <div>
          <input type="text" name="CEP" id="CEP" placeholder="Digite aqui">
        </div>

        <div><label for="email">E-mail:</label></div>
        <div>
          <input type="text" name="email" id="email" placeholder="Digite aqui">
        </div><br>
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
