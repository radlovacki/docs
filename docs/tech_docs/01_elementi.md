# Елементи техничке документације

Техничка документација присутна је у различитим пројектима у виду:

- архитектонских и конструкцијско-грађевинских пројеката,
- пројеката хидротехничке инсталације,
- пројеката електроенергетских инсталација,
- пројеката телекомуникационих и сигналних инсталација,
- пројеката машинских инсталација,
- пројеката технолошких процеса итд.

Фокус овог предмета биће **техничка документација у софтверском инжењерству и
информационим технологија уопште**, а не техничка документација која се користи
приликом изградње објеката!

## Увод

**Техничка документација је основно средство изражавања и комуницирања у
техници.** Користи се кроз цео животни циклус неког софтверског пројекта:

- од захтева за пројектовањем,
- преко дефинисања системских и софтверских захтева, уговарања, анализе
система, дизајна система, кодирања, тестирања, објављивања,
- до испоруке, инсталације, употребе, одржавања и ажурирања.

**Сврха техничке документације је да обезбеди све потребне информације у
најједноставнијем облику, али практичном обиму, на папиру, електронском медију
или онлајн.**

Софтверски пројекти се у највећем броју случајева тичу различитих одељења или
тимова у оквиру једне организације или различитих организација. На пример,
пројекат израде једне мобиле апликације може да укључи одељења или тимове
задужене за програмирање, дизајн, базе података, безбедност, маркетинг,
финансије и др. у оквиру једне организације и организацију која се бави
хостингом, односно дистрибуцијом мобилних апликација.

Пошто је техничка документација основно средство споразумевања, она **мора бити
јасна, прецизна, прегледна, разумљива и израђена на основу *de facto (лат.
чињенично, у пракси)* или *de iure (лат. по закону)* стандарда.** На пример,
де јуре стандард за писање коментара у програмима написаним у програмском
језику C подразумева навођење коментара између `/*` и `*/`. Међутим, како су
данас скоро сви C компајлери уједно и C++ компајлери, де факто стандард је да
се у програмима написаним у програмском језику C равноправно користе и
једнолинијски C++ коментари након `//`.

Неке од организација које доносе стандарде у области софтверског инжењерства и
информационих технологија су:

- **IEEE** Computer Society *(Institute of Electrical and Electronics
Engineers)*, доноси стандарде у области информационих технологија, хардвера,
софтвера, умрежавање итд.,
- **ISO/IEC** *(International Organization for Standardization / International
Electrotechnical Commission)*, доноси стандарде у области софтверског
инжењерства, информационих технологија итд.,
- **W3C** *(World Wide Web Consortium)*, доноси стандарде за World Wide Web,
веб технологије и сл.,
- **IETF** *(Internet Engineering Task Force)*, доноси интернет стандарде,
- **NIST** *(National Institute of Standards and Technology)* и **OWASP**
*(Open Web Application Security Project)*, доносе стандарде у области
сајбер-безбедности, безбедности и квалитета софтвера,
- **OMG** (Object Management Group), доноси стандарде за софтверско моделирање
и управљање пословним процесима,
- **ITU** (International Telecommunication Union), **ETSI** (European
Telecommunications Standards Institute) и **TIA** (Telecommunications Industry
Association), доносе стандарде у области телекомуникација, умрежавања и сл.

## Техничко писање

При изради докумената у софтверским пројектима, потребно је придржавати се
правила техничког писања. Техничко писање служи за брзу, тачну и једноставну
размену информација. За техничко писање није потребан таленат већ вештина и
промишљеност. Техничко писање је саставни део посла у софтверском инжењерству
и битно је за комуникацију у четири процеса:

- инвестиционо-технички елаборати и њихова оцена,
- размена информација унутар организације,
- комуникација међу организацијама и
- израда техничке документације.

Техничко писање је формално пре него сликовито и иде по стандардним клишеима.
Процедуре и ситуације у инжињерској пракси су типичне, па су и одговарајућа
техничка писања стандардизоване форме.

- **оралне** - неформалне (кратке презентације у виду конференцијског или
телефонског разговора) и формалне (званичне научне и техничке конференције са
питањима и дискусијом),
- **писане** - техничке информације (прорачуни, извештаји, документација),
законски папири (уговори, понуде, записници) и
- **графичке** - артистичке (избор боје и квалитета папира, графички прелом,
коричење), илустрације (графички приказ докумената и техничких резултата).

Техничко писање подразумева следеће елементе:

- инвенција,
- аранжман,
- стил,
- граматика и
- механика.

**Инвенција** је "размишљајући шта да кажем", што у техничком писању не
представља проблем јер је техничко писање формализовано и стандардизовано.
Техничком писању није циљ креативност него информативност.

**Аранжман** је кључна особина техничког писања. Оно мора бити реторичко -
материјал аранжиран у логичном поретку, лак за читање и разумевање. Реторички
приступ обухвата одговоре на питања:

- Шта је предмет анализе?
- Чему је то слично?
- По чему се разликује од сличних решења?
- Да ли је то део неке веће целине?
- Који су саставни делови?
- Како то функционише?
- Шта је изазвало да се то догоди?
- Шта ће се десити као резултат?

Претходна питања проистичу из стандардне реторичке структуре, која се усавршава
од античких времена, да би се добила систематска и логична презентација. Она
садржи:

- дефиницију: сви нестандардни појмови и речи морају бити недвосмислено и јасно
дефинисани. Не смеју се користити непознате речи.
- опис: предмет разматрања треба сместити у шире оквире техничких дисциплина
којима припада - наћи му место у систему.
- компарацију и контраст: понудити разне алтернативе и упоредити их.
- класификацију: ако је разматрани проблем део неког већег пројекта, треба га
ставити у релацију са целином.
- поделу: поделити предмет разматрања на логичке целине и описати односе међу
логичким целинама.
- процес: опис начина рада са циљем да се он објасни и илуструје.
- узроке и последице: шта су узроци ситуације око предмета разматрања и какве
ће бити последице одређених одлука и решења у техничком или економском смислу.

Стандардна реторичка структура се може посматрати као алат за преношење
техничких проблема и решења у техничку документацију.

**Стил** је тешко описати - лакше се описују последице. Стил је композит од
инвенције, аранжмана, граматике и механике. Техничком писању не треба стил као
елемент препознавања. Довољан је сувопарни формализам, али да писање буде јасно
и недвосмислено, тј. функционално.

**Граматика** је основна унутрашња структура аранжирања речи у језику у циљу
једнозначног изражавања. Нарочито је битна структура реченице.

**Механика** писања се односи на употребу интерпункције, спеловања или језичких
скраћеница.

Писац техничког текста ради у тесној вези са другим техничким ствараоцима и
**морално-правно је одговоран за свој рад**. Поред поштовања техничких
стандарда, у техничком писању се мора избегавати плагијаторство, референцирати
коришћени извори и поштовати закон о интелектуалној својини.

## Задаци за проверу знања

1. Дефиниши појам техничке документације.
2. Која је сврха техничке документације?
3. Каква мора бити техничка документација?
4. Наведи неколико назива организација и области у оквиру којих доносе
стандарде важне за софтверско инжењерство и информационе технологије.
5. Које форме техничког писања постоје?
6. Наведи и објасни елементе техничког писања.