<!DOCTYPE html>
<html><head>
<meta http-equiv="content-type" content="text/html; charset=UTF-8">
    <!-- Definir atributos da página -->
    <meta charset="utf-8">
    <meta name="author" content="">
    <meta name="description" content="Projeto escolar de uma clínica veterinária utilizando padrão DAO e MVC">
    <meta name="keywords" content="clinica,veterinaria">
    <title>Clínica Veterinária</title>
    
    <!-- Importar estilos e fontes -->
    <link rel="stylesheet" type="text/css" href="theme.css">
    
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
      <section>
        <h2>Consulta de clientes:</h2>
        <form name="consulta" action="cliente.php" method="POST">
          <field>
            <label for="cliente">Nome do cliente</label></div>
            <div>
              <input name="cliente" id="cliente" placeholder="Digite aqui" type="text">
              <input value="Pesquisar" type="submit">
            </div>
          </field>
        </form>
      </section>
      <section>
        <h2>Cadastro de clientes:</h2>
        <form name="cadastro" action="cadastroCliente.php" method="POST">
          <field>
            <label for="nome">Nome:</label></div>
            <div>
              <input name="nome" id="nome" placeholder="Digite aqui" type="text">
            </div>
          </field>
          <br>
          <field>
            <label for="endereco">Endereço:</label></div>
            <div>
              <input name="endereco" id="endereco" placeholder="Digite aqui" type="text">
            </div>
          </field>
          <br>
          <field>
            <label for="tel">Telefone:</label></div>
            <div>
              <input name="tel" id="tel" placeholder="Digite aqui" type="text">
            </div>
          </field>
          <br>
          <field>
            <label for="CEP">CEP:</label></div>
            <div>
              <input name="CEP" id="CEP" placeholder="Digite aqui" type="text">
            </div>
          </field>
          <br>
          <field>
            <label for="email">E-mail:</label></div>
            <div>
              <input name="email" id="email" placeholder="Digite aqui" type="text">
            </div>
          </field>
          <div>  
            <input value="Cadastrar" type="submit">
          </div>
        </form>
      </section>

    </main>

    <footer>
      <!-- TODO: rodapé da página -->
    </footer>
  </body>
</html>
