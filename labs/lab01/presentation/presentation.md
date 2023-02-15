---
## Front matter
lang: ru-RU
title: Лабораторная работа №1
author:
  - Королёв И.А.
institute:
  - Российский университет дружбы народов, Москва, Россия
  - Объединённый институт ядерных исследований, Дубна, Россия

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

# Вводная часть

# Цель работы

- Целью данной работы является приобретение практических навыков установки операционной системы на виртуальную машину, настройки минимально необходимых для дальнейшей работы сервисов.

# Выполнение работы
 
## Установка VirtualBox, создание виртуальной машины, установка Fedora

Я пропустил эти пункты, т.к. на данный момент у меня уже создана виртуальная машина и установлена Fedora
Демонстрирую это на рисунках.[-@fig:1],[-@fig:2]

![Virtual Box](image/1.png){#fig:1 width=70%}

![Fedora](image/2.png){#fig:2 width=70%}

## Обновление пакетов

Обновляю все пакеты (dnf -y update)[-@fig:3]

![sudo -i, update](image/3.png){#fig:3 width=70%}

## Tmux для удобства работы в консоли

Скачиваю программу для удобства работы в консоли(tmux)[-@fig:4]

![tmux](image/4.png){#fig:4 width=70%}

## Установка автоматического обновления

Aвтоматическое обновление. Установка программного обеспечения. Задаю необходимую конфигурацию в файле /etc/dnf/automatic.conf.
Запускаю таймер[-@fig:5],[-@fig:6]

![Таймер](image/5.png){#fig:5 width=70%}

## Установка автоматического обновления

![Таймер](image/6.png){#fig:6 width=70%}

## Отключение SELinux

Отключение SELinux. В файле /etc/selinux/config заменяю значение.[-@fig:7]

![Selinux](image/23.png){#fig:7 width=70%}

## Установка драйверов

Запускаю мультиплексор. Переключаюсь на роль супер-пользователя. Устанавливаю DKMS. Подключаю образ дополнений гостевой ОС. Подмонтирую диск. Устанавливаю драйвера. Перезагружаю систему. [-@fig:8],[-@fig:9]

![Drivers](image/21.png){#fig:8 width=70%}

## Установка драйверов

![Drivers](image/22.png){#fig:9 width=70%}

## Настройка раскладки клавиатуры

Запускаю мультиплексор. Переключаюсь на роль супер-пользователя. Отредактирую конфигурационный файл. Перезагрузка. [-@fig:10]

![Раскладка клавиатуры](image/8.png){#fig:10 width=70%}

## Имя пользователя и хоста.

Имя пользователя и название хоста. [-@fig:11]

![Имя пользователя и название хоста](image/24.png){#fig:11 width=70%}

## Pandoc и TexLive

Установка pandoc и необходимые расширения для создания файлов.[-@fig:12],[-@fig:13]

![pandoc](image/9.png){#fig:12 width=70%}

## Pandoc и TexLive

![pandoc](image/25.png){#fig:13 width=70%}

Установка TexLive.[-@fig:14]

## Pandoc и TexLive

![TexLive](image/20.png){#fig:14 width=70%}

# Домашнее задание

Анализ последовательности загрузки системы.Вывод команды.[-@fig:15]

![dmesg less](image/11.png){#fig:15 width=70%}

## Поиск с помошью grep

Можно использовать поиск с помощью grep.Найти следующее:

## Linux version

- Версия ядра Linux (Linux version).[-@fig:16]

![linux version](image/12.png){#fig:16 width=70%}

## MHz processor

- Частота процессора (Detected Mhz processor).[-@fig:17]

![mhz processor](image/13.png){#fig:17 width=70%}

## CPU

- Модель процессора (CPU0).[-@fig:18]

![cpu](image/14.png){#fig:18 width=70%}

## Memory available

- Объём доступной оперативной памяти (Memory available). (CPU0).[-@fig:19]

![memory](image/15.png){#fig:19 width=70%}

## Hypervisor detected

- Тип обнаруженного гипервизора (Hypervisor detected).[-@fig:20]

![hypervisor](image/16.png){#fig:20 width=70%}

## Type file

- Тип файловой системы корневого раздела.[-@fig:21],[-@fig:22],[-@fig:23]

![Тип файловой системы](image/17.png){#fig:21 width=70%}

## Type file

![Тип файловой системы](image/18.png){#fig:22 width=70%}

## Type file

![Тип файловой системы](image/19.png){#fig:23 width=70%}

## Последовательность монтирования

- Последовательность монтирования файловых систем.[-@fig:24]

![Последовательности монтирования](image/26.png){#fig:24 width=70%}

# Вывод

Я приобрёл практические навыки установки операционной системы на виртуальную машину, настройки минимально необходимых для дальнейшей работы сервисов.
