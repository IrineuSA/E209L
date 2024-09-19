ISR(INT0_vect)
{
// Inverte saída 4 (PD4)
PORTD ^= 0b00010000;
}
int main(void)
{
// Configura os pinos 4 (PD4) e 5 (PD5) como saída
DDRD = 0b00110000;
// Configura a interrupção externa 0 para transição de subida
EICRA = 0b00000011;
// Habilita a interrupção externa 0 (PD2)
EIMSK = 0b00000001;
// Habilita a interrupção global
sei();
//Super loop
while (1)
{
// Inverte a saída 5 (PD5)
PORTD ^= 0b00100000;
_delay_ms(500);
}
}
