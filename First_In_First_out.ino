// Ruel Riego R. Lofranco
// BSCPE 4A
void setup()
{
  pinMode(13, OUTPUT); // Port 13 to output
  pinMode(12, OUTPUT); // Port 12 to output
  pinMode(11, OUTPUT); // Port 11 to output
  pinMode(10, OUTPUT); // Port 10 to output
  pinMode(9, OUTPUT); //  Port 9  to output
  pinMode(8, OUTPUT); //  Port 8  to output
}

void loop()
{
  first_come_first_serve(); //calls the function
}

void first_come_first_serve(){
  int time[6] = {5000, 3000, 4000, 1000, 5000, 3000};
  //array of time in milliseconds
  int count = 0; //identifies the array
  for (int i=13; i>=8; i--){
  	digitalWrite(i, HIGH); //Turns LED On
    delay(time[count]); //Delay
    digitalWrite(i, LOW); //Turns LED Off
    count++; //Increment count.
  }
}