Sobre a atribuição do DevAddress nas funções de I2C da biblioteca HAL, temos de tomar cuidado ao enviar este valor, pois ele requer que você passe neste argumento o valor com o primeiro bit, referente ao R/W, ja reservado. Ou seja, em termos de exemplos, a EEPROM que vimos em aula, gerou um endereço 0xA0, que já considera este bit. Se formos chamarmos a função, teríamos, como exemplo de chamada, o seguinte:


HAL_I2C_Master_Transmit(&hi2c1, 0xA0, data, 3, 100);


No caso do colega implementar um Slave no qual você irá se comunicar, deve ser realizada a operação de bitwise para a esquerda, que na prática multiplica o valor por 10 em binário. Por exemplo, se seu amigo configurar um slave com endereço 0x13, devemos desloca-lo 1 bit à esquerda, sendo assim teríamos : 


0x13 << 1 = 0001 0011 << 1 =  0010 0110 = 0x26


Então, quando chamar a função de transmissão ou recepção:


HAL_I2C_Master_Transmit(&hi2c1, 0x26, data, 3, 100);



Para mais informações sobre operações de bitwise : consultem o link anexado.
Conheça os operadores Bitwise (Bit-a-Bit) | iMasters
https://imasters.com.br/desenvolvimento/conheca-os-operadores-bitwise-bit-bit
