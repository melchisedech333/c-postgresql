
<div align='center'>

<img src="images/banner.jpg" >

</div>

<br>

<p align="center">
    <a href="https://github.com/sponsors/melchisedech333"><img src="https://img.shields.io/badge/patrocinar-30363D?style=for-the-badge&logo=GitHub-Sponsors&logoColor=#white" ></a>
    <br><br>
    <img src="https://badgen.net/badge/nível de amor/7 de 10/purple" >
    <img src="https://img.shields.io/github/languages/count/melchisedech333/c-postgresql?color=%23f34b7d&label=linguagens" >
    <img src="https://img.shields.io/github/languages/top/melchisedech333/c-postgresql?color=%23f34b7d" >
    <img src="https://img.shields.io/github/directory-file-count/melchisedech333/c-postgresql?label=arquivos" >
    <img src="https://img.shields.io/github/repo-size/melchisedech333/c-postgresql?label=tamanho repo" >
    <img src="https://img.shields.io/github/license/melchisedech333/c-postgresql?label=licen%C3%A7a" >
</p>

<br>

Language: <a href="readme.md">EN-US</a>

<br>

O propósito dos códigos deste repositório é fornecer um conjunto de exemplos de código para quem está começando a usar o PostgreSQL com a linguagem C.

**Se meu código te ajudou em algo, considere [ser um patrocinador](https://github.com/sponsors/melchisedech333) :blue_heart:** 

<br>

:star: Noções gerais
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

:hammer: Compilando os códigos
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

:bookmark_tabs: Descrição dos arquivos
---

De uso geral:

- <b>build.sh</b>: Gera executáveis (compila).
- <b>settings.h</b>: Header contendo as configurações do servidor PostgreSQL.

<br>

Códigos:

- <b>1 - connect.c</b>: Realiza a conexão com o servidor. 
- <b>2 - create table.c</b>: Cria uma nova tabela no banco de dados. 

<br>

:smiley: Autor
---

Patrocinar: [melchisedech333](https://github.com/sponsors/melchisedech333)<br>
YouTube: [Melchisedech](https://www.youtube.com/channel/UC4Sh4wxncr5arnydpUfWPKw)<br>
Twitter: [Melchisedech333](https://twitter.com/Melchisedech333)<br>
Blog: [melchisedech333.github.io](https://melchisedech333.github.io/)<br>
LinkedIn: [Melchisedech Rex](https://www.linkedin.com/in/melchisedech-rex-724152235/)

<img src="https://github.com/melchisedech333.png?size=200" height="100" />

<br>

: Referências e Links
---

[ZetCode, PostgreSQL programming in C](https://zetcode.com/db/postgresqlc/)

<br>

:scroll: Licença
---

[BSD-3-Clause license](./license)

<br><br>

<div align="center">

## Lembre-se de deixar <br> uma linda estrelinha :star_struck:

</div>


