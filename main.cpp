#include <iostream>
#include <string.h>
#include "quircksort.h"
using namespace std;
float mitad(float arc[100],int pinicial,int pfinal);
void ordenar1(float arc[100],int pinicial,int pfinal);
int main() {
  int option,contador=0,option2,notas,aprobados=0,reprobados=0,suspensos=0;
    int i, j,pick,ordenar,busc;
    float notbus;
    float nota1[40],nota2[40],promedio[40];
    int idaux[25];
    float promedioAux[40];
    bool c=false;
    char *nombre[40];
    char *apellidos[70];
    char *correo[70];
    char email[70];
    char nombreAux[70];
    int id[25],cedula;
    string Usuario1,Clave1,materia;
    char Apellido[50];
  cout << "\t\t\t\t Materia a Registrar\t\t\t" << endl;
                                
                                cout << "\t\t\t\tNumero de Datos de Estudiantes\t\t\t" << endl;
                                cin >> notas;
                                
                                    for (i = 0; i < notas; i++) {
                                        id[i] = i;
                                        idaux[i]=i;
                                        cout << "\t\tNombre del Estudiante\t\t" <<i+1<< endl;
                                        cin >> nombreAux;
                                        cout << "\t\tApellido del Estudiante\t\t" <<i+1<< endl;
                                        cin >> Apellido;
                                        
                                        cout << "\t\tNota 1\t\t" << endl;
                                        cin >> nota1[i];
                                        cout << "\t\tNota 2\t\t" << endl;
                                        cin >> nota2[i];
                                        
                                        promedio[i] = (nota1[i] + nota2[i]) ;
                                        
                                        nombre[i] = (char*) malloc(strlen(nombreAux) + 1);
                                        strcpy(nombre[i], nombreAux);
                                        apellidos[i] = (char*)malloc(strlen(Apellido) + 1);
                                        strcpy(apellidos[i], Apellido);
                                        

                                }
                                cout << "id\tNombre\tApellido\t\t\t\tNota1\tNota2\tPromedio\t" << endl;
                                for ( i = 0;  i< notas; i++) {
                                  
                                    cout << id[i]<<"\t"<<nombre[i]<<"\t" << apellidos[i]<<"\t\t\t" << nota1[i]<<"\t\t" << nota2[i] << "\t\t" << promedio[i]<<"\t\t" << endl;
                                    
                                    }
                                    ordenar1(promedio, 0, i-1);
                                    cout<<endl;
                                    cout<<"Ordenamiento quircksort"<<endl;
                                    for(int i=0;i<notas;i++){
                                 cout<<"|"<<promedio[i];
                               }
}
  
