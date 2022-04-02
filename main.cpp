/*
Nome : Giulio 
Cognome : Anyanwu 
Matricola : S4511135
Esercizio : Si scriva un programma che calcoli il valore risultante della seguente funzione:
z=a*x–b*y se x<0ey>0
z=a*x2 –b*y se x≥0ey≤0 
z = a*x + b*y2 altrimenti
a, b, x e y sono valori reali e vengono presi in ingresso dal programma nell’ordine indicato. Il programma deve solamente stampare a video il valore di z.
*/

#include <iostream>
using namespace std;

int main() {
   float a,b,x,y;
   cin >> a; 
   cin >> b;
   cin >> x;
   cin >> y;
   if (x<0 && y>0) 
   {
      cout << (a*x)-(b*y) << endl;
   } else if (x>=0 && y<=0) {
      cout << (a*x*x)-(b*y)<< endl;
   } else {
      cout << (a*x+b)*(y*y) << endl;
   }
   return 0;
}
