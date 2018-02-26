char dato;

void setup() {
  // RUEDA DERECHA
 pinMode(6,OUTPUT);
 pinMode(7,OUTPUT);
  // RUEDA IZQUIERDA
 pinMode(8,OUTPUT);
 pinMode(9,OUTPUT);

 Serial.begin(9600);
}

void loop() {
 if (Serial.available()>0){
  dato=Serial.read();
  Serial.print(dato);
   switch(dato){

   
 
   case('F'): { //MOV.ADELANTE
    //motor derecha 
     analogWrite(10,255);
     digitalWrite(7,1);
     digitalWrite(6,0);
    //motor izquierda
     analogWrite(11,255);
     digitalWrite(8,0);
     digitalWrite(9,1);
     break;
   }

    case('B'): { //MOV.ATRAS 
    //motor derecha 
     analogWrite(10,255);
     digitalWrite(7,0);
     digitalWrite(6,1);
    //motor izquierda 
     analogWrite(11,255);
     digitalWrite(8,1);
     digitalWrite(9,0);
     break;
   }

    case('R'):{ //MOV.IZQUIERDA
    //motor derecha
     analogWrite(10,180);
     digitalWrite(7,0);
     digitalWrite(6,0); 
    //motor izquierda
     analogWrite(11,100);
     digitalWrite(8,0);
     digitalWrite(9,1);
     break;
   }

    case('L'):{ //MOV.DERECHA
     //motor derecha 
      analogWrite(10,100);
      digitalWrite(7,1);
      digitalWrite(6,0);
     //motor izquierda
      analogWrite(11,180); 
      digitalWrite(8,0);
      digitalWrite(9,0);
      break;
    }  
   
 
   case('I'): { //MOV.ADELANTE IZQUIERDA
    //motor derecha 
     analogWrite(10,170);
     digitalWrite(7,1);
     digitalWrite(6,0);
    //motor izquierda
     analogWrite(11,255);
     digitalWrite(8,0);
     digitalWrite(9,1);
     break;
   }
   
   case('G'): { //MOV.ADELANTE DERECHA
    //motor derecha 
     analogWrite(10,255);
     digitalWrite(7,1);
     digitalWrite(6,0);
    //motor izquierda
     analogWrite(11,170);
     digitalWrite(8,0);
     digitalWrite(9,1);
     break;
   }

  
   
   case('J'): { //MOV.ATRAS IZQUIERDA
    //motor derecha 
     analogWrite(10,170);
     digitalWrite(7,0);
     digitalWrite(6,1);
    //motor izquierda 
     analogWrite(11,255);
     digitalWrite(8,1);
     digitalWrite(9,0);
     break;
   }

   case('H'): { //MOV.ATRAS DERECHA
    //motor derecha 
     analogWrite(10,255);
     digitalWrite(7,0);
     digitalWrite(6,1);
    //motor izquierda 
     analogWrite(11,170);
     digitalWrite(8,1);
     digitalWrite(9,0);
     break;
   }

  
     case('S'):{ //COCHE PARADO
     //motor derecha
     analogWrite(10,0);
     digitalWrite(7,0);
     digitalWrite(6,0);
    //motor izquierda
     analogWrite(11,0); 
     digitalWrite(8,0);
     digitalWrite(9,0);
      break;
    }
   
   }
 }
}
