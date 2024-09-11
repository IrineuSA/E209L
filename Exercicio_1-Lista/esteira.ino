#define MOTOR PD1 //motor esteira
#define PROBL PD3 //alarme

#define BT1 PB6 //ativa esteira
#define BT2 PB7 //desativa esteira
#define BT3 PB0 //amontoa esteira

int main(){
  DDRD = 0;
  DDRD |= (1<<MOTOR) | (1<<PROBL);
  DDRB = 0;
  PORTB = 0;
  PORTB |= (1<<BT1) | (1<<BT2) | (1<<BT3);
  while(1)
  {
    if(PINB&(1<<BT1)){ //liga motor
      PORTD |= (1<<MOTOR);
    }
    if(PINB&(1<<BT2)){ //desliga motor
      PORTD &= ~(1<<MOTOR);
    }
    if(PINB&(1<<BT3)){ //amontoa esteira e ativa alarme
      PORTD &= ~(1<<MOTOR);
      PORTD |= (1<<PROBL);
    }
    else if(!(PINB&(1<<BT3)) && (!(PINB&(1<<BT1)))){ //se esteira desamontoada
      PORTD &= ~(1<<MOTOR);                          //e botao de liga ativado
      PORTD &= ~(1<<PROBL);                          //desativa alarme
    }
  }
}
