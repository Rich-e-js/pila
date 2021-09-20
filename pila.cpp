#include <iostream>
#include <string.h>

using namespace std;

class Pila
{
private:
    static const int MAX = 6;
    int tope;
    //el alrreglo donde se almacenan los valores de la pila
    char valores[MAX][15];

public:
    Pila()
    {
        tope = -1;
    }

    int empty()
    {
        if (tope == -1)
            return 1;
        else
            return 0;
    }

    int full()
    {
        if (tope == MAX - 1)
            return 1;
        else
            return 0;
    }

    void push(char v[])
    {
        if (!full())
        {
            //valores[++tope]=v;
            strcpy(valores[++tope], v);
            cout << "nombre agregado: " << valores[tope] << endl;
        }
        else
        {
            cout << "No es posible agregar elemento" << endl;
        }
    }

    int pop()
    {
        if (!empty())
        {
            //return (valores[tope--]);
            cout << "nombre eliminado: " << valores[tope--] << endl;
            return (1);
        }
        else
        {
            cout << "No es posible extraer un elemento" << endl;
            return 0;
        }
    }

    void imprimirPila()
    {
        cout << "esta es la pila: " << endl;
        cout << "-----------------" << endl;
        for (int i = 0; i <= tope; i++)
        {
            if (valores[i])
            {
                cout << valores[i] << endl;
            }
        }
        cout << "-----------------" << endl;
    }
};

int main(int argc, char *argv[])
{

    Pila pila;

    pila.push("Karen");
    pila.push("Hotaru");
    pila.push("Lalatina");
    pila.push("Satzuki");
    int opcion;
    int permanecer = 1;
    bool repetir = true;
    while (repetir)
    {
        // Texto del menú que se verá cada vez
        pila.imprimirPila();
        cout << "\n\nMenu de Opciones" << endl;
        cout << "1. Extraer un nombre" << endl;
        cout << "2. Insertar 3 nombres" << endl;
        cout << "3. Extraer 2 nombres" << endl;
        cout << "0. SALIR" << endl;

        cout << "\nIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            pila.pop();
            getchar();
            break;

        case 2:
            pila.push("Senko");
            pila.push("Uzaki");
            pila.push("Tejina");
            getchar();
            break;

        case 3:
            pila.pop();
            pila.pop();
            getchar();
            break;

        case 0:
            repetir = false;
            break;
        }
    }

    return EXIT_SUCCESS;
}
