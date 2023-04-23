---
## Front matter
title: "Отчёт по проекту. Четвертый этап."
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

* Зарегистрироваться на соответствующих ресурсах и разместить на них ссылки на сайте.

* Сделать пост по прошедшей неделе.

* Добавить пост на тему создание презентаций.

# Теоретическое введение

Один из самых популярных генераторов статических сайтов с открытым исходным кодом, написан на языке Go. Благодаря своей удивительной скорости и гибкости, Hugo делает создание веб-сайтов увлекательным.

# Выполнение лабораторной работы

## Зарегистрироваться на соответствующих ресурсах и разместить на них ссылки на сайте. 

На данном скриншоте я демонстрирую, что я разместил на своем сайте ссылки на необходимые ресурсы (рис. @fig:001), (рис. @fig:002)

![Сайты](image/1.png){#fig:001 width=70%}

![Сайты](image/2.png){#fig:002 width=70%}

## Сделать пост по прошедшей неделе. 

На данном скриншоте я демонстрирую, что я разместил пост по прошедшей неделе на своём сайте (рис. @fig:003), (рис. @fig:004), (рис. @fig:005), (рис. @fig:006)

![Пост по прошедшей неделе](image/3.png){#fig:003 width=70%}

![Пост по прошедшей неделе](image/7.png){#fig:004 width=70%}

![Пост по прошедшей неделе](image/9.png){#fig:005 width=90%}

![Пост по прошедшей неделе](image/5.png){#fig:006 width=70%}

## Добавить пост на тему создание презентаций.

На данном скриншоте я демонстрирую, что я разместил пост на тему создание презентаций (рис. @fig:007), (рис. @fig:008), (рис. @fig:009), (рис. @fig:0010)

![Добавить пост на тему создание презентаций](image/3.png){#fig:007 width=70%}

![Добавить пост на тему создание презентаций](image/6.png){#fig:008 width=70%}

![Добавить пост на тему создание презентаций](image/8.png){#fig:009 width=90%}

![Добавить пост на тему создание презентаций](image/4.png){#fig:0010 width=70%}

# Выводы

Я научился добавлять на сайт hugo информацию о своих навыках, достижениях и опыте. Закрепил умения создавать и добавлять посты на сайт hugo.

