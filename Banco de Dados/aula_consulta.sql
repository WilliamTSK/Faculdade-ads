-- criando o banco de dados
create database aula_consulta;
use aula_consulta;

-- criando a tabela de função
create table funcao (
   fucCodigo int primary key auto_increment,
   fucNome   varchar(50) not null
);

-- inserindo dados na tabela de funcao
insert into funcao (fucNome) values ('Gerente de Projeto');
insert into funcao (fucNome) values ('Analista de Sistemas');
insert into funcao (fucNome) values ('Programador');
insert into funcao (fucNome) values ('Estagiário');

-- alterando a funcao de programador
update funcao set fucNome = 'Desenvolvedor de Software'
where fucCodigo = 3;

-- criando a tabela de funcionarios
create table funcionarios (
   funCodigo    int primary key auto_increment,
   funNome      varchar(50),
   funDataAdm   date,
   funSalario   float,
   funCodFuncao int,
   constraint fk_func_funcao foreign key (funCodFuncao) references funcao (fucCodigo)
);

-- popular a tabela de funcionarios (inserir dados)
insert into funcionarios (funNome, funDataAdm, funSalario, funCodFuncao) values ('Maria', '2003/08/06', 5000, 1);

insert into funcionarios (funNome, funDataAdm, funSalario, funCodFuncao) values ('Francisco','2000/11/10', 5000, 1);

insert into funcionarios (funNome, funDataAdm, funSalario, funCodFuncao) values ('Aparecida', '2004/06/22', 1500, 2);

insert into funcionarios (funNome, funDataAdm, funSalario, funCodFuncao) values ('Marino', '2005/01/05', 2500, 3);

insert into funcionarios (funNome, funDataAdm, funSalario, funCodFuncao) values ('João', '2005/02/10', 2500, 3);

insert into funcionarios (funNome, funDataAdm, funSalario, funCodFuncao) values ('Mariana', '2005/05/03', 2500, 3);

insert into funcionarios (funNome, funDataAdm, funSalario, funCodFuncao) values ('Luciano', '2005/10/15', 2500, 3);

insert into funcionarios (funNome, funDataAdm, funSalario, funCodFuncao) values ('Fernado', '2005/10/20', 2500, 3);

insert into funcionarios (funNome, funDataAdm, funSalario, funCodFuncao) values ('Marcos', '2006/05/01', 1200, 4);

insert into funcionarios (funNome, funDataAdm, funSalario, funCodFuncao) values ('Luiz', '2006/05/01', 1200, 4);