#include <avr/io.h>
#include <util/delay.h>
//#include "adc_graph.h"

int main(void) {
	// Simulando valores de ADC y canal ADC
	uint16_t adc_value = 512; // Valor del ADC
	uint8_t adc_channel = 3; // Canal del ADC

	// Mostrar gr�fica y texto en la pantalla OLED
	// WARN:NECESITA CORRECC�N LA LIBRERIA
	//show_adc_graph(adc_value, adc_channel);

	while (1) {
		// Tu c�digo principal aqu�
	}

	return 0;
}
