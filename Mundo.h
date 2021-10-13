#ifndef RT1_MUNDO_H
#define RT1_MUNDO_H
#include "./Camara.h"
#include "Cilindro.h"
#include "Esfera.h"
#include "Plano.h"
#include "Caja.h"
#include "Triangulo.h"

class Mundo {
private:
    Camara cam;
public:

  Mundo(){};

  void run();
  void escenario1(); //TODO CLASE
  void Matriz(); // TODO PC
  void Proyecto();//TODO PROYECTO

  float positive_random(int max){  return ((rand() % (max * 10)) + 1) / 10.0;}
  float random(int max){float random_number = rand() % (max * 10) + 1;
      random_number = random_number - (max*10/2.0);
      return random_number / 10.0;}
};



#endif //RT1_MUNDO_H
