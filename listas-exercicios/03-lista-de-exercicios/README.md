<h2>Lista de Exercícios #3</h2> 
<h3>Pado Labs - Microcontroladores</h3>
<h4>Estruturas em C e Interrupções</h4>

<strong>1:</strong> Qual a principal vantagem em utilizar uma interrupção ao invés de checar periodicamente o status de uma GPIO, por exemplo. 
- Pode acontecer de quando você for checar se tem alguma Alteração/Problema, deixar passar despercebido a A/P, já com a interrupção, ele te avisa quando ocorrer algum A/P, além de, dar respostas mais rápidas e melhorar a eficiência do programa.

<strong>2:</strong> Por que não é recomendável executar operações custosas e longas dentro de uma rotina ISR? 
- O programa processa as interrupções com prioridade acima do programa em andamento. Por conta disso, pode ocorrer perda de dados.
