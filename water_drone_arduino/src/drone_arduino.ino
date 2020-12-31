#define diaphragm_u 13
#define diaphragm_d 12
#define left_moter 11
#define right_moter 10

byte val=0; 

void setup() { 
        pinMode(diaphragm_u, OUTPUT);
        pinMode(diaphragm_d, OUTPUT);
        pinMode(left_moter, OUTPUT);
        pinMode(right_moter, OUTPUT); 
        Serial.begin(9600);
}

void loop() {
        if(Serial.available() > 0){ 

                val = Serial.read();
                Serial.print(val); //for debug

                if(val == 'f'){   
                        digitalWrite(left_moter,HIGH);
                        digitalWrite(right_moter,HIGH);
                        delay(1000);
                }
                else if(val == 'l')
                {   
                        digitalWrite(left_moter,LOW);
                        digitalWrite(right_moter,HIGH);
                        delay(1000);
                }
                else if(val == 'p')
                {
                        digitalWrite(left_moter,LOW);
                        digitalWrite(right_moter,LOW);
                        delay(1000);
                }
                else if(val == 'r')
                {
                        digitalWrite(left_moter,HIGH);
                        digitalWrite(right_moter,LOW);
                        delay(1000);
                }
                else if(val == 'b')
                {
                        digitalWrite(left_moter,LOW);
                        digitalWrite(right_moter,LOW);
                        delay(1000);
                }
                else if(val == 'u')
                {
                        digitalWrite(diaphragm_u,HIGH);
                        digitalWrite(diaphragm_d,LOW);
                        delay(1000);
                }
                else if(val == 's')
                {
                        digitalWrite(diaphragm_u,LOW);
                        digitalWrite(diaphragm_d,LOW);
			delay(1000);
                }
                else if(val == 'd')
                {
                        digitalWrite(diaphragm_u,LOW);
                        digitalWrite(diaphragm_d,HIGH);
                        delay(1000);
                }
        }   
}
