
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
* [Licence](#scroll-License)
-----

<br>

:star: General notions
---

<br>

To install PostgreSQL on Linux (Debian/Ubuntu based distributions) you can run the commands below.

```bash
sudo apt install postgresql postgresql-contrib
sudo apt install libpq-dev
```

<br>

Connect to server:
```bash
sudo -u postgres psql
```

<br>

When accessing the server, you can use these commands below to manage it.

```
\l                     Lists the databases.
\c DB_NAME             Connects to an existing database.
\dt                    Lists existing tables.
\q                     Log out of the server.
```

<br>

:clipboard: Description of files
---

General use:

- <b>build.sh</b>: Generate executables (compile).
- <b>settings.h</b>: Header containing PostgreSQL server settings.

<br>

Codes:

- <b>1 - connect.c</b>: Makes the connection to the server.
- <b>2 - create table.c</b>: Creates and deletes a table in the database.
- <b>3 - insert item.c</b>: Insert records into a table.
- <b>4 - select all.c</b>: Selects records from a table.
- <b>5 - delete.c</b>: Delete records.
- <b>6 - update.c</b>: Update records.

<br>

:hammer: Compiling the codes
---

To compile the codes, just run the <b>build.sh</b> script, specifying in its parameters the name of the file you want to compile, as in the example below.

```bash
./build.sh "1 - connect.c"
```

<br>

The compiled file is always saved with the name <b>app-test</b>, so just run it to run the tests.

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
Twitter: [Melchisedech333](https://twitter.com/Melchisedech333)<br>
LinkedIn: [Melchisedech Rex](https://www.linkedin.com/in/melchisedech-rex-724152235/)<br>
Blog: [melchisedech333.github.io](https://melchisedech333.github.io/)<br>

<a href="https://github.com/melchisedech333" ><img src="https://github.com/melchisedech333.png?size=200" height="100" /></a>

<br>

:scroll: License
---

[ BSD-3-Clause license](./license)

<br><br>

<div align="center">

## Remember to give me <br> a beautiful little star :star_struck:

</div>


