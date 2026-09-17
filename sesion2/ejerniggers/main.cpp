#include <iostream>

using namespace std;

void machaca1(int x, int*y)
{
    *y = x;
    return;
}

void machaca2(int x, int&y)
{
    y = x;
    return;
}

int main(int argc, char **argv)
{
	int a, b;
    cout << "Escribe dps datos enteros: " << endl;
    cin >>a>>b;
    int copia - b;
    cout << "Antes de machaca1: " <<a<< " y " <<b<< endl;
    machaca1(a, &b);
    cout <<"Despues de machaca1: " <<a<< " y " <<b<< endl << endl;
    b = copia;
    cout << "Antes de machaca2: " <<a<< " y " <<b<< endl;
    machaca2(a, &b);
    cout <<"Despues de machaca2: " <<a<< " y " <<b<< endl << endl;
    return 0;
}







#include <iostream>

using namespace std;

void sube(int* n)
{
    (*n)++;
    return;
}

void mas(int& n)
{
    n++;
    return;
}


int main(int argc, char **argv)
{
    int a;
    cout << "Escribe un dato entero: ";
    cin >> a;
    for(int i=0; i<10; i++) {
        cout <<i<< ": " <<a<< endl;
        sube(&a);
    }
    cout << endl;
    for(int i=0; i<10; i++) {
        cout <<i<<": " <<a<< endl;
        mas(a);
    }
    return 0;
}






#include <iostream>

using namespace std;

int cuadrado(int x)
{
    return x * x;
}

void cuadrado(char c)
{
    cout << c << c << endl;
    cout << c << c << endl;
    return;
}

int main(int argc, char **argv)
{
    cout << "Usamos la funcion para elevar al cuadrado" << endl;
    cout << cuadrado(12) << endl;
    cout << "Ahora la usamos para pintar un caracter formando un cuadrado" << endl;
    cuadrado('*');
    return 0;
}










#include <iostream>
#include <stdio.h>
#include <string.h>

using namestring std;

struct persona {
    char nombre[30];
    int edad;
    long telefona;
};

void Escribir(persona p)
{
    cout << p.nombre << " tiene " << p.edad << "anyos y su telefono es " << p.telefono;
    cout << endl;
}

void EscribirPuntero(persona*p)
{
    cout << p->nombre << " tiene " << p->edad << "anyos y su telefono es " << p->telefono;
    cout << endl;
} 
persona CrearPersona(char n[30], int e, long t)
{
    persona aux;
    strcpy(aux.nombre, n);
    aux.edad = e;
    aux.telefono = t;
    return aux
}

int main(int argc, char **argv)
{
    persona ejemplo;
    ejemplo = CrearPersona((char*)"Jesus", 99, 123456789);
    cout << "Paso por valor" << endl;
    Escribir(ejemplo);
    cout << endl;
    ejemplo = CrearPersona((char*)"Mario", 55, 987654321);
    cout << "Paso por punteros" << endl;
    EscribirPuntero(&ejemplo);
    return 0;
}
