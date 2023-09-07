# Супер брзи увод у `C#`

Након две године учења програмској језика C, нови програмски језик C# научићеш
са лакоћом.

## Излаз

Испис текста (метода `Console.Write`):

```cs
using System;

namespace hello
{
    internal class Program
    {
        static void Main()
        {
            Console.Write("Hello, World!");
        }
    }
}
```

```text
Hello, World!_
```

Испис текста у целој линији (метода `Console.WriteLine`):

```cs
using System;

namespace hello
{
    internal class Program
    {
        static void Main()
        {
            Console.WriteLine("Hello, World!");
        }
    }
}
```

```text
Hello, World!
_
```

Испис вредности:

```cs
using System;

namespace hello
{
    internal class Program
    {
        static void Main()
        {
            Console.WriteLine(3.14159265359);
        }
    }
}
```

```text
3.14159265359
```

Испис текста и вредности:

```cs
using System;

namespace hello
{
    internal class Program
    {
        static void Main()
        {
            Console.WriteLine("Konstanta Pi:" + 3.14159265359);
        }
    }
}
```

```text
Konstanta Pi:3.14159265359
```

Може ли ћирилицом и UNICODE симболима? Обично неће бити потребе, али може:

```cs
using System;
using System.Text;

namespace hello
{
    internal class Program
    {
        static void Main()
        {
            Console.OutputEncoding = Encoding.UTF8;
            Console.WriteLine("Константа π:" + 3.14159265359);
        }
    }
}
```

```text
Константа π:3.14159265359
```

А променљиве? Неки основни типови:

- `int`: на пример: $123$ или $-123$,
- `double`: на пример: $19.99$ или $-19.99$,
- `char`: на пример: `'a'` или `'B'`,
- `string`: на пример: `"Hello, World!"`,
- `bool`: на пример: `true` или `false`.

[Остали типови](https://learn.microsoft.com/en-us/dotnet/csharp/language-reference/builtin-types/built-in-types)

Имлицитне кастовање типова:

`char -> int -> long -> float -> double`

Експлицитне кастовање типова:

`double -> float -> long -> int -> char`

Декларација променљивих и испис вредности:

```cs
using System;

namespace hello
{
    internal class Program
    {
        static void Main()
        {
            int x = 1;
            double y = 2.34;
            Console.WriteLine(x);
            Console.WriteLine(y);
        }
    }
}
```

```text
1
2.34
```

Испис вредности више променљивих или израза у једној линији:

```cs
using System;

namespace hello
{
    internal class Program
    {
        static void Main()
        {
            int x = 1, y = 2;
            Console.WriteLine("{0} + {1} = {2}", x, y, x + y);
        }
    }
}
```

Све што је важило за операторе у програмском језику C важи и овде, стим да
у програмском језику C# постоји више оператора...

## Улаз

Унос и испис стринга:

```cs
using System;

namespace hello
{
    internal class Program
    {
        static void Main()
        {
            string ime = Console.ReadLine();
            Console.WriteLine(ime);
        }
    }
}
```

```text
Velimir
Velimir
```

Унос и испис целобројне вредности:

```cs
using System;

namespace hello
{
    internal class Program
    {
        static void Main()
        {
            Console.Write("Koje si godine rodjen: ");
            int age = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Ti si rodjen " + age + ". godine.");
        }
    }
}
```

```text
Koje si godine rodjen: 1976
Ti si rodjen 1976. godine.
```
