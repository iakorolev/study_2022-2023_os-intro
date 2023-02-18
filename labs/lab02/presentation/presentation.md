---
## Front matter
lang: ru-RU
title: Презентация по лабораторной работе № 2
author:
  - Королёв Иван Андреевич.
institute:
  - Российский университет дружбы народов, Москва, Россия

## i18n babel
babel-lang: russian
babel-otherlangs: english

## Formatting pdf
toc: false
toc-title: Содержание
slide_level: 2
aspectratio: 169
section-titles: true
theme: metropolis
header-includes:
 - \metroset{progressbar=frametitle,sectionpage=progressbar,numbering=fraction}
 - '\makeatletter'
 - '\beamer@ignorenonframefalse'
 - '\makeatother'
---

## Докладчик

:::::::::::::: {.columns align=center}
::: {.column width="70%"}

  * Королёв Иван АНдреевич
  * Студент
  * Российский университет дружбы народов
  * [1032225751@pfur.ru]

:::
::: {.column width="30%"}

:::
::::::::::::::

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

# Процесс выполнения

## Установка git 

![git](image/14.png){#fig:001 width=70%}

## Установка gh 

![gh](image/28.png){#fig:002 width=70%}

## Базовая настройка git

![name and email](image/11.jpg){#fig:003 width=70%}

![utf-8](image/17.jpg){#fig:004 width=70%}

![master](image/23.jpg){#fig:005 width=70%}

## Базовая настройка git

![autocrlf](image/29.jpg){#fig:006 width=70%}

![safecrlf](image/32.jpg){#fig:007 width=70%}

## Мы уже умеем создавать ssh из прошлого курса Архитектуры компьютеров. 

![ssh](image/7.jpg){#fig:008 width=70%}

## Генерируем ключ 

![pgp](image/37.png){#fig:009 width=70%}

![pgp](image/38.png){#fig:0010 width=70%}

## У меня создан репозиторий. 

![github](image/46.png){#fig:0011 width=70%}

## Выводим список ключей и копируем отпечаток приватного ключа 

![key pgp](image/40.png){#fig:0012 width=70%}

## Cкопируйте ваш сгенерированный PGP ключ в буфер обмена 

![copy pgp](image/41.png){#fig:0013 width=70%}

## Перейдите в настройки GitHub (https://github.com/settings/keys), нажмите на кнопку New GPG key и вставьте полученный ключ в поле ввода

![pgp](image/39.png){#fig:0014 width=70%}

## Используя введёный email, укажите Git применять его при подписи коммитов 

![подписи коммитов](image/42.png){#fig:0015 width=70%}

## Авторизоваться в gh (gh auth login) 

![gh](image/43.png){#fig:0016 width=70%}

## Создать шаблон рабочего пространства 

![gh](image/44.png){#fig:0017 width=70%}

## Файлы на сервере 

![Файлы](image/45.png){#fig:0018 width=70%}

## Файлы на сервере 

![Файлы](image/46.png){#fig:0019 width=70%}

# Выводы

Я освоил умения использования git.


