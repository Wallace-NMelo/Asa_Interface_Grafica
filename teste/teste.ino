void setup() {
  Serial.begin(9600);

}

void loop() {
  int i;
  // put your main code here, to run repeatedly:
  while(1){
    
  
  for (i=0;i<11;i++){
  
  if(i==0){
  Serial.println("10100101 00010011 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000 01011010");
  }
    if(i==1){
  Serial.println("10100101 00010011 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000001 01011010");
  }
    if(i==2){
  Serial.println("10100101 00010011 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000010 01011010");
  }
    if(i==3){
  Serial.println("10100101 00010011 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000011 01011010");
  }
    if(i==4){
  Serial.println("10100101 00010011 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000100 01011010");
  }
    if(i==5){
  Serial.println("10100101 00010011 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000101 01011010");
  }
    if(i==6){
  Serial.println("10100101 00010011 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000110 01011010");
  }
    if(i==7){
  Serial.println("10100101 00010011 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000111 01011010");
  }
    if(i==8){
  Serial.println("10100101 00010011 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00001000 01011010");
  }
    if(i==9){
  Serial.println("10100101 00010011 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00001001 01011010");
  }

  delay(1000);
}
  }
  }