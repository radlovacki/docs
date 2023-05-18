# socket()

Након иницијализације неопходно је креирати `SOCKET` објекат назван `m_socket`.
Потом се позива функција `socket` за креирање сокета који је везан за одређеног
добављача транспортних услуга.

```c
SOCKET WSAAPI socket(
  [in] int af,
  [in] int type,
  [in] int protocol
);
```

Параметри:

- `af`: спецификација фамилије мрежне адресе (`AF_INET` за IPv4 или `AF_INET6`
за IPv6...),
- `type`: спецификација типа сокета (`SOCK_STREAM` за TCP или `SOCK_DGRAM` за
UDP...) и
- `protocol`: спецификација мрежног протокола (`IPPROTO_TCP` за TCP,
`IPPROTO_UDP` за UDP...).

[Документација](https://learn.microsoft.com/en-us/windows/win32/api/Winsock2/nf-winsock2-socket)

Ако не дође до грешке, функција `socket` враћа дескриптор који упућује на
новокреирани сокет. У случају грешке, враћа се вредност INVALID_SOCKET, а
код грешке може се видети позивањем `WSAGetLastError`.

На пример, отварање TCP сокета:

```c
--8<-- "docs/cn/code/socket0.c"
```

Преузми: [socket0.c](code/socket0.c)

или отварање UDP сокета:

```c
--8<-- "docs/cn/code/socket1.c"
```

Преузми: [socket1.c](code/socket1.c)
