#include <avr/io.h>
#include <until/delay.h>
#include <i2c.h>

void init_i2c(void)
{
    TWSR = ((0 << TWPS1) & (0 << TWPS0));
    TWBR = 0X14;

    TWCR = (1<<TWEN);
}

void start(void)
{
    TWCR = (1<<TWINT)|(1<<TWEN)
}