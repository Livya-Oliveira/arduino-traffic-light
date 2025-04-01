//código por Livya Oliveira

#define LEDvermelho 8    
#define LEDamarelo 9    
#define LEDverde 10      
#define LEDpvermelho 11    
#define LEDpverde 12       

void setup()
{
  pinMode(LEDvermelho, OUTPUT);
  pinMode(LEDamarelo, OUTPUT);
  pinMode(LEDverde, OUTPUT);
  pinMode(LEDpvermelho, OUTPUT);
  pinMode(LEDpverde, OUTPUT);
}

void loop()
{
  // Fase 1: Semáforo para veículos (verde)
  digitalWrite(LEDvermelho, LOW);    
  digitalWrite(LEDamarelo, LOW);     
  digitalWrite(LEDverde, HIGH);      
  
  // Pedestres: LED vermelho para pedestres
  digitalWrite(LEDpvermelho, HIGH); 
  digitalWrite(LEDpverde, LOW);    
  
  delay(5000);  // Os veículos passam por 5 segundos
  
  // Fase 2: Semáforo para veículos (amarelo pisca 5 vezes)
  digitalWrite(LEDverde, LOW);      
  for (int i = 0; i < 5; i++) {
    digitalWrite(LEDamarelo, HIGH); 
    delay(500);                     
    digitalWrite(LEDamarelo, LOW);  
    delay(500);                     
  }
  
  // Fase 3: Semáforo para veículos (vermelho)
  digitalWrite(LEDamarelo, LOW);    
  digitalWrite(LEDvermelho, HIGH);  
  
  // Pedestres: LED verde para pedestres
  digitalWrite(LEDpvermelho, LOW);  
  digitalWrite(LEDpverde, HIGH);   
  
  delay(5000);  
  
  // Fase 4: Retorno ao estado inicial
  digitalWrite(LEDpverde, LOW);     
  digitalWrite(LEDpvermelho, HIGH); 

  delay(500); 
}
