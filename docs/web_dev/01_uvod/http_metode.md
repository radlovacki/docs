# HTTP методе, захтеви и одговори

**Протокол** представља скуп правила за управљање комуникацијом у рачунарској
мрежи. Да би два рачунарска система могла да комуницирају морају користе исти
комуникациони протокол.

HTTP *(енгл. Hypertext Transfer Protocol)* је основни протокол на вебу који се
користи за комуникацију између веб клијената и веб сервера. Ради по принципу
захтев/одговор, где је основни циљ испорука веб страница. Обично корисник
иницира комуникацију уносом веб адресе у адресну линију веб клијента. Веб
клијент успоставља везу са веб сервером путем TCP/IP протокола. Потом веб
сервер "ослушкује" захтеве клијента на одређеном порту.

HTTP подржава више метода путем којим је могуће послати захтев у складу са
потребама клијента. Најчешће се користе следећи захтеви:

- `GET` (достављање ресурса),
- `POST` (достављање података у телу захтева),
- `HEAD` (достављање заглавља без тела захтева),
- `PUT` (постављање података),
- `DELETE` (брисање ресурса),
- `CONNECT` (успостављање конекције),
- `OPTIONS` (листа подржаних метода),
- `TRACE` (провера путање) и
- `PATCH` (модификација ресурса).

Са овим захтевима упознаћеш се детаљније у каснијим лекцијама.

**HTTP захтев** састоји се из заглавља (енгл. *header*), празне линије и тела
захтева. У заглављу се описује захтев (тип: `GET` или `POST`, назив документа
HTML верзија, име хоста и други опциони елементи). На пример:

```text
GET /home.html HTTP/1.1
Host: developer.mozilla.org
User-Agent: Mozilla/5.0 (Macintosh; Intel Mac OS X 10.9; rv:50.0) Gecko/20100101 Firefox/50.0
Accept: text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8
Accept-Language: en-US,en;q=0.5
Accept-Encoding: gzip, deflate, br
Referer: https://developer.mozilla.org/testpage.html
Connection: keep-alive
Upgrade-Insecure-Requests: 1
If-Modified-Since: Mon, 18 Jul 2016 02:36:04 GMT
If-None-Match: "c561c68d0ba92bbeb8b0fff2a9199f722e3a621a"
Cache-Control: max-age=0
```

**Одговор веб сервера** садржи статус захтева и заглавље. Статуси се могу грубо
поделити на:

- 1xx (информације),
- 2xx (успешнe),
- 3xx (редирекцијe),
- 4xx (грешкe на страни клијента) и
- 5xx (грешкe на страни сервера).

Вероватно си се до сада сусрео са неким од следећих статуса:

- у групи 2хх:
    * `200` - успешан захтев,
    * `201` - креирано,
    * `202` - прихваћено,
    * `204` - примљено, обрада у току и др.
- у групи 3хх:
    * `301` - адреса трајно промењена,
    * `303` - одговор је на другом URI,
    * `307` - привремена редирекција,
    * `308` - поновити захтеве са новом адресом и др.
- у групи 4xx:
    * `400` - лош захтев,
    * `401` - неауторизован,
    * `403` - забрањен,
    * `404` - страница није пронађена и др.
- у групи 5хх:
    * `500` - интерна грешка на серверу,
    * `501` - сервер не може да изврши захтев,
    * `503` - сервер није доступан и др.