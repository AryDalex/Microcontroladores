<h2>Lista de Exercícios #2</h2> 
<h3>Pado Labs - Microcontroladores</h3> 
<h4>Registradores e IOs</h4>

<strong>1:</strong> Qual a vantagem de se trabalhar com os tipos da biblioteca stdint.h 
- Pode ser utilizada para definir valores específicos de largura, para números inteiros.

<strong>2:</strong> Qual a principal característica de uma variável do tipo int_fastX_t? 
- Variável inteira que irá alocar o número de bits que implicará em melhor performance do chipset.

<strong>3:</strong> No nosso kit NUCLEO-G0B1RE, qual o tamanho da variável, em bytes, do int_fast8_t, int_fast16_t, int_fast32_t e int_fast64_t.
- int_fast8_t = 4 bits.
- int_fast16_t = 4 bits.
- int_fast32_t = 4 bits.
- int_fast64_t = 8 bits.

<strong>4:</strong> Qual a função dos registradores: 
- GPIOx_MODER  ➞  configurar o modo de Entrada/Saída.
- GPIOx_OTYPER  ➞  configurar o tipo de saída de E/S.
- GPIOx_OSPEEDR  ➞  configurar a velocidade de saída de E/S.
- GPIOx_PUPDR  ➞  configurar o  pull-up ou pull-down de E/S.
- GPIOx_IDR  ➞  contém o valor entrada da porta de E/S, somente leitura.
- GPIOx_ODR ➞   pode ser lido e escrito por software.
- GPIOx_AFRL ➞  configura a E/S da função alternativa.

<strong>5:</strong> Como posso fazer para ler diretamente o registrador sem utilizar a implementação da ST? (tipo: lembre-se dos ponteiros!) 
- Usando o endereço de memória do registro que deseja ler, através de um ponteiro.
<img src="https://media.discordapp.net/attachments/938047508469395566/941010351682625596/unknown.png" alt="exemplo - exercicio 05">
