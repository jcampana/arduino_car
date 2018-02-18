#define LEFT 3  // Enable Pin for LEFT motors
#define L1 1  // Control pin 1 for LEFT motors
#define L2 2  // Control pin 2 for LEFT motors

#define RIGHT 6  // Enable Pin for LEFT motors
#define R1 4  // Control pin 1 for LEFT motors
#define R2 5  // Control pin 2 for LEFT motors


void setup()
   {
        for (int i = 1 ; i<7 ; i++)                     // Inicializamos los pines
        pinMode( i, OUTPUT);
   }
   
void loop()
   {
    CORTAR 6 PILAS -> 9v i colocar vIN + i GND -
    
        // LEFT MOTORS
        digitalWrite(LEFT, HIGH);     // Activamos LEFT motor
        digitalWrite(L1, HIGH);     // Arrancamos
        digitalWrite(L2, LOW);
        delay(3000);

        digitalWrite(LEFT, LOW);      // Paramos LEFT motor
        delay(1000);
        digitalWrite(LEFT, HIGH);     // Activamos LEFT motor

        digitalWrite(L1, LOW);      // Arrancamos con cambio de direccion
        digitalWrite(L2, HIGH);
        delay(3000);

        digitalWrite(LEFT, LOW);      // Paramos LEFT motor
        delay(1000);

        // RIGHT MOTORS
         digitalWrite(RIGHT, HIGH);     // Activamos RIGHT motor
        digitalWrite(R1, HIGH);     // Arrancamos
        digitalWrite(R2, LOW);
        delay(3000);

        digitalWrite(RIGHT, LOW);      // Paramos RIGHT motor
        delay(1000);
        digitalWrite(RIGHT, HIGH);     // Activamos RIGHT motor

        digitalWrite(R1, LOW);      // Arrancamos con cambio de direccion
        digitalWrite(R2, HIGH);
        delay(3000);

        digitalWrite(RIGHT, LOW);      // Paramos RIGHT motor
        delay(1000);
  }
