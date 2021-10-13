#include "Mundo.h"

void Mundo::run() {
    cam.Renderizar();
}

void Mundo::escenario1() {
    std::cout<<"dentro de mundo";
    cam.calcularVectores(vec3f(5, 10, 30), vec3f(0, 0, 0), vec3f(0, 1, 0));
    cam.inicializar(800, 600, 45, 10);

    vector<Objeto*> objetos;

/*
    Caja *pCaja = new Caja(vec3f(6.1, 2, 6.1),vec3f	(141, 73, 37),vec3f(0, 0, 0),5);
    pCaja->es_reflexivo = true;
    objetos.push_back(pCaja);
    */
    Plano *pPlano = new Plano(vec3f(0, 0, 0),
                              vec3f(0, 1, 0),
                              vec3f(0.6, 0.6, 1),
                              vec3f(0.9, 0.4, 0), 3);
    objetos.push_back(pPlano);
/*
    Objeto *pEsfera = new Esfera(vec3f(0, 5, 0), 4, vec3f(1, 0, 0),
                                 vec3f(0.9, 0.5, 0.2), 4);
    pEsfera->es_reflexivo = true;
    objetos.push_back(pEsfera);
*/
    Objeto *pEsfera12 = new Esfera(vec3f(-2, 5, 10), 4, vec3f(0, 1, 0),
                                   vec3f(1, 0.6, 0.3), 3);
    pEsfera12->es_reflexivo = true;
    pEsfera12->es_refractivo = true;
    objetos.push_back(pEsfera12);
/*
    Triangulo *pTri1 = new Triangulo(vec3f(5,0,0), vec3f(7,0,8), vec3f(10,7,4), vec3f(0,0,1),
                                     vec3f(0.5,0.5,0), 3);
    objetos.push_back(pTri1);
*/
    cam.setObjetos(objetos);
}

void Mundo::Proyecto(){
    std::cout<<"dentro de mundo";

    cam.calcularVectores(vec3f(-3, 13, 50), vec3f(0, 0, 0), vec3f(0, 0.25, 0));
    cam.inicializar(800, 600, 45, 10);

    vector<Objeto*> objetos;

    /*******************
     *
     * TODO Proyecto Luciernagas en un frasco
     *
     * ***************************/
    /***
    * TODO Plano
    ***/
    Plano *pPlano = new Plano(vec3f(0, 0, 0),vec3f(0, 1, 0),vec3f(0.6, 0.6, 1),vec3f(0.9, 0.4, 0), 3);
    objetos.push_back(pPlano);
    /***
     * TODO Cilindro -
     * Existen 2 cilindros; el 1ro es el frasco y el 2do es la tapa
     ***/
    //TODO FRASCO
    Objeto *pCilindroFrasco = new Cilindro(vec3f(0, 12, 0),vec3f(0, 0, 0),5,vec3f(1, 1, 1),vec3f(10, 230, 30),1);
    pCilindroFrasco->es_reflexivo = true;pCilindroFrasco->es_refractivo = true;
    objetos.push_back(pCilindroFrasco);
    //TODO TAPA
    Objeto *pCilindroTapa = new Cilindro(vec3f(0, 10, 0),vec3f(0, 13, 0),5.3,vec3f(100, 149, 237),vec3f(10, 230, 30),1);
    pCilindroTapa->es_reflexivo=true;
    objetos.push_back(pCilindroTapa);
    /***
     * TODO Luciernaga - Esfera
     ***/
    for (int i = 0; i<=5;i++ ){
        Esfera *pEsfera = new Esfera(
                vec3f(random(3), positive_random(5), random(4)),
                0.2,
                vec3f(250, 191, 0),
                vec3f(0.9, 0.5, 0.2), 4);
        objetos.push_back(pEsfera);
    }
    cam.setObjetos(objetos);
}

void Mundo::Matriz() {
    std::cout<<"Dentro del mundo";
    cam.calcularVectores(vec3f(-1, 30, 100), vec3f(0, 0, 0), vec3f(0, 1, 0));
    cam.inicializar(800, 600, 45, 10);

    vector<Objeto*> objetos;
    Plano *pPlano = new Plano(vec3f(0, 0, 0),
                              vec3f(0, 1, 0),
                              vec3f(0.6, 0.6, 1),
                              vec3f(0.9, 0.4, 0), 3);
    objetos.push_back(pPlano);
    /** TODO Matrix de ESFERAS **/
    for(int kd=0;kd<4;kd++){
        for(int ks=0;ks<4;ks++){
            Objeto *pEspefera14 = new Esfera(vec3f(-10+kd*10, 4,-10+ks*10),
                                             4,
                                             vec3f(1,0,0.25),
                                             vec3f(kd*0.5,ks*0.5,0.8),
                                             4);
            pEspefera14->es_reflexivo = true;
            pEspefera14->es_refractivo = true;
            objetos.push_back(pEspefera14);
        }
    }
    cam.setObjetos(objetos);
}
