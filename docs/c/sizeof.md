# Оператор sizeof

Унарни оператор sizeof користи се за рачунање величине операнда у бајтовима
$[B]$. Резултат операције sizeof је неозначена интегрална константа, која је
дефинисана у `<stddef.h>` као `size_t`.

Коришћењем овог оператора избегава се експлицитно навођење величине типова
података у коду програма, јер величине типова података могу да завише од
компајлера (нпр. различита величина `long double` типа у Microsoft и GNU C
компајлерима) или архитектуре рачунаског система.

Операнд `sizeof` оператора може бити основни или изведени тип података или
израз. Операнд `sizeof` оператора не може бити тип функције, тип `void` нити
бит-поља. Синтакса:

```c
sizeof unary-expression
sizeof ( type-name )
```

## Тип података као операнд

Ако је операнд тип података (са или без модификатора), резултат операције је
количина меморије у бајтовима $[B]$ која се алоцира за тип. На пример:

```c
--8<-- "docs/code/sizeof0.c"
```

Преузми: [sizeof0.c](code/sizeof0.c)

На излазу се добија величина наведених типова у бајтовима:

```text
1
2
4
8
4
8
```

## Израз као операнд

Ако је операнд израз, резултат операције је количина меморије у бајтовима $[B]$
која се алоцира за вредност израза. На пример:

```c
--8<-- "docs/code/sizeof1.c"
```

Преузми: [sizeof1.c](code/sizeof1.c)

На излазу се добија количина меморије која се алоцира за `int + double`, што
даје `double`, односно $8 B$.

```text
8
```

## Compile-time оператор

Оператор `sizeof` је compile-time оператор, што значи да се израз као операнд
не извршава. На пример:

```c
--8<-- "docs/code/sizeof2.c"
```

Преузми: [sizeof2.c](code/sizeof2.c)

На излазу се добија вредност променљивих `a` и `b`. Како је `a` инкрементиран
као операнд оператора `sizeof` његова вредност се није повећала за 1.

```text
10 4
```

## Низ као операнд

Ако је операнд оператора `sizeof` низ, резултат операције је величина низа, а
не број елемената у низу. Број елемената у низу може се израчунати као количник
резултата који се добијају применом оператора `sizeof` на низ и на први елемент
низа. На пример:

```c
--8<-- "docs/code/sizeof3.c"
```

Преузми: [sizeof3.c](code/sizeof3.c)

На излазу се добија количник величине низа од 10 целих бројева и величине првог
елемента низа, што је $40 B / 4 B = 10 B$.

```text
10
```

## Структура или унија као операнд

Ако је операнд оператора `sizeof` структура или унија, онда је резултат
операције збир броја бајтова алоцираних за чланове структуре или уније,
укључујући унутрашњи и спољашњи падинг *(енгл. padding)*. Падинг је проширење
које компајлери додају у случајевима када су типови чланова структуре или уније
различитих величина и/или на крају структуре или уније. То значи да резултат
операције `sizeof` оператора над структуром или унијом можда неће одговарати
збиру величина чланова структуре или уније. На пример:

```c
--8<-- "docs/code/sizeof4.c"
```

Преузми: [sizeof4.c](code/sizeof4.c)

На излазу се добија `24`

```text
┌───┬───┬───┬───┬───┬───┬───┬───┐
│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 
├───┴───┴───┴───┴───┴───┴───┴───┤
│       a       │    padding    │
├───────────────┴───────────────┤
│               b               │
├───────┬───────────────────────┤
│   c   │        padding        │
└───────┴───────────────────────┘
```

Редослед навођења чланова структуре или уније може да резултује различитим
величинама због различитих падинга. На пример:

```c
--8<-- "docs/code/sizeof5.c"
```

Преузми: [sizeof5.c](code/sizeof5.c)

На излазу се добија `16`

```text
┌───┬───┬───┬───┬───┬───┬───┬───┐
│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 
├───┴───┴───┴───┴───┴───┴───┴───┤
│               b               │
├───────────────┬───────┬───────┤
│       a       │   c   │padding│
└───────────────┴───────┴───────┘
```

Такође:

```c
--8<-- "docs/code/sizeof6.c"
```

Преузми: [sizeof6.c](code/sizeof6.c)

На излазу се добија `16`

```text
┌───┬───┬───┬───┬───┬───┬───┬───┐
│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 
├───┴───┴───┴───┴───┴───┴───┴───┤
│               b               │
├───────┬───────┬───────────────┤
│   c   |padding│       a       │
└───────┴───────┴───────────────┘
```

C компајлери неће сами променити распоред чланова стуктуре или уније како би
оптимизовали заузеће меморијског простора - имплементираће структуру или унију
онако како је дефинисана од стране програмера.

## Динамичка алокација меморије

Оператор `sizeof` често се користи приликом динамичке алокације меморије. Да би
се избегло експлицитно навођење величине одређеног типа, користи се оператор
`sizeof` са именом типа као операндом.

На пример, ако је потребно алоцирати меморију за низ који се састоји од `n`
бројева типа `int`:

```c
int n;
scanf("%d", &n);
int *arr = (int*)malloc(n * sizeof(int));
```