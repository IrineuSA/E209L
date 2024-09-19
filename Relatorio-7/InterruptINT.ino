// Na interrupção PCINT0
ISR(PCINT0_vect)
{
/* CÓDIGO QUE VAI RODAR
NA INTERRUPÇÃO DO PCINT0 */
PORTD ^= 0b10000000;
_delay_ms(1000);
PORTD ^= 0b10000000;
}
// Na interrupção PCINT1
ISR(PCINT1_vect)
{
/* CÓDIGO QUE VAI RODAR
NA INTERRUPÇÃO DO PCINT1 */
PORTD ^= 0b01000000;
_delay_ms(500);
PORTD ^= 0b01000000;
}
// Na interrupção PCINT2
ISR(PCINT2_vect)
{
/* CÓDIGO QUE VAI RODAR
NA INTERRUPÇÃO DO PCINT2 */
PORTB ^= 0b00000010;
_delay_ms(2000);
PORTB ^= 0b00000010;
}
int main(void)
{
DDRD = 0b11100000;
DDRB = 0b00000010;
PORTD = 0b00010110;
// Habilita interrupção no grupo PCINT2 & INT0
PCICR |= 0b00000111;
// Habilita PCINT no pino PD4 -> PCINT20
PCMSK0 |= 0b00000100;
PCMSK1 |= 0b00000010;
PCMSK2 |= 0b00010000;
// Habilita Interrupções globais
sei();
for (;;)
{
PORTD ^= 0b00100000;
_delay_ms(250);
/* CÓDIGO QUE VAI RODAR
SEMPRE / SUPER-LOOP */
}
}
