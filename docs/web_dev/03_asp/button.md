# Веб сервер контролa `Button`

[Документација](https://learn.microsoft.com/en-us/dotnet/api/system.web.ui.webcontrols.button)

Приказује веб сервер контролу дугме (енгл. *Button*) на страници.

```aspx-cs
<asp:Button id="MyButton"
     Text="label"
     CommandName="command"
     CommandArgument="commandargument"
     CausesValidation="true | false"
     OnClick="OnClickMethod"
     runat="server"/>
```

Нека је задатак да се креира дугме, где се кликом на дугме отвара сајт
`https://www.radlovacki.com/`. Веб контролу дугме можеш дефинисати на следећи
начин:

```aspx-cs
<asp:Button ID="btnRadlovacki" Text="radlovacki.com" OnClick="btnRadlovacki_Click" runat="server" />
```

OnClick методу можеш написати на следећи начин:

```cs
protected void btnRadlovacki_Click(object sender, EventArgs e)
{
     Response.Redirect("https://www.radlovacki.com/");
}
```
