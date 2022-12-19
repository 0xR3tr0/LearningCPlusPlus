#include <iostream>

using namespace std;

float area_quadrato(float lato){

    float area = lato * lato;

    return area;

}

float perimetro_quadrato(float lato){

    float perimetro = lato * 4;

    return perimetro;

}

float area_rettangolo(float base, float altezza){

    float area = base * altezza;

    return area;

}

float perimetro_rettangolo(float base, float altezza){

    float perimetro = (base + altezza) * 2;

    return perimetro;

}