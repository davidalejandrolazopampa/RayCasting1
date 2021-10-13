#ifndef RT1_TRIANGULO_H
#define RT1_TRIANGULO_H

#include "Objeto.h"

class Triangulo : public Objeto{
private:
    vec3f p1,p2,p3;
public:

    Triangulo()=default;
    Triangulo(vec3f _p1, vec3f _p2, vec3f _p3, vec3f _color, vec3f _kdkskr, float _n):p1{_p1}, p2{_p2}, p3{_p3}, Objeto(_color, _kdkskr, _n) {}
    bool intersectar(Rayo ray, float &t, vec3f &c, vec3f &_normal) override{
        vec3f v23 = p3 - p2;
        vec3f v31 = p1 - p3;
        vec3f v12 = p2 - p1;
        vec3f normal = (v12).productoCruz(v23);
        t = normal.productoPunto(p1-ray.ori)/ normal.productoPunto(ray.dir);
        if ( t > 0.0001 ) {
            vec3f pi = ray.punto_interseccion(t);
            float a1 = normal.productoPunto(v23.productoCruz(pi-p2))/2;
            float a2 = normal.productoPunto(v31.productoCruz(pi-p3))/2;
            float a3 = normal.productoPunto(v12.productoCruz(pi-p1))/2;
            float at = a1 + a2 + a3;
            float L1 = a1 / at;
            float L2 = a2 / at;
            float L3 = a3 / at;
            if ( L1 >= 0 && L1 <= 1 &&
                 L2 >= 0 && L2 <= 1 &&
                 L3 >= 0 && L3 <= 1) {
                _normal = normal;
                c = color;
                return true;
            }
        }
        return false;
    };
};

#endif //RT1_TRIANGULO_H
