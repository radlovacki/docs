# Иницијализација

Пре него што се започне са коришћењем Winsock функција, мора се извршити
иницијализацијa Windows Sockets DLL-a. Овим се уједно проверава да ли је
Winsock подржан на конкретном рачунарском систему.

Прво је потребно креирати `WSADATA` структуру која садржи информације о Windows
Sockets имплементацији названу `wsaData`. Потом се позива `WSAStartup()`
функција којом се иницијализује коришћење Winsock DLL-а. `WSAStartup()`
функција има два параметра:

- Winsock верзија типа `WORD` (`MAKEWORD(2, 2)`)
- показивач на `WSADATA` структуру (`&wsaData`)

Функција `WSAStartup()` враћа нулу уколико је иницијализација била успешна,
односно број различит од нуле који представља кôд грешке. Уколико је
иницијализација била успешна, функција `WSAStartup()` уписаће у `WSADATA`
структуру информацијаме о Winsock имплементацији.

Када је Winsock програм завршен потребно је позвати функцију `WSACleanup()` без
параметара.

```c
--8<-- "docs/cn/code/initializing0.c"
```

Преузми: [initializing0.c](code/initializing0.c)

## WSADATA структура

Из `WSADATA` структуре која садржи информацијаме о Winsock имплементацији
доступни су чланови:

- `wVersion`, типа `WORD`, приказује Winsock верзију која треба да се користи.
Први бајт приказује мањи број верзије, а други број главне верзије (обично су
то бројеви `2` и `2`).
- `wHighVersion`, типа `WORD`, приказује највишу подржану Winsock верзију. Први
бајт приказује мањи број верзије, а други број главне верзије. Ово су обично
бајтови са истим вредностима као и бајтови у члану `wHighVersion`, јер се од
`WSAStartup()` функције обично и захтева највиша подржана Winsock верзија.
- `szDescription`, чува стринг дужине до 256 карактера у којем је записан опис
Winsock имплементације (обично `WinSock 2.0`).
- `szSystemStatus`, чува стринг у којем је записан тренутни статус.

Структура `WSADATA` поседује још неколико чланова који се требају игнорисати за
програме који користе Winsock верзије 2 или новије. То су чланови:

- `iMaxSockets`,
- `iMaxUdpDg` и
- `lpVendorInfo`.

Пример програма који исписује вредности осталих чланова `WSADATA` структуре:  

```c
--8<-- "docs/cn/code/initializing1.c"
```

Преузми: [initializing1.c](code/initializing1.c)

и пример програма који демонстрира како се могу искористити те вредности за
проверу захтеване Winsock верзије:

```c
--8<-- "docs/cn/code/initializing2.c"
```

Преузми: [initializing2.c](code/initializing2.c)
