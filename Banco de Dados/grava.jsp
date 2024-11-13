<%@page language="java" import="java.sql.*" %>

<%
    //cria as variaveis e armazena as informações digitadas pelo usuário
    String vnome  = request.getParameter("txtNome") ;
    int    vidade = Integer.parseInt( request.getParameter("txtIdade") );
    String vemail = request.getParameter("txtEmail");
    String vsenha = request.getParameter("txtSenha"); 

    //variaveis para acessar o banco de dados
    String database = "web"; 
    String endereco = "jdbc:mysql://localhost:3306/" + database ; 
    String usuario  = "root"; 
    String senha    = "";

    //Driver 
    String driver = "com.mysql.jdbc.Driver" ;

    //Carrega o driver na memoria
    Class.forName( driver ) ;

    //Cria a variavel para conectar com o banco
    Connection conexao ;

   //Abrir a conexao com o banco
   conexao = DriverManager.getConnection( endereco , usuario, senha) ;

   //Varival para o comando Insert do SQL
   String sql = "INSERT INTO alunos (nome, idade, email, senha) values (?, ?, ?, ?)" ;

   //Cria a variavel Statement para executar o SQL
   PreparedStatement stm = conexao.prepareStatement(sql) ;
   stm.setString( 1 , vnome ) ;
   stm.setInt( 2 , vidade ) ;
   stm.setString( 3 , vemail ) ;
   stm.setString( 4 , vsenha ) ;

   stm.execute() ;
   stm.close() ;

   out.print("<h3>Dados gravados!</h3>") ;
   out.print("<br><br>") ;
   out.print("<a href='cadastro.html'>Voltar</a>") ;

%>


