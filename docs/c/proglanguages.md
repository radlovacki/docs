# Програмски језици

## Дефиниција

Језик представља скуп правила за комуникацију између субјеката. Помоћу језика
се представљају и преносе информације. Природни језик се користи за
комуникацију између људи у говорној или писаној форми.

Програмски језик служи за комуникацију између човека и рачунара. Човек у
рачунар уноси текст (кôд програма) на програмском језику, са циљем да рачунар
изврши инструкције задате у том тексту. Програмски језик се може дефинисати као
скуп речи и правила које се користе за писање рачунарских програма који описују
послове које треба да обави рачунар.

До данас је креирано више хиљада програмских језика, али нису сви једнако важни
и заступљени.

## Поделе програмских језика

Програмски језици могу се поделити на много начина и у много категорија у
зависности од критеријума на основу којих се врши подела.

### Подела према степену блискости са архитектуром рачунара

Према степену блискости са архитектуром рачунара програмски језици се деле на
језике ниског нивоа (машински и асемблерски) и језике високог нивоа (C, C++,
C#, Java...). Језици ниског нивоа подразумевају блискост са хардвером, док
језици високог нивоа, захваљујући компајлерима, не зависе од хардвера већ се
могу користити на различитим архитектурама рачунара. Некада се у оваквим
поделама програмски језик C сврстава у језике средњег нивоа.

Машински програм извршава се директно у процесору где процесор тумачи машинске
кôдове и овакви програми су потпуно неразумљиви човеку. Асемблерски програми
састоје се из наредби којим се више или мање придружују машинске наредбе.
Наредбе асемлерских програма пишу се у виду мнемоничких скраћеница разумљивих
човеку. Наредбе програмских језика високог нивоа су блиске енглеском језику и
структуриране су тако да одговарају начину размишљања програмера.

Дати су примери програма у програмским језицима високог (C, C++, C#) и ниског
нивоа (асемблерски програм и део машинског кôда). По извршавању, сви програми
на стандардни излаз исписују текст *Hello, World!*.

=== "C"

    ```c
    #include <stdio.h>

    int main(void)
    {
        printf("Hello, World!");
        return 0;
    }
    ```

=== "C++"

    ```cpp
    #include <iostream>

    int main(void)
    {
        std::cout << "Hello, World!";
        return 0;
    }
    ```

=== "C#"

    ```cs
    using System;

    namespace HelloWorld
    {
        internal class Program
        {
            static void Main(string[] args)
            {
                Console.WriteLine("Hello, World!");
            }
        }
    }
    ```

=== "Python"

    ```py
    print("Hello, World!")
    ```

=== "ASM"

    ```asm
    printf      proto
    includelib  msvcrt.lib
    includelib  legacy_stdio_definitions.lib

    .data
            msg db 'Hello, World!', 0

    .code
    main    proc
            sub rsp, 40h
            mov rcx, offset msg
            call printf
            add rsp, 40h
            ret
    main    endp
            end
    ```

=== "Mашински кôд"

    ```text
    4d 5a 90 00 03 00 00 00 04 00 00 00 ff ff 00 00
    b8 00 00 00 00 00 00 00 40 00 00 00 00 00 00 00
    00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
    00 00 00 00 00 00 00 00 00 00 00 00 f8 00 00 00
    0e 1f ba 0e 00 b4 09 cd 21 b8 01 4c cd 21 54 68
    69 73 20 70 72 6f 67 72 61 6d 20 63 61 6e 6e 6f
    74 20 62 65 20 72 75 6e 20 69 6e 20 44 4f 53 20
    6d 6f 64 65 2e 0d 0d 0a 24 00 00 00 00 00 00 00
    af c0 6f c1 eb a1 01 92 eb a1 01 92 eb a1 01 92
    54 dd 00 93 e8 a1 01 92 54 dd 04 93 f3 a1 01 92
    54 dd 05 93 e0 a1 01 92 54 dd 02 93 e8 a1 01 92
    ff ca 00 93 ef a1 01 92 eb a1 00 92 ac a1 01 92
    32 dc 05 93 ea a1 01 92 32 dc fe 92 ea a1 01 92
    32 dc 03 93 ea a1 01 92 52 69 63 68 eb a1 01 92
    00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
    00 00 00 00 00 00 00 00 50 45 00 00 64 86 0a 00
    c3 e8 42 64 00 00 00 00 00 00 00 00 f0 00 22 00
    0b 02 0e 23 00 7e 00 00 00 78 00 00 00 00 00 00
    ...
    ```

### Подела према начину превођења програма

Према начину превођења програма, програмски језици деле се на компајлерске и
интерпретерске. Код компајлерских језика врши се превођење програма у циљу
добијања извршног програма, који се касније може независно извршавати. Код
интерпретерских језика врши се превођење сваке линије кода пре њеног извршења,
а програм се не може извршити независно без постојања интерпретера.

Програмски језици засновани на компајлерима су C, C++, C#, Java и др.
Програмски језици засновани на интерпретерима су Python, Ruby, Perl,

Више о процесу превођења изворног кода у извршни у некој од наредних лекција.

### Подела према начину програмирања

Према начину програмирања, програмски језици могу се сврстати се у основне
програмске парадигме. Програмска парадигма може да означава: програмски стил,
начин/стил програмирања и класификацију међусобно сличних програмских језика.

Програмске парадигме изучавају се како би се боље упознала својства програмских
језика који им припадају. Основна подела програмских парадигми је на:

- императивне парадигме
- декларативне парадигме

**Императивна парадигма** подразумева програмске језике у којима се користе
искази/наредбе који мењају стање програма. Основне подкатегорије императивне
парадигме су:

- процедуралне парадигме (програмски језици C, Pascal, Fortran)
- објектно-оријентисане парадигме (програмски језици C++, C^#, Java)

**Декларативна парадигма** подразумева програмске језике у којима се више
изражава логика него искази/наредбе. Основне подкатегорије декларативне
парадигме су:

- функционалне парадигме (програмски језици Python, Haskell, F#)
- логичке парадигме (програмски језици Prolog и његови деривати)

У савременим програмским језицима увек је помешано више програмских парадигми
*(енгл. multi-paradigm)*, на пример, програмски језик C++ јесте
објектно-оријентисан, али се може сврстати и у групу процедуралних и у групу
функционалних језика. Данас постоји око сто категорија и поткатегорија
програмских парадигми.

## Шта нису програмски језици

Језици за описивање/структурирање текста нису програмски језици јер се помоћу
њих не пишу програми које треба да изврши рачунар. Примери оваквих језика су:
HTML, CSS, XML, SGML, JSON и др.