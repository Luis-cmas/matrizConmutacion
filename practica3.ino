//entradas
int entrada1 =A0;
int entrada2 =A1;
int entrada3 =A2;
int entrada4 =A3;
int entrada5 =A4;

//salidas
int salida1 =38;
int salida2 =36;
int salida3 =34;
int salida4 =32;
int salida5 =30;
int salida6 =28;

//controles
int ce1=41;
int ce2=39;
int ce3=37;
int cs1=35;
int cs2=33;
int cs3=31;
int seleccion =43;

//auxiliares
int aux1=0;
int aux2=0;
int aux3=0;
int aux4=0;
int aux5=0;
int aux6 =0;

//funciones
void configuracion();

void setup() {

  pinMode(salida1, OUTPUT);
  pinMode(salida2, OUTPUT);
  pinMode(salida3, OUTPUT);
  pinMode(salida4, OUTPUT);
  pinMode(salida5, OUTPUT);
  pinMode(salida6, OUTPUT);

  pinMode(entrada1, INPUT);
  pinMode(entrada2, INPUT);
  pinMode(entrada3, INPUT);
  pinMode(entrada4, INPUT);
  pinMode(entrada5, INPUT);
  //controles
  pinMode(seleccion, INPUT);
  pinMode(ce1, INPUT);
  pinMode(ce2, INPUT);
  pinMode(ce3, INPUT);
  pinMode(cs1, INPUT);
  pinMode(cs2, INPUT);
  pinMode(cs3, INPUT);
  
}

