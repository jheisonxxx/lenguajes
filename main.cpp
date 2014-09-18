#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <time.h>
using namespace std;

template <class T>
class mycontainer {
    T element;
  public:
    mycontainer (T arg) {element=arg;}
    T increase () {return ++element;}
};



class Quina{
 public:

    int fila_dinamica;
    int columna_dinamica;

    int * jugadores;
    int * sorteados;
    int ** matr;
    int aciertos;
    int nrojugadores=8;
    Quina(){

    jugadores=new int[nrojugadores];

    for(int i = 0; i<nrojugadores;i++){
        jugadores[i] = 0;
    }
    sorteados=new int[7];
    sorteados[0]=8;
    sorteados[1]=25;
    sorteados[2]=36;
    sorteados[3]=37;
    sorteados[4]=60;
    sorteados[5]=-2;
    sorteados[6]=-2;

    matr = new int *[nrojugadores];
        for(int i = 0; i<nrojugadores;i++){
          matr[i] = new int[nrojugadores];
        }

    }



    void set_values (int x, int y, int valor) {
        matr[x][y]=valor;
    }
    void print(){

    for(int i=0;i<nrojugadores;i++){
            cout<<"nro: "<<i<<" ";
            for(int j = 0; j<7;j++){
                cout<<matr[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    void print_aciertos(){

        cout<<"Premio Mayor"<<endl;

        for(int i=0;i<7;i++){
            cout<<sorteados[i]<<" ";


        }
        cout<<endl;
        cout<<"jugador    acierto"<<endl;

        for(int i=0;i<nrojugadores;i++){
            cout<<i<<" "<<jugadores[i]<<endl;

        }
    }




void calcular_ganadores(){

  for(int i=0;i<nrojugadores;i++){
                for(int k=0;k<7;k++){
                 for(int j = 0; j<7;j++){
                    if(matr[i][j]==sorteados[k]){
                        jugadores[i]++;
                    }
                 }
                 int pot;
                    //cin>>pot;
                }
            }
}


float calcular_precio(){


float precio_total=0;
for(int i=0;i<nrojugadores;i++){
    float jugador_precio=0;
    for(int k=0;k<7;k++){
        if(matr[i][k]>=0){
            jugador_precio++;
        }
    }

    if(jugador_precio==5){
        precio_total=precio_total+0.50;
    }
    if(jugador_precio==6){
        precio_total=precio_total+1.00;
    }
    if(jugador_precio==7){
        precio_total=precio_total+2.5;
    }

}

cout<<precio_total<<endl;
precio_total=(38*precio_total)/104.5;
cout<<precio_total<<endl;
return precio_total;
}



   float calcular_reparticion(float premios){
    int quina=0;
    int quadra=0;
    int terno=0;
  for(int i=0;i<nrojugadores;i++){
    if(jugadores[i]==5){

    quina++;
    }
   if(jugadores[i]==4){

    quadra++;
    }

     if(jugadores[i]==3){

    terno++;
    }
   }

   cout<<"quina "<<quina<<" "<<(premios*0.35)/quina<<endl;
   cout<<"quadra "<<quadra<<" "<<(premios*0.25)/quadra<<endl;
   cout<<"terno "<<terno<<" "<<(premios*0.25)/terno<<endl;
   }
};


class Lotogol{
 public:

    int fila_dinamica;
    int columna_dinamica;

    int * jugadores;
    int * sorteados;
    int ** matr;
    int aciertos;
    int nrojugadores=9;
    Lotogol(){

    jugadores=new int[nrojugadores];

    for(int i = 0; i<nrojugadores;i++){
        jugadores[i] = 0;
    }
    sorteados=new int[10];
    sorteados[0]=3;
    sorteados[1]=2;
    sorteados[2]=10;
    sorteados[3]=2;
    sorteados[4]=3;
    sorteados[5]=3;
    sorteados[6]=0;
    sorteados[7]=10;
    sorteados[8]=2;
    sorteados[9]=3;



    matr = new int *[nrojugadores];
        for(int i = 0; i<nrojugadores;i++){
          matr[i] = new int[nrojugadores];
        }
    }



    void set_values (int x, int y, int valor) {
        matr[x][y]=valor;
    }
    void print(){

    for(int i=0;i<nrojugadores;i++){
          //  cout<<"nro: "<<i<<" ";
            for(int j = 0; j<10;j++){
                cout<<matr[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    void print_aciertos(){

        cout<<"Premio Mayor"<<endl;

        for(int i=0;i<10;i++){
            cout<<sorteados[i]<<" ";


        }
        cout<<endl;
        cout<<"jugador    acierto"<<endl;

        for(int i=0;i<nrojugadores;i++){
            cout<<i<<" "<<jugadores[i]<<endl;

        }
    }


    int contar(int * vec,int num){
        int sum=0;
        for(int i=0;i<nrojugadores;i++){
            if(vec[i]==num)
                sum++;
        }
    return sum;
    }

void calcular_ganadores(){

  for(int i=0;i<nrojugadores;i++){
           // cout<<"primera ite"<<i<<endl;

                for(int k=0;k<10;k=k+2){
                 for(int j = 0; j<10;j=j+2){
                     //   cout<<matr[i][j]<<" "<<matr[i][j+1]<<"     "<<sorteados[k]<<" "<<sorteados[k+1]<<endl;
                    if((matr[i][j]==sorteados[k])&&(matr[i][j+1]==sorteados[k+1])){
                        jugadores[i]++;
                    }
                 }
                }
            }
}


float calcular_precio(){


float precio_total=0;
for(int i=0;i<nrojugadores;i++){
    float jugador_precio=0;
    for(int k=0;k<10;k++){
        if(matr[i][k]>=0){
            jugador_precio++;
        }
    }

    if(jugador_precio==5){
        precio_total=precio_total+0.75;
    }
    if(jugador_precio==6){
        precio_total=precio_total+3.00;
    }
    if(jugador_precio==7){
        precio_total=precio_total+7.5;
    }

}

precio_total=(32.20*precio_total)/104.5;
return precio_total;
}


   float calcular_reparticion(float premios){
    int quina=0;
    int quadra=0;
    int terno=0;
  for(int i=0;i<nrojugadores;i++){
    if(jugadores[i]==5){

    quina++;
    }
   if(jugadores[i]==4){

    quadra++;
    }

     if(jugadores[i]==3){

    terno++;
    }
   }

cout<<"quina "<<quina<<" "<<(premios*0.40)/quina<<endl;
   cout<<"quadra "<<quadra<<" "<<(premios*0.30)/quadra<<endl;
   cout<<"terno "<<terno<<" "<<(premios*0.30)/terno<<endl;
   }
};



int main () {


  Quina lot;
  lot.set_values (0,0,8);
  lot.set_values (0,1,25);
  lot.set_values (0,2,36);
  lot.set_values (0,3,37);
  lot.set_values (0,4,49);
  lot.set_values (0,5,60);
  lot.set_values (0,6,74);

  //sorteados[0]=8;
  //sorteados[1]=25;
    //sorteados[2]=36;
    //sorteados[3]=37;
    //sorteados[4]=60;


  lot.set_values (1,0,5);
  lot.set_values (1,1,22);
  lot.set_values (1,2,31);
  lot.set_values (1,3,36);
  lot.set_values (1,4,37);
  lot.set_values (1,5,50);
  lot.set_values (1,6,60);


  lot.set_values (2,0,7);
  lot.set_values (2,1,37);
  lot.set_values (2,2,63);
  lot.set_values (2,3,64);
  lot.set_values (2,4,74);
  lot.set_values (2,5,-1);
  lot.set_values (2,6,-1);


  lot.set_values (3,0,5);
  lot.set_values (3,1,8);
  lot.set_values (3,2,25);
  lot.set_values (3,3,32);
  lot.set_values (3,4,37);
  lot.set_values (3,5,60);
  lot.set_values (3,6,-1);

  lot.set_values (4,0,11);
  lot.set_values (4,1,21);
  lot.set_values (4,2,44);
  lot.set_values (4,3,47);
  lot.set_values (4,4,62);
  lot.set_values (4,5,-1);
  lot.set_values (4,6,-1);

  lot.set_values (5,0,8);
  lot.set_values (5,1,25);
  lot.set_values (5,2,36);
  lot.set_values (5,3,37);
  lot.set_values (5,4,60);
  lot.set_values (5,5,-1);
  lot.set_values (5,6,-1);

  lot.set_values (6,0,6);
  lot.set_values (6,1,8);
  lot.set_values (6,2,17);
  lot.set_values (6,3,25);
  lot.set_values (6,4,44);
  lot.set_values (6,5,60);
  lot.set_values (6,6,-1);

  lot.set_values (7,0,4);
  lot.set_values (7,1,27);
  lot.set_values (7,2,30);
  lot.set_values (7,3,32);
  lot.set_values (7,4,33);
  lot.set_values (7,5,38);
  lot.set_values (7,6,76);


  cout<<endl;
  lot.print();

  lot.calcular_ganadores();
   lot.print_aciertos();
  //
  cout<<endl;
  float premios=lot.calcular_precio();
  lot.calcular_reparticion(premios);


cout<<endl<<endl<<endl;
cout<<"Lotogol---------------------------------"<<endl<<endl;



  Lotogol gol;
  gol.set_values (0,0,3);
  gol.set_values (0,1,2);
  gol.set_values (0,2,10);
  gol.set_values (0,3,2);
  gol.set_values (0,4,3);
  gol.set_values (0,5,3);
  gol.set_values (0,6,0);
  gol.set_values (0,7,10);
  gol.set_values (0,8,2);
  gol.set_values (0,9,3);


  gol.set_values (1,0,2);
  gol.set_values (1,1,10);
  gol.set_values (1,2,10);
  gol.set_values (1,3,2);
  gol.set_values (1,4,0);
  gol.set_values (1,5,0);
  gol.set_values (1,6,0);
  gol.set_values (1,7,10);
  gol.set_values (1,8,2);
  gol.set_values (1,9,3);


  gol.set_values (2,0,3);
  gol.set_values (2,1,3);
  gol.set_values (2,2,10);
  gol.set_values (2,3,2);
  gol.set_values (2,4,3);
  gol.set_values (2,5,3);
  gol.set_values (2,6,0);
  gol.set_values (2,7,10);
  gol.set_values (2,8,2);
  gol.set_values (2,9,3);

  gol.set_values (3,0,10);
  gol.set_values (3,1,0);
  gol.set_values (3,2,0);
  gol.set_values (3,3,2);
  gol.set_values (3,4,2);
  gol.set_values (3,5,10);
  gol.set_values (3,6,3);
  gol.set_values (3,7,10);
  gol.set_values (3,8,10);
  gol.set_values (3,9,1);

  gol.set_values (4,0,3);
  gol.set_values (4,1,2);
  gol.set_values (4,2,0);
  gol.set_values (4,3,2);
  gol.set_values (4,4,10);
  gol.set_values (4,5,2);
  gol.set_values (4,6,0);
  gol.set_values (4,7,10);
  gol.set_values (4,8,2);
  gol.set_values (4,9,3);

    gol.set_values (5,0,2);
  gol.set_values (5,1,0);
  gol.set_values (5,2,3);
  gol.set_values (5,3,0);
  gol.set_values (5,4,3);
  gol.set_values (5,5,3);
  gol.set_values (5,6,0);
  gol.set_values (5,7,10);
  gol.set_values (5,8,1);
  gol.set_values (5,9,3);

  gol.set_values (6,0,3);
  gol.set_values (6,1,2);
  gol.set_values (6,2,10);
  gol.set_values (6,3,2);
  gol.set_values (6,4,3);
  gol.set_values (6,5,3);
  gol.set_values (6,6,0);
  gol.set_values (6,7,10);
  gol.set_values (6,8,2);
  gol.set_values (6,9,3);

  gol.set_values (7,0,3);
  gol.set_values (7,1,2);
  gol.set_values (7,2,10);
  gol.set_values (7,3,2);
  gol.set_values (7,4,1);
  gol.set_values (7,5,3);
  gol.set_values (7,6,0);
  gol.set_values (7,7,10);
  gol.set_values (7,8,2);
  gol.set_values (7,9,3);

  gol.set_values (8,0,0);
  gol.set_values (8,1,0);
  gol.set_values (8,2,3);
  gol.set_values (8,3,1);
  gol.set_values (8,4,2);
  gol.set_values (8,5,10);
  gol.set_values (8,6,0);
  gol.set_values (8,7,1);
  gol.set_values (8,8,2);
  gol.set_values (8,9,10);

cout<<endl;
  gol.print();

  gol.calcular_ganadores();
   gol.print_aciertos();
  //
  cout<<endl;
  premios=gol.calcular_precio();
  gol.calcular_reparticion(premios);


  return 0;
}
