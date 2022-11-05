/*
Ruel Riego R. Lofranco
BSCPE 4A
Shortest Job First assigns each process the duration of the subsequent CPU burst.
*/

void setup()
{
  pinMode(13, OUTPUT); // Sets port 13 to output
  pinMode(12, OUTPUT); // Sets port 12 to output
  pinMode(11, OUTPUT); // Sets port 11 to output
  pinMode(10, OUTPUT); // Sets port 10 to output
  pinMode(9, OUTPUT); //  Sets port 9  to output
  pinMode(8, OUTPUT); //  Sets port 8  to output
}

void loop()
{
  shortest_job(); //calls the function
}

void shortest_job(){
  int pin[6] = {13, 12, 11, 10, 9, 8};
  int time[6] = {5000, 2000, 4000, 1000, 7000, 3000};
  
  //an array of milliseconds worth of time for the delay function.
  //The P1 or index 0 has a time of five seconds.
  //The P2 or index 1 has a time of two seconds.
  //The P3 or index 2 has a time of four seconds.
  //The P4 or index 3 has a time of one second.
  //The P5 or index 4 has a time of seven seconds.
  //The P6 or index 5 has a time of three seconds.
  
  //P4 is the first to be conducted with the set burst time, then to be followed by P2, P6, P3, P1,P5 respectively
  
  int temp; 
  
  for (int i=0; i<6; i++){
   for (int j=0; j<6; j++){
     if (time[i] < time[j]){
     temp = time[i];
time[i] = time[j];
time[j] = temp;
        
temp = pin[i];
pin[i] = pin[j];
 pin[j] = temp;
      }
    }
  } //When the loop is executed, the time array and pin array will be sorted in an ascending order.
  
  int count = 0; //identifies the array
  while (count != 6){
  	digitalWrite(pin[count], HIGH);
    delay(time[count]);
    digitalWrite(pin[count], LOW);
    count++;
  } //executes shortest job scheduling.
}
//end