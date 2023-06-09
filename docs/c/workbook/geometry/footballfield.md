# Фудбалски терен

Извор: [petlja.org](https://petlja.org/biblioteka/r/Zbirka/fudbalski_teren)

Фудбалски терен димензија $d\times s$ треба оградити правоугаоном оградом тако
да је растојање страница ограде од линије терена $r$. Напиши програм који
одређује дужину ограде.

## Улаз

У три реда стандардног улаза налазе се три цела броја:

- $d$ - дужина терена у метрима ($90\leq d\leq 120$)
- $s$ - ширина терена у метрима ($45\leq s\leq 90$)
- $r$ - растојање ограде од терена у метрима ($2\leq r\leq 10$)

## Излаз

Дужина ограде у метрима.

## Пример

Улаз

```text
100
60
3
```

Излаз

```text
344
```

## Понуђено решење

Дужине страница правоугаоне ограде су $a=d+2\cdot r$ и $b=s+2\cdot r$, па је
дужина ограде обим правоугаоника са наведеним страницама, који je једнак:
$2\cdot(a+b)=2\cdot((d+2\cdot r)+(s+2\cdot r))=2\cdot(d+s+4\cdot r)$.

```c
--8<-- "docs/c/workbook/geometry/footballfield0.c"
```

Преузми: [footballfield0.c](footballfield0.c)

Друга могућност је директно применити крајњу формулу коју смо извели. Тиме се
добија краћи, али мало мање разумљив програм.

```c
--8<-- "docs/c/workbook/geometry/footballfield1.c"
```

Преузми: [footballfield1.c](footballfield1.c)

## Оптимизација решења

Нема потребе уводити променљиву `obim`. Обим се може исписати као аргумент
функције `printf()`:

```c
--8<-- "docs/c/workbook/geometry/footballfield2.c"
```

Преузми: [footballfield2.c](footballfield2.c)

По аутору задатка $d$ може да добије вредности од 90 до 120, $s$ од 45 до 90 и
$r$ од 2 до 10 што значи да резултат не може бити број већи од 500. Због тога,
нема потребе да се приликом декларације променљивих користи тип `int` и у
меморији заузима 4 бајта по променљивој. Исправније би било користити
`unsigned short` што у меморији заузима 2 бајта по променљивој - довољно за приказ целобројних вредности од 0 до 65535.

```c
--8<-- "docs/c/workbook/geometry/footballfield3.c"
```

Преузми: [footballfield3.c](footballfield3.c)
