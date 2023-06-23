#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatorioVec(int min, int max);
void cargarVector(int v[], int tam);
void mostrarVector(int v[], int tam);
void sumaVectores(int v[], int w[], int r[], int tam);
void minimoVectores(int v[], int w[], int r[], int tam);

int main(){
    srand(time(NULL));

    int tam=6;
    int v[tam];
    int r[tam];

    cargarVector(v,tam);
    mostrarVector(v,tam);

    int w[tam];
    cargarVector(w,tam);
    mostrarVector(w,tam);

    sumaVectores(v,w,r,tam);
    mostrarVector(r,tam);

    minimoVectores(v,w,r,tam);

    return 0;
}

int aleatorioVec(int min, int max){
    int ale;
       ale = min+ rand()% (min-max+1);
    return ale;
};

void cargarVector(int v[], int tam){
    for(int i=0; i<tam; i++){
        v[i]=(aleatorioVec(-9,9));
    }
};


void mostrarVector(int v[], int tam){
    printf("||");
    for(int i=0; i<tam; i++){
        printf(" %d ", v[i]);
    }
    printf("||\n");
};

void sumaVectores(int v[],int w[], int r[],int tam){
    for(int i=0; i<tam; i++){
        r[i]= v[i] + w[tam-1-i];
    }

};

void minimoVectores(int v[], int w[], int r[], int tam){
    int min= v[0];

    for(int i=0; i<tam; i++){
        if(v[i]<min){
            min=v[i];
        }
        if(w[i]<min){
            min=w[i];
        }
        if(r[i]<min){
            min=r[i];
        }

    }

    printf("el minimo de los 3 vectores es: %d", min);
};

