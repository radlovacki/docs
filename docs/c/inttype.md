# Целобројни тип

Целобројни тип података служе за представљање целобројних вредности. Цели
бројеви представљају се низом цифара којима претходи знак `+` или знак `-`, где
се знак `+` може изоставити уколико је број позитиван.

Број је декадан број уколико не почиње нулом. Aко почиње са `0` третира се као
окталан, односно, ако почиње са `0x` или `0X` третира се као хексадекадан.
На пример:

- `12` је декадан број чије је и декадна вредност 12
- `012` је окталан број чија је декадна вредност 10
- `0х12` је хексадекадан број чија је декадна вредност 18

Иако целобројни тип `int` са доступним модификаторима `signed`, `unsigned`,
`short` и `long` нуди много опција, у већини случајева подаци целобројног типа
декларишу се једноставно са `int`. Уколико је неопходно користити модификаторе,
то ће бити увек наглашено.

| Tип                                                                      | Опсег                                                        | B  | Спецификатор      |
| ------------------------------------------------------------------------ | ------------------------------------------------------------ | -- | ----------------- |
| `short`, `short int`, `signed short`, `signed short int`                 | $−32,768$ ... $32,767$                                       | 4  | `%hi` или `%hd`   |
| `unsigned short`, `unsigned short int`                                   | $0$ ... $65,535$                                             | 4  | `%hu`             |
| `int`, `signed`, `signed int`                                            | $-2,147,483,648$ ... $2,147,483,647$                         | 8  | `%i` или `%d`     |
| `unsigned`, `unsigned int`                                               | $0$ ... $4,294,967,295$                                      | 8  | `%u`              |
| `long`, `long int`, `signed long`, `signed long int`                     | $-2,147,483,648$ ... $2,147,483,647$                         | 8  | `%li` или `%ld`   |
| `unsigned long`, `unsigned long int`                                     | $0$ ... $4,294,967,295$                                      | 8  | `%lu`             |
| `long long`, `long long int`, `signed long long`, `signed long long int` | $-9,223,372,036,854,775,808$ ... $9,223,372,036,854,775,807$ | 16 | `%lli` или `%lld` |
| `unsigned long long`, `unsigned long long int`                           | $0$ ... $18,446,744,073,709,551,615$                         | 16 | `%llu`            |

!!! warning "Напомена"

    Опсег вредности за податке целобројног типа зависи од декларације, али
    зависи и од рачунарског система и компајлера! На пример, у одређеној
    литератури или на интернету се може прочитати да целобројна вредност типа
    `int` заузима $2B$ у меморији, што је минимална вредност по стандарду, док
    је та вредност данас у пракси увек $4B$.

## Провера опсега вредности

Минималне и максималне вредности које може да има податак целобројног типа на
одређеном рачунарском систему са одређеним C компајлером може се проверити
помоћу следећег програма:

```c
--8<-- "docs/c/code/intlimits.c"
```

Преузми: [intlimits.c](code/intlimits.c)
