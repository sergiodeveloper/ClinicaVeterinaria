

use clinica;

drop table if exists Exame;
drop table if exists Consulta;
drop table if exists Tratamento;
drop table if exists Veterinario;
drop table if exists Animal;
drop table if exists Especie;
drop table if exists Cliente;

create table Cliente (
  codigo int not null auto_increment,
  nome char(255) not null,
  endereco char(255) not null,
  telefone char(255) not null,
  cep char(255) not null,
  email char(255) not null,
  primary key (codigo)
) character set utf8 collate utf8_unicode_ci;

create table Especie (
  codigo int not null auto_increment,
  nome char(255) not null,
  primary key (codigo),
  unique (nome)
) character set utf8 collate utf8_unicode_ci;

create table Animal (
  codigo int not null auto_increment,
  nome char(255) not null,
  idade int not null,
  sexo char(1) not null,
  especie int not null,
  dono int not null,
  primary key (codigo),
  foreign key (especie) references Especie(codigo),
  foreign key (dono) references Cliente(codigo)
) character set utf8 collate utf8_unicode_ci;

create table Veterinario (
  codigo int not null auto_increment,
  nome char(255) not null,
  endereco char(255) not null,
  telefone char(255) not null,
  primary key (codigo)
) character set utf8 collate utf8_unicode_ci;

create table Tratamento (
  codigo int not null auto_increment,
  inicio int not null,
  fim int null,
  animal int not null,
  primary key (codigo),
  foreign key (animal) references Animal(codigo)
) character set utf8 collate utf8_unicode_ci;

create table Consulta (
  codigo int not null auto_increment,
  `data` int not null,
  historico text not null,
  veterinario int not null,
  tratamento int not null,
  primary key (codigo),
  foreign key (veterinario) references Veterinario(codigo),
  foreign key (tratamento) references Tratamento(codigo)
) character set utf8 collate utf8_unicode_ci;

create table Exame (
  codigo int not null auto_increment,
  descricao text not null,
  consulta int not null,
  primary key (codigo),
  foreign key (consulta) references Consulta(codigo)
) character set utf8 collate utf8_unicode_ci;




