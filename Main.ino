

int led1 = D7;

void setup() {

	pinMode(led1, OUTPUT);

}

void loop() {
    // R
    dot(1);
    line(1);
    dot(1);
    
    // O
    line(3);
    
    // U
    dot(2);
    line(1);
    
    // Double S
    dot(6);
    
    // I
    dot(2);
    
    // S
    dot(3);
    
    delay(3000);
}

void dot(int quantity)
{
    for (int i; i < quantity; i ++)
    {
        digitalWrite(led1, HIGH);
	    delay(500);
	    digitalWrite(led1, LOW);
	    delay(1000);   
    }
}

void line(int quantity)
{
    for (int i; i < quantity; i ++)
    {
    	digitalWrite(led1, HIGH);
    	delay(1500);
    	digitalWrite(led1, LOW);
    	delay(1000);  
    }
}
