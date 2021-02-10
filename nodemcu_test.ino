void setup() 
{
Serial.begin(9600);  /* initialise serial communication */
}

void loop()
{
Serial.println("nodeMCU test"); /* print Electronic Wings at new line per second */
delay(1000);
}
