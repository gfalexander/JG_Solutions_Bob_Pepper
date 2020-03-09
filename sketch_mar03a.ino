//int pinoSensor = 5;
int receptor = 0;
float temperatura = 0;
int registro = 0;
String teste = "";
String pimenta = "";

void setup() {
 
  Serial.begin(9600);

}

void loop() {

      receptor = analogRead(5);
      temperatura = (receptor * 0.00488) * 100;
      pimenta = "annuum";
      registro++;
      if(pimenta == "annuum"){
        if(temperatura >= 21 && temperatura <= 27){
          teste = "Temperatura Ideal, mantenha-na!";
          Serial.print("Temperatura: ");
          Serial.print(temperatura);
          Serial.print(" " + teste);
          Serial.print(", ");
          Serial.println(registro);    
        }
        else{
          if(temperatura > 27){
            teste = "Temperatura acima do ideal, abaixe-a";
            Serial.print("Temperatura: ");
            Serial.print(temperatura);
            Serial.print(" " + teste);
            Serial.print(", ");
            Serial.println(registro);
          }
          else{
            if(temperatura < 21){
              teste = "Temperatura abaixo do ideal, aumente-a";
              Serial.print("Temperatura: ");
              Serial.print(temperatura);
              Serial.print(" " + teste);
              Serial.print(", ");
              Serial.println(registro);
            }
          }
        }
      }else{
          if(pimenta == ""){
        if(temperatura >= 25 && temperatura <= 30){
          teste = "Temperatura Ideal, mantenha-na!";
          Serial.print("Temperatura: ");
          Serial.print(temperatura);
          Serial.print(" " + teste);
          Serial.print(", ");
          Serial.println(registro);  
        }
        else{
          if(temperatura > 30){
            teste = "Temperatura acima do ideal, abaixe-a";
            Serial.print("Temperatura: ");
            Serial.print(temperatura);
            Serial.print(" " + teste);
            Serial.print(", ");
            Serial.println(registro);
          }
          else{
            if(temperatura < 25){
              teste = "Temperatura abaixo do ideal, aumente-a";
              Serial.print("Temperatura: ");
              Serial.print(temperatura);
              Serial.print(" " + teste);
              Serial.print(", ");
              Serial.println(registro);
              }
            }
          }
        }
      }
      if(registro > 100){
        registro = 0;
        Serial.println("ROW,SET,2");   
      }
      delay(3000);
}

