# bind()

Функција `bind()` повезује мрежну адресу и сокет и има следећу синтаксу:

```c
int WSAAPI bind(
  [in] SOCKET         s,
  [in] const sockaddr *name,
  [in] int            namelen
);
```

где су:

- `s`, дексриптор који идентификује сокет,
- `name`, показивач на `SOCKADDR` структуру мрежне адресе са којом треба
повезати сокет и
- `namelen`, дужина вредности у бајтовима на коју показује показивач `name`.

Ако се приликом повезивања мрежне адресе и сокета не деси грешка, функција
`bind()` враћа нулу. У супротном враћа `SOCKET_ERROR` и код грешке који се може
прочитати функцијом `WSAGetLastError()`.

Сокет креиран позивом `socket()` функције нема додељено име. Функцијом `bind()`
креираном сокету додељује се име које садржи:

- фамилију мрежним адреса
- адресу хоста
- број порта

Фамилија мрежних адреса наводи се исто као код функције `socket()` (нпр.
`AF_INET` за IPv4). Приликом навођења адресе хоста користи се `inet_addr()`
функција за претварање стринга који представља IPv4 мрежну адресу у исправан
формат адресе за `IN_ADDR` структуру
[[линк]](https://learn.microsoft.com/en-us/windows/win32/api/winsock2/nf-winsock2-inet_addr).
Приликом навођења броја порта користи се `htons()` функција за претварање
16-битног целог броја у мрежни формат који се користи у TCP/IP мрежама
[[линк]](https://learn.microsoft.com/en-us/windows/win32/api/winsock2/nf-winsock2-htons).

```c
--8<-- "docs/cn/code/bind0.c"
```

Преузми: [bind0.c](code/bind0.c)