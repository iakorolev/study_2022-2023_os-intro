---
## Front matter
title: "Отчёт по проекту. Шестой этап."
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

* Сделать поддержку английского и русского языков.

* Разместить элементы сайта на обоих языках.

* Разместить контент на обоих языках.

* Сделать пост по прошедшей неделе.

* Добавить пост на тему по выбору (на двух языках).

# Теоретическое введение

Один из самых популярных генераторов статических сайтов с открытым исходным кодом, написан на языке Go. Благодаря своей удивительной скорости и гибкости, Hugo делает создание веб-сайтов увлекательным.

# Выполнение лабораторной работы

## Главная страница сайта на двух языках 

Главная страница сайта на двух языках  (рис. @fig:001), (рис. @fig:002).

![Главная страница сайта на двух языках](image/3.png){#fig:001 width=70%}

![Главная страница сайта на двух языках](image/4.png){#fig:001 width=70%}

## Часть поста на тему по выбору на двух языках 

Часть поста на тему по выбору на двух языках (рис. @fig:003), (рис. @fig:004), (рис. @fig:005)

![Часть отчёта на двух языках](image/5.png){#fig:003 width=70%}

![Часть отчёта на двух языках](image/7.png){#fig:004 width=70%}

![Часть отчёта на двух языках](image/1.png){#fig:005 width=70%}

## Пост по прошедшей неделе

 Пост по прошедшей неделе (рис. @fig:006)

![Пост по прошедшей неделе](image/2.png){#fig:006 width=70%}

# Выводы

Научился создавать и оформлять сайт на Hugo. Перевел сайт на два языка. Закрепил умение создавать посты и отчёты.

