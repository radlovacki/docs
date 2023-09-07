# Гранања и циклуси

Релациони и логички оператори користе се у условним изразима исто као у
програмском језику C. Уместо вредности `1` за тачно, може се користити вредност
`true` типа `bool`, односно, уместо вредности различите од `1` за нетачно, може
се користити вредност `false` типа `bool`. Наредбе гранања и тернарни услови
оператор користе се такође исто као у програмском језику C.

Да ли је унети број мањи већи или једнак нули?

```cs
using System;

namespace hello
{
    internal class Program
    {
        static void Main()
        {
            int x = Convert.ToInt32(Console.ReadLine());
            if (x < 0)
                Console.WriteLine("Manji od nule.");
            else
                if (x == 0)
                    Console.WriteLine("Jednak nuli");
                else
                    Console.WriteLine("Veci od nule");
        }
    }
}
```
