#define red 11
#define green 9
#define blue 10
String serialColor;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  serialColor = Serial.readString();
  	if(serialColor == "Vermelho"){
  	colors(255, 0, 0);
  }
 	else if(serialColor == "Limão"){
  	colors(0, 255, 0);
  }
 	else if(serialColor == "Marrom"){
  	colors(128, 0, 0);
  }
    else if(serialColor == "Verde oliva"){
  	colors(128, 128, 0);
  }
    else if(serialColor == "Azul marinho"){
  	colors(0, 0, 128);
  }
    else if(serialColor == "Tomate"){
  	colors(255, 99, 71);
  }
    else if(serialColor == "Laranja avermelhado"){
  	colors(255, 69, 0);
  }
    else if(serialColor == "Rosa profundo"){
  	colors(255, 20, 147);
  }
    else if(serialColor == "Rosa claro"){
  	colors(255, 182, 193);
  }
    else if(serialColor == "Cinza"){
  	colors(128, 128, 128);
  }
  Serial.println(serialColor);
  
}

void colors(int valorr, int valorg, int valorb){
  	analogWrite(red, valorr);
  	analogWrite(green, valorg);
  	analogWrite(blue, valorb);
  	delay(1000);
}