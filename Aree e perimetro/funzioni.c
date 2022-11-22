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

float area_triangolo(float base, float altezza){

  float area = (base * altezza) / 2;

  return area;
}

float perimetro_triangolo(float base, float altezza){

  float perimetro = base + (altezza * 2);

  return perimetro;

}

float area_cerchio(float raggio){

  float area = 3.14 * (raggio * raggio);

  return area;

}

float circonferenza_cerchio(float raggio){

  float circonferenza = 2 * 3.14 * raggio;

  return circonferenza;

}
