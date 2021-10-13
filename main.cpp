#include <iostream>
#include <chrono>
#include <pthread.h>

#include "Mundo.h"


using namespace std;

/* TODO GLOBAL VARIABLE - DEFINE*/

int TIME=10,STOP=0;
#define thread_ 4
#define IMG 60
#define FOR(i,a,b) for(int i=(a);i < b;i++)
#define ROF(i,a,b) for(int i=(a);i>b;i--)

int main() {

	Mundo mundo;
    //mundo.escenario1();//TODO CLASS
	mundo.Proyecto();//TODO PROYECTO
    //mundo.Matriz();//TODO PC
    mundo.run();
    /*
    printf("Iniciando renderizado\n");

    auto time1 = chrono::high_resolution_clock::now();

    system("/IMG/*.bmp");
    system("/VIDEO/video1.mp4");

    pthread_t threads[thread_];
    FOR(i,0,thread_){
        int *p = nullptr;
        pthread_create(&threads[i], nullptr, Proyecto_1, (void*)(p));
    }

    FOR(i,0,thread_){
        pthread_join(threads[i], nullptr);
    }

    string ffmpeg = "ffmpeg image2 " + to_string(IMG) + "../IMG/scene_frame_%d.bmp ../VIDEO/video.mp4";
    system(ffmpeg.c_str());

    auto time2 = chrono::high_resolution_clock::now();

    chrono::duration<double> execution_time = time2 - time1;

    cout << (int)(execution_time.count()) / 60 << " minutos y " << (int)(execution_time.count()) % 60 << " segundos" << endl;
*/
    return 0;
}
