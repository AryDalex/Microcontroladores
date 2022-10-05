/*
 * app.c
 *
 *  Created on: 23 de mar de 2022
 *      Author: arielly
 */


#include "app.h"


/*
 *	EXTERNS
 */


//extern SPI_HandleTypeDef hspi1;


/*
 *	PUBLICS
 */


uint8_t data_array[2];	/* dados recebidos */
uint8_t data_transmit[2] = {2, 1};	/* dados enviados */

void app_init()
{

}


void app_run()
{
	/* endereço para mandar dados */
	uint8_t tx_address[5] = {0xD7,0xD7,0xD7,0xD7,0xD7};

	/* endereço para receber dados */
	uint8_t rx_address[5] = {0xA0,0xA0,0xA0,0xA0,0xA0};


	nrf24_init();

	nrf24_config(2, 2);

	nrf24_tx_address(tx_address);
	nrf24_rx_address(rx_address);
	nrf24_powerUpRx();

	while(1)
	{
		/*
		 * NRF24L01 RECEIVER
		 */

		/* se nrf24 estiver se comunicando */
		if(nrf24_dataReady())
		{
			/* dados recebido o led acende */
			HAL_GPIO_WritePin(led_GPIO_Port, led_Pin, 1);

			/* recebe dados do transmit */
			nrf24_getData(data_array);

			/*
			 * NRF24L01 TRANSMIT
			 */

			if(data_array[0] != 0)
			{
				switch(data_array[0]) {
					case 1:
						data_transmit[0] = 100;
						break;

					case 2:
						data_transmit[0] = 99;
						break;

					default:
						break;
				}

				nrf24_send(data_transmit); /* envia os para o transmit */
				while(nrf24_isSending()); /* espera os dados serem enviados */
				nrf24_powerUpRx(); /* muda para receiver */
			}
			HAL_Delay(50);
			HAL_GPIO_WritePin(led_GPIO_Port, led_Pin, 0);
		}
	}
}
