# Основни елементи веб технологија

**HTML је језик за опис хипертекста** (није програмски језик) - користи се за
израду веб-страница. Карактеристичан је по "таговима" којима се дефинише
структура и садржај веб-странице. Иако је за израду веб страница довољан
најобичнији текст едитор (нпр. *Notepad*), за ову намену користе се
специјаловани кôд-едитори попут *Visual Studio Code* или *Sublime Text*
едитора. Последња верзија HTML језика је HTML 5 коју препоручује *W3C* (енгл.
*World Wide Web Consortium*). Минимални HTML кôд једне веб странице може да
изгледа овако:

```html
<!DOCTYPE html>
<html>
<head>
    <title>My First Web Page</title>
    <link rel="stylesheet" type="text/css" href="style.css">
</head>
<body>
    <p>Hello, World!</p>
</body>
</html>
```

Често се стилизовање веб страница издваја у посебне *CSS* (енгл. *Cascading
Style Sheets*) датотеке. **CSS је језик за стилизовање докумената креираних у
описним језицима** попут HTML и XML (није програмски језик). Последња верзија
CSS језика је CSS 3. Стилизовање минималне веб странице дате у претходном
примеру може се урадити у фајлу `style.css` на следећи начин:

```css
body {
    font-family: Consolas, monospace;
    background-color: #000000;
    margin: 0;
    padding: 20px;
}

p {
    color: #4AF626;
}
```

**Интеракцију између корисника и веб странице могуће је контролисати у веб
прегледачу помоћу програмског језика JavaScript** или скраћено JS. JavaScript
јесте програмски језик високог нивоа који се извршава у тренутку генерисања
веб странице у прегледачу. Да би се исправно извршавао у свим веб прегледачима,
креиран је по ECMAScript стандарду.

Могуће је остварити и **интеракцију између веб сервера и корисника помоћу
програмских језика који се извршавају на веб серверу**. Онда се каже да се
на веб серверу хостује веб апликација, а не веб сајт. Веб апликације пишу се
у програмским језицима ASP.NET, PHP и др. Оне често приступају базама података
у којима се складиште подаци за приказ на генерисаним веб страницама.

Веб сајтови се тако могу поделити на основу веб технологија на:

- **статичке веб сајтове** које су креиране само помоћу HTML и CSS језика,
- **динамичке веб сајтове** чији се садржај мења у зависности од ауторизације
или акција корисника (странице генерисане на веб серверу) и
- **интерактивне веб сајтове** чији се садржај мења у прегледачу у зависности
од акција корисника (странице које користе JavaScript) - интеракција се може
имплементирати и у статичким и у динамичким веб страницама.

**Веб сервер** може бити софтвер или хардверски уређај чија је основна улога да
покреће софтвер за испоруку HTML докумената (и пратећих докумената попут
датотека са CSS и JS кодовима, слика и осталих мултимедијалних докумената).

**Веб адреса** или URL *(енгл. Uniform Resource Locator)* представља везу ка
веб ресурсу, односно ка локацији веб сајта. Формира се као низ карактера по
унапред договореној шеми. На пример, у следећој веб адреси:

```text
https://www.webdev.org/something/index.php
```

наведени су редом:

- ознака протокола (најчешће `https`, ређе `http`),
- двотачка и две косе црте `://`,
- име хоста, односно домен на којем се налази веб сајт (`www.radlovacki.com`) и
- путања до датотеке коју треба приказати у прегледачу (`/web_dev/index.php`).

Саставни део веб адресе могу бити и URL параметри којим се веб апликацији
преносе одређене информације, на пример:

```text
https://www.webdev.org/something/index.php?view=article&id=123:msdev
```

Сегмент веб адресе који садржи URL параметре почиње знаком питања `?`, након
чека се наводе параметри у паровима кључ=вредност, раздвојени знаком `&`.

**Веб сајт** представља скуп међусобно повезаних веб страница који се налазе на
заједничком домену. Веб сајту се приступа путем дефинисане URL адресе, тј.
алтернативно, путем IP адресе хоста (дефинисан домен није услов за хостовање
веб сајта на интернету - довољна је IP адреса хоста).