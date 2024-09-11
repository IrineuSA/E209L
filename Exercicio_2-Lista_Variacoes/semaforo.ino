#define LED1 PD1 //vermelho
#define LED2 PD2 //amarelo
#define LED3 PD3 //azul

#define BT1 PB7

int main(){
  unsigned char i = 0;
  DDRD = 0;
  DDRD |= (1<<LED1) | (1<<LED2) | (1<<LED3);
  DDRB = 0;
  PORTB = 0;
  PORTB |= (1<<BT1);
  while(1){
    if(PINB&(1<<BT1)){ //se liga botao apaga verm, pisca amr por 3seg, liga az
      PORTD &= ~((1<<LED1));
      while(i < 1){
        PORTD |= ((1<<LED2));
        _delay_ms(500);
        PORTD &= ~((1<<LED2));
        _delay_ms(500);
        PORTD |= ((1<<LED2));
        _delay_ms(500);
        PORTD &= ~((1<<LED2));
        _delay_ms(500);
        PORTD |= ((1<<LED2));
        _delay_ms(500);
        PORTD &= ~((1<<LED2));
        _delay_ms(500);
        PORTD |= (!(1<<LED2));    
        i++;    
      };
      PORTD |= ((1<<LED3));
    }
    else{ //apaga am e az, liga verm
      PORTD &= ~((1<<LED2));
      PORTD &= ~((1<<LED3));
      PORTD |= ((1<<LED1));
      i = 0;
      }
    }
}  
