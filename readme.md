
<div align='center'>

<img src="images/banner.jpg" >

</div>

<br>

<p align="center">
    <a href="https://github.com/sponsors/melchisedech333"><img src="https://img.shields.io/badge/sponsor-30363D?style=for-the-badge&logo=GitHub-Sponsors&logoColor=#white" ></a>
    <br><br>
    <img src="https://badgen.net/badge/love level/7 of 10/purple" >
    <img src="https://img.shields.io/github/languages/count/melchisedech333/c-postgresql?color=%23f34b7d" >
    <img src="https://img.shields.io/github/languages/top/melchisedech333/c-postgresql?color=%23f34b7d" >
    <img src="https://img.shields.io/github/directory-file-count/melchisedech333/c-postgresql" >
    <img src="https://img.shields.io/github/repo-size/melchisedech333/c-postgresql" >
    <img src="https://img.shields.io/github/license/melchisedech333/c-postgresql" >
</p>

Language: <a href="readme-pt.md">PT-BR</a>

The purpose of the codes in this repository is to provide a set of code examples for anyone starting to use PostgreSQL with the C language.

**If my code has helped you, please consider [sponsoring me](https://github.com/sponsors/melchisedech333) :blue_heart:** 

<br>

:bookmark_tabs: Table of Contents
-----
* [General notions](#star-General-notions)
* [Description of files](#clipboard-Description-of-files)
* [Compiling the codes](#hammer-Compiling-the-codes)
* [References and Links](#link-References-and-Links)
* [Author](#smiley-author)
* [Licence](#scroll-licence)
-----

<br>

:star: General notions
---

<br>

Para instalar o PostgreSQL no Linux (distribuições baseadas em Debian/Ubuntu), você pode executar os comandos abaixo.

```bash
sudo apt install postgresql postgresql-contrib
sudo apt install libpq-dev
```

<br>

Conectar no servidor:
```bash
sudo -u postgres psql
```

<br>

Ao acessar o servidor, você pode utilizar estes comandos abaixo para gerenciá-lo.

```
\l                     Lista os bancos de dados.
\c DB_NAME             Conecta em um banco de dados existente.
\dt                    Lista as tabelas existentes.
\q                     Sair do servidor.
```

<br>

:clipboard: Description of files
---

De uso geral:

- <b>build.sh</b>: Gera executáveis (compila).
- <b>settings.h</b>: Header contendo as configurações do servidor PostgreSQL.

<br>

Códigos:

- <b>1 - connect.c</b>: Realiza a conexão com o servidor.
- <b>2 - create table.c</b>: Cria e exclui uma tabela no banco de dados.
- <b>3 - insert item.c</b>: Insere registros em uma tabela.
- <b>4 - select all.c</b>: Seleciona os registros de uma tabela.
- <b>5 - delete.c</b>: Exclui registros.
- <b>6 - update.c</b>: Atualiza registros.

<br>

:hammer: Compiling the codes
---

Para compilar os códigos, basta executar o script <b>build.sh</b>, especificando em seus parâmetros o nome do arquivo que você deseja compilar, como no exemplo abaixo.

```bash
./build.sh "1 - connect.c"
```

<br>

O arquivo compilado sempre fica salvo com o nome <b>app-test</b>, logo, basta executá-lo para realizar os testes.

```bash
./app-test
```

<br>

:link: References and Links
---

[ZetCode, PostgreSQL programming in C](https://zetcode.com/db/postgresqlc/)

<br>

:smiley: Author
---

Sponsor: [melchisedech333](https://github.com/sponsors/melchisedech333)<br>
YouTube: [Melchisedech](https://www.youtube.com/channel/UC4Sh4wxncr5arnydpUfWPKw)<br>
Twitter: [Melchisedech333](https://twitter.com/Melchisedech333)<br>
Blog: [melchisedech333.github.io](https://melchisedech333.github.io/)<br>
LinkedIn: [Melchisedech Rex](https://www.linkedin.com/in/melchisedech-rex-724152235/)

<img src="https://github.com/melchisedech333.png?size=200" height="100" />

<br>

:scroll: License
---

[ BSD-3-Clause license](./license)

<br><br>

<div align="center">

## Remember to give me <br> a beautiful little star :star_struck:

</div>


