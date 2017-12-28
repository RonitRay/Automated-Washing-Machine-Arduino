void setup() 
{
pinMode(A0,INPUT);//Water Level
pinMode(8,OUTPUT);//Buzzer
pinMode(7,OUTPUT);//Fan
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);//Motor
Serial.begin(9600);
}

void loop() 
{
    int a=analogRead(A0);
    Serial.println(a);
    if(a>600)
    {
        digitalWrite(8,HIGH);
        delay(3000);
        digitalWrite(8,LOW);
        
        for(int i=1;i<=5;i++)
        {
            digitalWrite(11, HIGH);
            digitalWrite(12,LOW);
            delay(5000);
            digitalWrite(12, HIGH);
            digitalWrite(11, LOW);
            delay(5000);
            digitalWrite(11,LOW);
            digitalWrite(12,LOW);
        }
        
        digitalWrite(8,HIGH);
        delay(3000);
        digitalWrite(8,LOW);
        delay(10000);
        
        digitalWrite(7,HIGH);
        delay(15000);
        digitalWrite(7,LOW);
        
        digitalWrite(8,HIGH);
        delay(3000);
        digitalWrite(8,LOW);
        
        delay(10000);
    }
}
