#include <iostream>
#include<cmath>
#include <stdlib.h>
#include<string.h> 
using namespace std;
float val[4];			//almacena los valores iniciales introducidos por el usuario abcd
float xs[3];			//almacena nuestros reultados finales 
void formatonum();
void polynomic3();
void formulagen();
int main() {
    formatonum();
    polynomic3();

    //imprimir resultados finales
    cout << "{";
    for (int i = 0; i < 3; i++) {
        if (xs[i] == 9876543) {
            cout << ' ';		//valor para determinar que no hay raiz
        }
        else {
            cout << xs[i] << " , ";
        }

    }
    cout << "}";
    return 0;
}//fn main 

void formatonum() {
    char entrada[40];
    int num[4];
    char* bre;

    cin.getline(entrada, 40, '\n');		//recibe entrada hasta que des enter
    bre = strtok(entrada, " ");

    while (bre != NULL) {
        for (int i = 0; i < 4; i++) {
            val[i] = atoi(bre);
            bre = strtok(NULL, " ");
        }//fn llenado val
    }//fin while

    return;
}//fn formato num 

void polynomic3() {
    float a, b, c, d, x1, x2, x3;
    float PI = 3.14159265358979323846;
    a = val[0];
    b = val[1];
    c = val[2];
    d = val[3];


    //solo tengo 2 raices
    if (d == 0)
    {
        //ME VOY A UNA FUNCION CON FORMULA GENERAL
        formulagen();
        return;
    } //End if 
    b /= a;
    c /= a;
    d /= a;
    float disc, q, r, dum1, s, t, term1, r13, q3;
    q = (3.0 * c - (b * b)) / 9.0;
    r = -(27.0 * d) + b * (9.0 * c - 2.0 * (b * b));
    r /= 54.0;
    disc = q * q * q + r * r;

    term1 = (b / 3.0);
    //solo tengo una raiz real , las otras dos serian imaginarias
    if (disc > 0) {
        s = r + sqrt(disc);
        s = ((s < 0) ? -pow(-s, (1.0 / 3.0)) : pow(s, (1.0 / 3.0)));
        t = r - sqrt(disc);
        t = ((t < 0) ? -pow(-t, (1.0 / 3.0)) : pow(t, (1.0 / 3.0)));
        x1 = -term1 + s + t;
        x2 = x3 = 9876543;
        xs[0] = x1;
        xs[1] = x2;
        xs[2] = x3;

        return;
    } //fn if

    //2 raices iguales pero las 3 reales
    if (disc == 0) {
        r13 = ((r < 0) ? -pow(-r, (1.0 / 3.0)) : pow(r, (1.0 / 3.0)));
        x1 = -term1 + 2.0 * r13;
        x3 = x2 = -(r13 + term1);
        xs[0] = x1;
        xs[1] = x2;
        xs[2] = x3;
        return;
    } // fn if 
    // todas las raices son diferentes peero reales
    q = -q;
    q3 = q * q * q;
    dum1 = acos(r / sqrt(q3));
    r13 = 2.0 * sqrt(q);
    x1 = -term1 + r13 * cos(dum1 / 3.0);
    x2 = -term1 + r13 * cos((dum1 + 2.0 * PI) / 3.0);
    x3 = -term1 + r13 * cos((dum1 + 4.0 * PI) / 3.0);

    xs[0] = x1;
    xs[1] = x2;
    xs[2] = x3;
    return;
}//fn polygrado3
void formulagen() {
    float a, b, c, x1, x2, aux;
    a = val[0];
    b = val[1];
    c = val[2];
    aux = b - (4 * a * c);
    if (aux < 0) {
        //las raices son imaginarias
        cout << "raiz imaginaria";
        x1 = x2 = 9876543;

    }
    else {
        x1 = (-b + sqrt(aux)) / (2 * a);
        x2 = (-b - sqrt(aux)) / (2 * a);
    }
    xs[0] = x1;
    xs[1] = x2;
    xs[2] = 0;

    return;
}//fn formula gen