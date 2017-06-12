# dca1202-serverClientTools

Projeto avaliativo para a turma 2 do componente curricular DCA1202 do curso de Bacharelado em Ciência e Tecnologia da UFRN, período 2017.1.

<h1> DOCUMENTAÇÃO </h1>

<h4>Índice</h4>
<ol>
 <li>
  <a href="#screen">Client Producer</a>
  <ol>
   <li> <a href="#screena">Atributos privados</a></li>
   <li> <a href="#screenm">Slots</a></li>
  </ol>
 </li>
</ol>

<h2 id="screen">Client Producer </h2>

<h4 id="screena">-Atributos privados</h4>
 
<b>ui</b><br/>
Interface de usuário.<br/>

<b>socket</b>
Socket para realizar a conexão com o servidor.<br/>

<b>timer</b><br/>
Temporizador para o envio dos dados.<br/>
 
<h4 id="screenm">-Slots</h4>

<b>putData()</b><br/>
Envia um set de dados para o servidor e imprime no display.<br/>

<b>connectAction()</b><br/>
Conecta ao servidor.<br/>

<b>disconnectAction()</b><br/>
Disconecta do servidor.<br/>

<b>startAction()</b><br/>
Inicia o envio de dados.<br/>

<b>stopAction()</b><br/>
Para o envio de dados.<br/>

<b>generateRandom()</b><br/>
Gera um número aleatório com a parâmetro setados pelo usuário na interface.<br/>

<b>printDisplay(QString)</b><br/>
Imprime no display.<br/>