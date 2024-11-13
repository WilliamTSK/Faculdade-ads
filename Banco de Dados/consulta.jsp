<%@page language="java" import="java.sql.*" %>

<!DOCTYPE html>
<html lang="pt-br">
    <head>
        <title></title>
        <meta charset="utf-8">
        <style>
            tr:nth-child(even) {
                background-color: lightgray ;
            }

            tr:hover{
                background-color: #363636 ;
                color: white;
            }
        </style>
    </head>
    <body>
        <%
            //variavel para acessar o banco de dados
            String database   = "web" ;
            String enderecoBD = "jdbc:mysql://localhost:3306/" + database ;
            String usuarioBD  = "root" ;
            String senhaBD    = "" ;

            //Driver
            String driver = "com.mysql.jdbc.Driver" ;

            //Carregar o driver na memoria
            Class.forName( driver ) ;

            //Cria uma variavel para conexao com o banco de dados
            Connection conexao;

            //Abrir a conexao com o banco
            conexao = DriverManager.getConnection( enderecoBD, usuarioBD , senhaBD ) ;

            //comando para consultar no banco
            String sql = "SELECT * FROM alunos" ;

            //cria a variavel do tipo Statement
            PreparedStatement stm = conexao.prepareStatement( sql );

            //cria a variavel do tipo ResultSet
            //para armazenar os dados que estão banco
            ResultSet dados  = stm.executeQuery() ;

            out.print("<table border=1>") ;

            while ( dados.next() )
            {
                out.print("<tr>") ;
                    out.print("<td>") ;
                        out.print( dados.getString("codigo") ) ;
                    out.print("</td>") ;

                    out.print("<td>") ;
                        out.print( dados.getString("nome") ) ;                    
                    out.print("</td>") ;

                    out.print("<td>") ;
                        out.print( dados.getString("idade") ) ;
                    out.print("</td>") ;

                    out.print("<td>") ;
                        out.print( dados.getString("email") ) ;
                    out.print("</td>") ;

                    out.print("<td>") ;
                        out.print( dados.getString("senha") ) ;
                    out.print("</td>") ;                                        
                out.print("</tr>") ;
            }

            out.print("</table>") ;
        %>
    </body>
</html>