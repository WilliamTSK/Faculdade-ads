create database escola;
use escola;

CREATE TABLE alunos (
	ra int primary key auto_increment,
    nome varchar(50) not null,
    cpf varchar(18) unique,
    endereco varchar(50),
    bairro varchar(50),
    cidade varchar(50),
    uf char(2),
    cep char(8),
    email varchar(50) unique
    
);
-- Alterar a tabela de alunos adicionando à coluna status do aluno
alter table alunos add column status varchar(10);

-- Altera o tamanho do campo endereço de 50 caracteres no maximo para 100( cada caractere corresponde a uma letra)
alter table alunos modify column endereco varchar(100);

-- Altera a tabela para deletar uma coluna
alter table alunos add column cursos varchar(50);
alter table alunos drop column cursos