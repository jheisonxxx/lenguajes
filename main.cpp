#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <time.h>
using namespace std;

class Quina{
 public:

    int fila_dinamica;
    int columna_dinamica;

    int * jugadores;
    int * sorteados;
    int ** matr;
    int aciertos;
    Quina(){

    jugadores=new int[20];

    for(int i = 0; i<20;i++){
        jugadores[i] = 0;
    }
    sorteados=new int[5];
    sorteados[0]=8;
    sorteados[1]=25;
    sorteados[2]=36;
    sorteados[3]=37;
    sorteados[4]=60;

    matr = new int *[20];
        for(int i = 0; i<20;i++){
          matr[i] = new int[20];
        }
        for(int i=0;i<20;i++){
            for(int j = 0; j<20;j++){
                matr[i][j]=(i*3+j-2)%80;
            }
        }
    }



    void set_values (int x, int y, int valor) {
        matr[x][y]=valor;
    }
    void print(){

    for(int i=0;i<20;i++){
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

        for(int i=0;i<20;i++){
            cout<<i<<" "<<jugadores[i]<<endl;

        }
    }


    int buscar(int * vec,int num){
        for(int i=0;i<20;i++){
            if(vec[i]==num){
                return 1;
            }else{
                return 0;
            }
        }
    }

void calcular_ganadores(){

  for(int i=0;i<20;i++){
                for(int k=0;k<7;k++){
                 //cout<<matr[j][i]<<"=="<<sorteados[k]<<endl;
                 for(int j = 0; j<7;j++){
                    cout<<matr[i][j]<<"=="<<sorteados[k]<<endl;
                    if(matr[i][j]==sorteados[k]){
                        jugadores[i]++;
                    }
                 }
                 int pot;
                    //cin>>pot;
                k++;
                }
            }
   }
};

//Clase Lotogol

class Lotogol{

jugadores=new int[20];

    for(int i = 0; i<20;i++){
        jugadores[i] = 0;
    }
    sorteados=new int[5];
    sorteados[0]=8;
    sorteados[1]=25;
    sorteados[2]=36;
    sorteados[3]=37;
    sorteados[4]=60;

    matr = new int *[20];
        for(int i = 0; i<20;i++){
          matr[i] = new int[20];
        }
        for(int i=0;i<20;i++){
            for(int j = 0; j<20;j++){
                matr[i][j]=(i*3+j-2)%80;
            }
        }
    }



    void set_values (int x, int y, int valor) {
        matr[x][y]=valor;
    }
    void print(){

    for(int i=0;i<20;i++){
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

        for(int i=0;i<20;i++){
            cout<<i<<" "<<jugadores[i]<<endl;

        }
    }


    int buscar(int * vec,int num){
        for(int i=0;i<20;i++){
            if(vec[i]==num){
                return 1;
            }else{
                return 0;
            }
        }
    }

void calcular_ganadores(){

  for(int i=0;i<20;i++){
                for(int k=0;k<7;k++){
                 //cout<<matr[j][i]<<"=="<<sorteados[k]<<endl;
                 for(int j = 0; j<7;j++){
                    cout<<matr[i][j]<<"=="<<sorteados[k]<<endl;
                    if(matr[i][j]==sorteados[k]){
                        jugadores[i]++;
                    }
                 }
                 int pot;
                    //cin>>pot;
                k++;
                }
            }
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

  cout<<endl;
  lot.calcular_ganadores();
  lot.print();
  lot.print_aciertos();

  return 0;
}
