# Led-RGB
Atividade feita durante as aulas do Curso técnico em Automação industrial 2020.
Projeto presente no [Tinkercad](https://www.tinkercad.com/things/8HeKKI0H8wm-rgb-cores) para simulação!

![image](https://user-images.githubusercontent.com/95356877/173210356-d5e9c2f1-6236-4361-b8b7-a74619089f68.png)

##

👩‍💻 Explicação código:

- Inicialmente, defini os pinos a serem usados e criei uma variável do tipo String que receberá a cor desejada:
  Você pode utilizar qualquer outro pino se quiser, porém fique atento que somente os pinos pwm~/analógicos irão funcionar!

      #define red 11
      #define green 9
      #define blue 10
      
      String serialColor;
      
- Na função SETUP, defini os pinos citados acima como saídas(outputs):

      void setup()
      {
        pinMode(red, OUTPUT);
        pinMode(green, OUTPUT);
        pinMode(blue, OUTPUT);
        Serial.begin(9600);
      }
      
- Na função LOOP, fiz a lógica das cores a serem formadas pelo led, de acordo com o que é escrito no Monitor Serial. Por exemplo, quero que o Led RGB forme a cor Tomate, para isso, vou no Monitor Serial, e digito "Tomate"(exatamente deste jeito, com T maiúsculo e demais letras minúsculas), em seguida, ele irá entrar no if que monta as cores RGB Tomate(255, 99, 71).* 

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

*Caso queira outras cores, busque [tabelas rgb](http://priscilabbrasil.blogspot.com/2009/11/tabela-de-cores-rgb-hexadecimal.html).

Como você pode ter notado, outra função foi chamada, no caso a função COLORS, esta tem como parâmetros os valores que devem ser postos de 0 à 255 para cada pino do led, ou seja, o pino Red receberá um valor, o Green e o blue também, faça uma analogia desses valores com quantidade de tintas! Se você quer uma cor vermelho puro, coloque sua cor vermelha(255) e nada de verde(0) e azul(0)! Conforme você queira fazer misturas, é só ir alterando as quantidades.

    void colors(int valorr, int valorg, int valorb){
        analogWrite(red, valorr);
        analogWrite(green, valorg);
        analogWrite(blue, valorb);
        delay(1000);
    }
    
 ##
 
É basicamente isso!
Quer fazer um Sugestão? Correção? Ou tem alguma dúvida?
Entre em contato comigo!

<a href="https://www.linkedin.com/in/anna-rocha-5a3126227" target="_blank"><img src="https://img.shields.io/badge/-LinkedIn-%230077B5?style=for-the-badge&logo=linkedin&logoColor=white" target="_blank"></a>
  <a href = "mailto:annaleletr@gmail.com"><img src="https://img.shields.io/badge/-Gmail-%23333?style=for-the-badge&logo=gmail&logoColor=white" target="_blank"></a>
  
  Discord:
  
     ANNA#8936

<div align="center">
       
 ![ThatsAll](https://user-images.githubusercontent.com/95356877/173210799-816673cd-51be-42b1-953b-01c92228e2e9.gif)
      
</div>
