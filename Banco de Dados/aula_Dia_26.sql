SELECT * FROM funcionarios where funCodigo = 3 or funCodigo = 5 or funCodigo = 7 or funCodigo = 9;

-- ou
select * from funcionarios where funCodigo in (3,5,7,9);

select * from funcionarios
where funCodigo >= 4 and funCodigo <= 8;

select * from funcionarios
where funCodigo between 4 and 8;

select * from funcionarios
where funNome like '%Ma%';

select count(funCodigo) as 'Qtd funcionários',
	max(funSalario) as 'Maior Salario',
    min(funSalario) as 'Menor Salario',
    avg(funSalario) as 'Média Salarial',
    sum(funSalario) as 'Soma dos Salarios'
from funcionarios;

Select count(funCodigo) 'Qtde Funcionários',
	funCodFuncao 'função'
from funcionarios
group by funCodFuncao