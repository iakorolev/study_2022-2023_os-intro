---
## Front matter
title: "Отчёт по лабораторной работе № 2"
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

- Изучить идеологию и применение средств контроля версий.
- Освоить умения по работе с git.

# Задание

- Создать базовую конфигурацию для работы с git.
- Создать ключ SSH.
- Создать ключ PGP.
- Настроить подписи git.
- Зарегистрироваться на Github.
- Создать локальный каталог для выполнения заданий по предмету.

# Теоретическое введение

Системы контроля версий (Version Control System, VCS) применяются при работе нескольких человек над одним проектом. Обычно основное дерево проекта хранится в локальном или удалённом репозитории, к которому настроен доступ для участников проекта. При внесении изменений в содержание проекта система контроля версий позволяет их фиксировать, совмещать изменения, произведённые разными участниками проекта, производить откат к любой более ранней версии проекта, если это требуется.

В классических системах контроля версий используется централизованная модель, предполагающая наличие единого репозитория для хранения файлов. Выполнение большинства функций по управлению версиями осуществляется специальным сервером. Участник проекта (пользователь) перед началом работы посредством определённых команд получает нужную ему версию файлов. После внесения изменений, пользователь размещает новую версию в хранилище. При этом предыдущие версии не удаляются из центрального хранилища и к ним можно вернуться в любой момент. Сервер может сохранять не полную версию изменённых файлов, а производить так называемую дельта-компрессию — сохранять только изменения между последовательными версиями, что позволяет уменьшить объём хранимых данных.

Системы контроля версий поддерживают возможность отслеживания и разрешения конфликтов, которые могут возникнуть при работе нескольких человек над одним файлом. Можно объединить (слить) изменения, сделанные разными участниками (автоматически или вручную), вручную выбрать нужную версию, отменить изменения вовсе или заблокировать файлы для изменения. В зависимости от настроек блокировка не позволяет другим пользователям получить рабочую копию или препятствует изменению рабочей копии файла средствами файловой системы ОС, обеспечивая таким образом, привилегированный доступ только одному пользователю, работающему с файлом.

Системы контроля версий также могут обеспечивать дополнительные, более гибкие функциональные возможности. Например, они могут поддерживать работу с несколькими версиями одного файла, сохраняя общую историю изменений до точки ветвления версий и собственные истории изменений каждой ветви. Кроме того, обычно доступна информация о том, кто из участников, когда и какие изменения вносил. Обычно такого рода информация хранится в журнале изменений, доступ к которому можно ограничить.

В отличие от классических, в распределённых системах контроля версий центральный репозиторий не является обязательным.

Среди классических VCS наиболее известны CVS, Subversion, а среди распределённых — Git, Bazaar, Mercurial. Принципы их работы схожи, отличаются они в основном синтаксисом используемых в работе команд.

# Выполнение лабораторной работы

## Установка программного обеспечения

- Установка git(dnf install git) (рис. @fig:001).

![git](image/14.png){#fig:001 width=70%}

- Установка gh(dnf install gh) (рис. @fig:002).

![gh](image/28.png){#fig:002 width=70%}

## Базовая настройка git

- Зададим имя и email владельца репозитория (git config --global user.name "Name Surname", git config --global user.email "work@mail") (рис. @fig:003).

![name and email](image/11.jpg){#fig:003 width=70%}

- Настроим utf-8 в выводе сообщений git(git config --global core.quotepath false) (рис. @fig:004).

![utf-8](image/17.jpg){#fig:004 width=70%}

- Зададим имя начальной ветки(git config --global init.defaultBranch master) (будем называть её master) (рис. @fig:005).

![master](image/23.jpg){#fig:005 width=70%}

- Параметр autocrlf(git config --global core.autocrlf input) (рис. @fig:006).

![autocrlf](image/29.jpg){#fig:006 width=70%}

- Параметр safecrlf(git config --global core.safecrlf warn) (рис. @fig:007).

![safecrlf](image/32.jpg){#fig:007 width=70%}

## Создайте ключи ssh

- Мы уже умеем создавать ssh из прошлого курса Архитектуры компьютеров. (рис. @fig:008).

![ssh](image/7.jpg){#fig:008 width=70%}

## Создайте ключи pgp

- Генерируем ключ(gpg --full-generate-key) (рис. @fig:009), (рис. @fig:0010)

![pgp](image/37.png){#fig:009 width=70%}

![pgp](image/38.png){#fig:0010 width=70%}

## Настройка github

- У меня создан репозиторий. (рис. @fig:0011)

![github](image/46.png){#fig:0011 width=70%}

## Добавление PGP ключа в GitHub

- Выводим список ключей и копируем отпечаток приватного ключа (gpg --list-secret-keys --keyid-format LONG) (рис. @fig:0012)

![key pgp](image/40.png){#fig:0012 width=70%}

- Cкопируйте ваш сгенерированный PGP ключ в буфер обмена (gpg --armor --export <PGP Fingerprint> | xclip -sel clip) (рис. @fig:0013)

![copy pgp](image/41.png){#fig:0013 width=70%}

- Перейдите в настройки GitHub (https://github.com/settings/keys), нажмите на кнопку New GPG key и вставьте полученный ключ в поле ввода (рис. @fig:0014)

![pgp](image/39.png){#fig:0014 width=70%}

## Настройка автоматических подписей коммитов git

Используя введёный email, укажите Git применять его при подписи коммитов (git config --global user.signingkey <PGP Fingerprint>, git config --global commit.gpgsign true, git config --global gpg.program $(which gpg2)) (рис. @fig:0015)

![подписи коммитов](image/42.png){#fig:0015 width=70%}

## Настройка gh

- Авторизоваться в gh (gh auth login) (рис. @fig:0016)

![gh](image/43.png){#fig:0016 width=70%}

## Создание репозитория курса на основе шаблона

- Создать шаблон рабочего пространства(gh repo create study_2022-2023_os-intro --template=yamadharma/course-directory-student-template --public) (рис. @fig:0017)

![gh](image/44.png){#fig:0017 width=70%}

- Репозиторий "Операционные системы" создан.

## Настройка каталога курса

- Файлы на сервере (rm package.json) (рис. @fig:0018), (рис. @fig:0019)

![Файлы](image/45.png){#fig:0018 width=70%}

![Файлы](image/46.png){#fig:0019 width=70%}

# Выводы

Я освоил умения использования git.