void loop() {

  //cuando el switch de seleccion esta activado se actualizan las salidas conforme la configuracion puesta 
  //en los dip switch
  if(digitalRead(seleccion) == HIGH){configuracion();}

  //una vez hecha la configuracion,se leen las entradas y se transportan a sus respectivas salidas
  //caso de la salida1
  switch(aux1){
    case 0:digitalWrite(salida1,LOW);   break;
    case 1:digitalWrite(salida1,digitalRead(entrada1));   break;
    case 2:digitalWrite(salida1,digitalRead(entrada2));    break;
    case 3:digitalWrite(salida1,digitalRead(entrada3));    break;
    case 4:digitalWrite(salida1,digitalRead(entrada4));    break;
    case 5:digitalWrite(salida1,digitalRead(entrada5));    break;
    }

  //caso de la salida2  
  switch(aux2){
    case 0:digitalWrite(salida2,LOW);   break;
    case 1:digitalWrite(salida2,digitalRead(entrada1));   break;
    case 2:digitalWrite(salida2,digitalRead(entrada2));    break;
    case 3:digitalWrite(salida2,digitalRead(entrada3));    break;
    case 4:digitalWrite(salida2,digitalRead(entrada4));    break;
    case 5:digitalWrite(salida2,digitalRead(entrada5));    break;
    }

  //caso de la salida3
  switch(aux3){
    case 0:digitalWrite(salida3,LOW);   break;
    case 1:digitalWrite(salida3,digitalRead(entrada1));   break;
    case 2:digitalWrite(salida3,digitalRead(entrada2));    break;
    case 3:digitalWrite(salida3,digitalRead(entrada3));    break;
    case 4:digitalWrite(salida3,digitalRead(entrada4));    break;
    case 5:digitalWrite(salida3,digitalRead(entrada5));    break;
    }

   //caso de la salida4 
  switch(aux4){
    case 0:digitalWrite(salida4,LOW);   break;
    case 1:digitalWrite(salida4,digitalRead(entrada1));   break;
    case 2:digitalWrite(salida4,digitalRead(entrada2));    break;
    case 3:digitalWrite(salida4,digitalRead(entrada3));    break;
    case 4:digitalWrite(salida4,digitalRead(entrada4));    break;
    case 5:digitalWrite(salida4,digitalRead(entrada5));    break;
    }

  //caso de la salida5
  switch(aux5){
    case 0:digitalWrite(salida5,LOW);   break;
    case 1:digitalWrite(salida5,digitalRead(entrada1));   break;
    case 2:digitalWrite(salida5,digitalRead(entrada2));    break;
    case 3:digitalWrite(salida5,digitalRead(entrada3));    break;
    case 4:digitalWrite(salida5,digitalRead(entrada4));    break;
    case 5:digitalWrite(salida5,digitalRead(entrada5));    break;
    }

  //caso de la salida6
  switch(aux6){
    case 0:digitalWrite(salida6,LOW);   break;
    case 1:digitalWrite(salida6,digitalRead(entrada1));   break;
    case 2:digitalWrite(salida6,digitalRead(entrada2));    break;
    case 3:digitalWrite(salida6,digitalRead(entrada3));    break;
    case 4:digitalWrite(salida6,digitalRead(entrada4));    break;
    case 5:digitalWrite(salida6,digitalRead(entrada5));    break;
    } 
}


  
void configuracion(){
  //evaluamos cual entrada se va a transmitir
  //caso para la entrada 0, es decir, cuando se quiere desactivar una salida
  //la logica del siguiente if se repite para todos los casos,variando unicamente los valores de la entrada seleccionada
      if(digitalRead(ce1) == 0 && digitalRead(ce2) == 0 && digitalRead(ce3) == 0){
        
          //este caso es para que no salga nada por la salida seleccionada
          //evaluamos en donde se quiere la salida
          
          if(digitalRead(cs1)==0 && digitalRead(cs2) ==0 && digitalRead(cs3) == 1){
              //sacamos por salida 1
              //el numero del aux indica la salida por la que se saldra,mientras que el 
              //valor asignado indica la señal de entrada que se va a transmitir
              aux1 = 0;
            }
          
          else if(digitalRead(cs1)==0 && digitalRead(cs2) ==1 && digitalRead(cs3) == 0){
            //sacamos por salida 2
              aux2 = 0;
            }
          
          else if(digitalRead(cs1)==0 && digitalRead(cs2) ==1 && digitalRead(cs3) == 1){
            //sacamos por salida 3
              aux3 = 0;
            }
          
          else if(digitalRead(cs1)==1 && digitalRead(cs2) ==0 && digitalRead(cs3) == 0){
            //sacamos por salida 4
              aux4 = 0;
            }
          
          else if(digitalRead(cs1)==1 && digitalRead(cs2) ==0 && digitalRead(cs3) == 1){
            //sacamos por salida 5
              aux5 = 0;
            }
          
          else if(digitalRead(cs1)==1 && digitalRead(cs2) ==1 && digitalRead(cs3) == 0){
            //sacamos por salida 6
              aux6 = 0;
            }  
        }

      //caso para la entrada 1
      if(digitalRead(ce1) == 0 && digitalRead(ce2) == 0 && digitalRead(ce3) == 1){
          //evaluamos en donde se quiere la salida
          if(digitalRead(cs1)==0 && digitalRead(cs2) ==0 && digitalRead(cs3) == 1){
              //sacamos por salida 1
              aux1 = 1;
            }
            
          else if(digitalRead(cs1)==0 && digitalRead(cs2) ==1 && digitalRead(cs3) == 0){
            //sacamos por salida 2
              aux2 = 1;
            }
            
          else if(digitalRead(cs1)==0 && digitalRead(cs2) ==1 && digitalRead(cs3) == 1){
            //sacamos por salida 3
              aux3 = 1;
            }
            
          else if(digitalRead(cs1)==1 && digitalRead(cs2) ==0 && digitalRead(cs3) == 0){
            //sacamos por salida 4
              aux4 = 1;
            }
          
          else if(digitalRead(cs1)==1 && digitalRead(cs2) ==0 && digitalRead(cs3) == 1){
            //sacamos por salida 5
              aux5 = 1;
            }
          
          else if(digitalRead(cs1)==1 && digitalRead(cs2) ==1 && digitalRead(cs3) == 0){
            //sacamos por salida 6
              aux6 = 1;
            }  
        }
        
        // caso para la entrada 2
        if(digitalRead(ce1) == 0 && digitalRead(ce2) == 1 && digitalRead(ce3) == 0){
          //evaluamos en donde se quiere la salida
          if(digitalRead(cs1)==0 && digitalRead(cs2) ==0 && digitalRead(cs3) == 1){
              //sacamos por salida 1
              aux1 = 2;
            }
            
          else if(digitalRead(cs1)==0 && digitalRead(cs2) ==1 && digitalRead(cs3) == 0){
            //sacamos por salida 2
              aux2 = 2;
            }
            
          else if(digitalRead(cs1)==0 && digitalRead(cs2) ==1 && digitalRead(cs3) == 1){
            //sacamos por salida 3
              aux3 = 2;
            }
            
          else if(digitalRead(cs1)==1 && digitalRead(cs2) ==0 && digitalRead(cs3) == 0){
            //sacamos por salida 4
              aux4 = 2;
            }
            
          else if(digitalRead(cs1)==1 && digitalRead(cs2) ==0 && digitalRead(cs3) == 1){
            //sacamos por salida 5
              aux5 = 2;
            }
            
          else if(digitalRead(cs1)==1 && digitalRead(cs2) ==1 && digitalRead(cs3) == 0){
            //sacamos por salida 6
              aux6 = 2;
            }  
        } 
        
        // caso para la entrada 3
        if(digitalRead(ce1) == 0 && digitalRead(ce2) == 1 && digitalRead(ce3) == 1){
          //evaluamos en donde se quiere la salida
          if(digitalRead(cs1)==0 && digitalRead(cs2) ==0 && digitalRead(cs3) == 1){
              //sacamos por salida 1
              aux1 = 3;
            }
            
          else if(digitalRead(cs1)==0 && digitalRead(cs2) ==1 && digitalRead(cs3) == 0){
            //sacamos por salida 2
              aux2 = 3;
            }
            
          else if(digitalRead(cs1)==0 && digitalRead(cs2) ==1 && digitalRead(cs3) == 1){
            //sacamos por salida 3
              aux3 = 3;
            }
            
          else if(digitalRead(cs1)==1 && digitalRead(cs2) ==0 && digitalRead(cs3) == 0){
            //sacamos por salida 4
              aux4 = 3;
            }
          
          else if(digitalRead(cs1)==1 && digitalRead(cs2) ==0 && digitalRead(cs3) == 1){
            //sacamos por salida 5
              aux5 = 3;
            }
          
          else if(digitalRead(cs1)==1 && digitalRead(cs2) ==1 && digitalRead(cs3) == 0){
            //sacamos por salida 6
              aux6 = 3;
            }  
        }
        
        //caso para la entrada 4 
        if(digitalRead(ce1) == 1 && digitalRead(ce2) == 0 && digitalRead(ce3) == 0){
          //evaluamos en donde se quiere la salida
          if(digitalRead(cs1)==0 && digitalRead(cs2) ==0 && digitalRead(cs3) == 1){
              //sacamos por salida 1
              aux1 = 4;
            }
            
          else if(digitalRead(cs1)==0 && digitalRead(cs2) ==1 && digitalRead(cs3) == 0){
            //sacamos por salida 2
              aux2 = 4;
            }
            
          else if(digitalRead(cs1)==0 && digitalRead(cs2) ==1 && digitalRead(cs3) == 1){
            //sacamos por salida 3
              aux3 = 4;
            }
            
          else if(digitalRead(cs1)==1 && digitalRead(cs2) ==0 && digitalRead(cs3) == 0){
            //sacamos por salida 4
              aux4 = 4;
            }
            
          else if(digitalRead(cs1)==1 && digitalRead(cs2) ==0 && digitalRead(cs3) == 1){
            //sacamos por salida 5
              aux5 = 4;
            }
          
          else if(digitalRead(cs1)==1 && digitalRead(cs2) ==1 && digitalRead(cs3) == 0){
            //sacamos por salida 6
              aux6 = 4;            }  
        }
        
        // caso para la entrada 5
        if(digitalRead(ce1) == 1 && digitalRead(ce2) == 0 && digitalRead(ce3) == 1){
          //evaluamos en donde se quiere la salida
          if(digitalRead(cs1)==0 && digitalRead(cs2) ==0 && digitalRead(cs3) == 1){
              //sacamos por salida 1
              aux1 = 5;
            }
            
          else if(digitalRead(cs1)==0 && digitalRead(cs2) ==1 && digitalRead(cs3) == 0){
            //sacamos por salida 2
              aux2 = 5;
            }
            
          else if(digitalRead(cs1)==0 && digitalRead(cs2) ==1 && digitalRead(cs3) == 1){
            //sacamos por salida 3
              aux3 = 5;
            }
            
          else if(digitalRead(cs1)==1 && digitalRead(cs2) ==0 && digitalRead(cs3) == 0){
            //sacamos por salida 4
              aux4 = 5;
            }
          
          else if(digitalRead(cs1)==1 && digitalRead(cs2) ==0 && digitalRead(cs3) == 1){
            //sacamos por salida 5
              aux5 = 5;
            }
          
          else if(digitalRead(cs1)==1 && digitalRead(cs2) ==1 && digitalRead(cs3) == 0){
            //sacamos por salida 6
              aux6 = 5;
            }  
        }
  }
