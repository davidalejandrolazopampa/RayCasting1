#ifndef RT1_OBJETO_H
#define RT1_OBJETO_H

#include "vector.h"
#include "Rayo.h"

class Objeto {
private:

    float eta;

public:

    vec3f color;
    vec3f kdkskr;
    bool es_reflexivo, es_refractivo;
    float n;

    Objeto()=default;
    Objeto(vec3f col, vec3f _kdkskr, float _n);
    virtual bool intersectar(Rayo ray, float &t, vec3f &c, vec3f &normal)=0; // TODO polimorfirmo hacia todas las figuras
};

#endif //RT1_OBJETO_H
