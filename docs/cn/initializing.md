# Иницијализација

Сви процеси који користе Winsock функције морају извршити Windows Sockets DLL
иницијализацију. Овим се уједно проверава да ли је Winsock подржан на
конкретном рачунарском систему.

Прво је потребно креирати `WSADATA` структуру која садржи информације о Windows
Sockets имплементацији.
[WSADATA](https://learn.microsoft.com/en-us/windows/win32/api/winsock/ns-winsock-wsadata).

```c
--8<-- "docs/cn/code/initializing0.c"
```

Преузми: [initializing0.c](code/initializing0.c)
