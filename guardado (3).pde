import processing.serial.*;
String val;   
PrintWriter output;
Serial myPort;        // The serial port
int savedTime;
 

void setup () {
 String portName = Serial.list()[0];
  myPort = new Serial(this, portName, 9600);  //
  output=createWriter("Voltaje.txt");
  // A serialEvent() is generated when a newline character is received :
  myPort.bufferUntil('\n');
}
void draw () {
  // everything happens in the serialEvent()
}
 
void serialEvent (Serial myPort) {
   if ( myPort.available() > 0) 
  {  // If data is available,
  val = myPort.readStringUntil('\n');  // read it and store it in val
  
  if (val!=null)
  {
  println(val); //print it out in the console
  output.print ( day()+"/"+month()+"/"+year()+"\t"+hour ()+":"+ minute ()+ "\t" + val ); //output.println( val );
  output.flush();
  //output.close();
  }  
}  
}
 
//void keyPressed() {
    //output.flush();
    //output.close();
    //exit();
  //}
