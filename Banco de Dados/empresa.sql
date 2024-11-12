create database empresa;
use empresa;

create table alunos(
	IdAluno int primary key  auto_increment,
    nome varchar(50) not null,
	cpf varchar(18) unique,
    email varchar(50) unique
);

create table disciplinas(
IdDisciplina int primary key auto_increment,
nome varchar(50),
cargahoraria int,
emenda varchar (500)

);

create table notas(
IdAluno int, 
IdDisciplina int,
media float,
situacao varchar(15) check (situacao in('Aprovado','Reprovado')),
primary key (IdAluno, IdDisciplina),
constraint fk_nota_aluno foreign key(IdAluno)references Alunos(IdAluno),
constraint fk_nota_disc foreign key(IdDisciplina)references Disciplinas(IdDisciplina)
);