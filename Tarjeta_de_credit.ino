/**********************************************************************************
**                                                                               **
**                             Tarjeta de credit                                 **
**                                                                               **
**   NOM: Carles Bosch                                    DATA: 10 / 03 / 2017   **
**********************************************************************************/
//********** INCLUDE **************************************************************
long valor = 47666442;
long valor2 = 98205015;
long n1;
long n2;
long n3;
long n4;
long n5;
long n6;
long n7;
long n8;
long n9;
long n10;
long n11;
long n12;
long n13;
long n14;
long n15;
long n16;
long total;
//********** VARIABLES ************************************************************

//********** SETUP ****************************************************************
void setup() {                // S'executa un sol cop

Serial.begin(9600);
Serial.print(valor);
Serial.println(valor2);

n1 = valor / 10000000;
n2 = (valor / 1000000) - (n1 * 10);
n3 = (valor / 100000) - (n1 * 100) - (n2 * 10);
n4 = (valor / 10000) - (n1 * 1000) - (n2 * 100) - (n3 * 10);
n5 = (valor / 1000) - (n1 * 10000) - (n2 * 1000) - (n3 * 100 ) - (n4 * 10);
n6 = (valor / 100) - (n1 * 100000) - (n2 * 10000) - (n3 * 1000 ) - (n4 * 100) - (n5 * 10);
n7 = (valor / 10) - (n1 * 1000000) - (n2 * 100000) - (n3 * 10000 ) - (n4 * 1000) - (n5 * 100) - (n6 * 10);
n8 = (valor / 1) - (n1 * 10000000) - (n2 * 1000000) - (n3 * 100000 ) - (n4 * 10000) - (n5 * 1000) - (n6 * 100) - (n7 * 10);
n9 = (valor2 / 10000000);
n10 = (valor2 / 1000000) - (n9 * 10);
n11 = (valor2 / 100000) - (n9 * 100) - (n10 * 10);
n12 = (valor2 / 10000) - (n9 * 1000) - (n10 * 100) - (n11 * 10);
n13 = (valor2 / 1000) - (n9 * 10000) - (n10 * 1000) - (n11 * 100) - (n12 * 10);
n14 = (valor2 / 100) - (n9 * 100000) - (n10 * 10000) - (n11 * 1000) - (n12 * 100) - (n13 * 10);
n15 = (valor2 / 10) - (n9 * 1000000) - (n10 * 100000) - (n11 * 10000) - (n12 * 1000) - (n13 * 100) - (n14 * 10);
n16 = (valor2 / 1) - (n9 * 10000000) - (n10 * 1000000) - (n11 * 100000) - (n12 * 10000) - (n13 * 1000) - (n14 * 100) - (n15 * 10);

Serial.print(n1);
Serial.print("-");
Serial.print(n2);
Serial.print("-");
Serial.print(n3);
Serial.print("-");
Serial.print(n4);
Serial.print("-");
Serial.print(n5);
Serial.print("-");
Serial.print(n6);
Serial.print("-");
Serial.print(n7);
Serial.print("-");
Serial.print(n8);
Serial.print("-");
Serial.print(n9);
Serial.print("-");
Serial.print(n10);
Serial.print("-");
Serial.print(n11);
Serial.print("-");
Serial.print(n12);
Serial.print("-");
Serial.print(n13);
Serial.print("-");
Serial.print(n14);
Serial.print("-");
Serial.print(n15);
Serial.print("-");
Serial.println(n16);

n1 = n1 * 2;
n2 = n2 * 1;
n3 = n3 * 2;
n4 = n4 * 1;
n5 = n5 * 2;
n6 = n6 * 1;
n7 = n7 * 2;
n8 = n8 * 1;
n9 = n9 * 2;
n10 = n10 * 1;
n11 = n11 * 2;
n12 = n12 * 1;
n13 = n13 * 2;
n14 = n14 * 1;
n15 = n15 * 2;
n16 = n16 * 1;

if (n1 > 9)
{
  n1 = n1 % 10;
  n1 = n1 + 1;
}
if (n3 > 9)
{
  n3 = n3 % 10;
  n3 = n3 + 1;
}
if (n5 > 9)
{
  n5 = n5 % 10;
  n5 = n5 + 1;
}
if (n7 > 9)
{
  n7 = n7 % 10;
  n7 = n7 + 1;
}
if (n9 > 9)
{
  n9 = n9 % 10;
  n9 = n9 + 1;
}
if (n11 > 9)
{
  n11 = n11 % 10;
  n11 = n11 + 1;
}
if (n13 > 9)
{
  n13 = n13 % 10;
  n13 = n13 + 1;
}
if (n15 > 9)
{
  n15 = n15 % 10;
  n15 = n15 + 1;
}
if (n1 > 9)
{
  n1 = n1 % 10;
  n1 = n1 + 1;
}

Serial.print(n1);
Serial.print("-");
Serial.print(n2);
Serial.print("-");
Serial.print(n3);
Serial.print("-");
Serial.print(n4);
Serial.print("-");
Serial.print(n5);
Serial.print("-");
Serial.print(n6);
Serial.print("-");
Serial.print(n7);
Serial.print("-");
Serial.print(n8);
Serial.print("-");
Serial.print(n9);
Serial.print("-");
Serial.print(n10);
Serial.print("-");
Serial.print(n11);
Serial.print("-");
Serial.print(n12);
Serial.print("-");
Serial.print(n13);
Serial.print("-");
Serial.print(n14);
Serial.print("-");
Serial.print(n15);
Serial.print("-");
Serial.println(n16);

total = n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10 + n11 + n12 + n13 + n14 + n15 + n16;

Serial.println (total);

total = total % 10;

if (total == 0)
{
  Serial.println("SI");
}
else
{
  Serial.println("NO");
}
}

//********** LOOP *****************************************************************
void loop() {                // S'executa repetidament 
}

//********** FUNCIONS *************************************************************
