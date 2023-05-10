---
## Front matter
title: "Отчёт по проекту. Пятый этап."
author: "Королёв Иван Андреевич"

## Generic otions
lang: ru-RU
toc-title: "Содержание"

## Bibliography
bibliography: bib/cite.bib
csl: pandoc/csl/gost-r-7-0-5-2008-numeric.csl

## Pdf output format
toc: true # Table of contents
toc-depth: 2
lof: true # List of figures
lot: true # List of tables
fontsize: 12pt
linestretch: 1.5
papersize: a4
documentclass: scrreprt
## I18n polyglossia
polyglossia-lang:
  name: russian
  options:
	- spelling=modern
	- babelshorthands=true
polyglossia-otherlangs:
  name: english
## I18n babel
babel-lang: russian
babel-otherlangs: english
## Fonts
mainfont: PT Serif
romanfont: PT Serif
sansfont: PT Sans
monofont: PT Mono
mainfontoptions: Ligatures=TeX
romanfontoptions: Ligatures=TeX
sansfontoptions: Ligatures=TeX,Scale=MatchLowercase
monofontoptions: Scale=MatchLowercase,Scale=0.9
## Biblatex
biblatex: true
biblio-style: "gost-numeric"
biblatexoptions:
  - parentracker=true
  - backend=biber
  - hyperref=auto
  - language=auto
  - autolang=other*
  - citestyle=gost-numeric
## Pandoc-crossref LaTeX customization
figureTitle: "Рис."
tableTitle: "Таблица"
listingTitle: "Листинг"
lofTitle: "Список иллюстраций"
lotTitle: "Список таблиц"
lolTitle: "Листинги"
## Misc options
indent: true
header-includes:
  - \usepackage{indentfirst}
  - \usepackage{float} # keep figures where there are in the text
  - \floatplacement{figure}{H} # keep figures where there are in the text
---

# Цель работы

Научиться создавать и  оформлять сайт на Hugo.

# Задание

* Сделать записи для персональных проектов.
* Сделать пост по прошедшей неделе.
* Добавить пост на тему по выбору.

# Теоретическое введение

Один из самых популярных генераторов статических сайтов с открытым исходным кодом, написан на языке Go. Благодаря своей удивительной скорости и гибкости, Hugo делает создание веб-сайтов увлекательным.

# Выполнение лабораторной работы

## Сделать записи для персональных проектов

На данных скриншотах демонстрирую выполнение задания. Добавил информацию о проектах (рис. @fig:001),(рис. @fig:002),(рис. @fig:003),(рис. @fig:004)

![Сделать записи для персональных проектов](image/1.png){#fig:001 width=70%}

![Сделать записи для персональных проектов](image/2.png){#fig:002 width=70%}

![Сделать записи для персональных проектов](image/3.png){#fig:003 width=70%}

![Сделать записи для персональных проектов](image/4.png){#fig:004 width=70%}

## Сделать пост по прошедшей неделе

На данных скриншотах демонстрирую выполнение задания. Сделал пост по прошедшей неделе (рис. @fig:005),(рис. @fig:006)

![Сделать пост по прошедшей неделе](image/5.png){#fig:005 width=70%}

![Сделать пост по прошедшей неделе](image/9.png){#fig:006 width=70%}

## Добавить пост на тему по выбору

На данных скриншотах демонстрирую выполнение задания. Добавил пост на тему "Языки научного программирования". (рис. @fig:007),(рис. @fig:008)

![Сделать пост по прошедшей неделе](image/6.png){#fig:007 width=70%}

![Сделать пост по прошедшей неделе](image/7.png){#fig:008 width=70%}

# Выводы

Я научился добавлять на сайт hugo информацию о своих проектах. Закрепил умения создавать и добавлять посты на сайт hugo.
