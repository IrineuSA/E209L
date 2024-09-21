// Na interrupção PCINT0
ISR(PCINT0_vect) //PD7
{
if(PINB & 0b00000001){
/* CÓDIGO QUE VAI RODAR
NA INTERRUPÇÃO DO PCINT0 */
PORTD ^= 0b10000000;
_delay_ms(1000);
PORTD ^= 0b10000000;
}
if(PINB & 0b00000100){
PORTD ^= 0b01000000;
_delay_ms(500);
PORTD ^= 0b01000000;
}
}
// Na interrupção PCINT2
ISR(PCINT2_vect) //PB1
{
/* CÓDIGO QUE VAI RODAR
NA INTERRUPÇÃO DO PCINT2 */
PORTB ^= 0b00000010;
_delay_ms(2000);
PORTB ^= 0b00000010;
}
int main(void)
{
DDRD = 0b11100000; //PD5 PD6 PD7 COMO SAIDA
DDRB = 0b00000010; //PB1 COMO SAIDA
// Habilita interrupção no grupo PCINT2 INT1 & INT0
PCICR |= 0b00000101;
// Habilita PCINT no pino PB0 -> PCINT0 PB2 -> PCINT2 PD4 -> PCINT20
PCMSK0 |= 0b00000101;
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
