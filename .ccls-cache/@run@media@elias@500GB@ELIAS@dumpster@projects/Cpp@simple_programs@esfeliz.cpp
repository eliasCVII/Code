/* borrador
problema: dado un rango [a,b], mostrar todos los numeros felices dentro
de ese rango

a)
funciones:
- rango
- cuadrado
- feliz
    - suma de cuadrados < 10? es igual a 1?, es feliz : no es feliz

primero tomamos un numero x e y, tal que x<y para generar nuestro rango, al
tener el rango generaremos los digitos que pertenecen al rango con un contador,
que va desde x a y. descomponemos el numero en sus digitos, los elevamos al
cuadrado y sumamos los numeros nuevos luego con una funcion cuadrado() que eleva
el numero a 2


b)
variables   tipo    desc
x           entera  minimo del rango
y           entera  maximo del rango
r           entera  calcula resto
sum         entera  suma cuadrados
sq          entera  resto al cuadrado
n           entera  numero entero
new_n       entera  copia de n
temp        entera  ayuda para cambiar x con y
*/

#include <iostream>
using namespace std;

int sqDig(int num) {
  // eleva los digitos al cuadrado y los suma dandonos una suma total...
  int r, sum, sq;
  sum = 0;
  while (num > 0) {
    r = num % 10;
    sq = r * r;
    sum = sq + sum;
    num /= 10;
  }
  return sum;
}

bool feliz(int num) {
  // retorna true si es feliz, si no retorna false
  int s;
  while (num != 1) {
    s = sqDig(num);
    if (s >= 10)
      num = s;
    else if (s == 1)
      return true;
    else
      return false;
  }
  return true;
}

void rango(int x, int y) {
  // aseguramos que x siempre sea menor que y, y creamos los numeros del rango
  // con un contador i
  int temp, i;
  if (x > y) { // cambiamos lugar x con y para cumplir x<y
    temp = y;
    y = x;
    x = temp;
    // cout << "el rango es " << x << ", "<< y << endl;
    for (i = x; i <= y; i++) {
      int k = sqDig(i);
      if (feliz(k))
        cout << sqDig(k) << " " << endl;
    }
  } else { // trabajar con los numeros sin modificar
    for (i = x; i <= y; i++) {
      int k = sqDig(i);
      if (feliz(k))
        cout << sqDig(k) << " " << endl;
    }
  }
}

int main() {
  int x, y;
  cout << "x: ";
  cin >> x;
  cout << "y: ";
  cin >> y;
  if (x < 0 || y < 0) {
    cout << "volver a ingresar datos...";
    return 3;
  } else
    rango(x, y);
  return 0;
}
