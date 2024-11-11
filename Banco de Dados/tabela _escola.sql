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
	drop table alunos;