#include <iostream>
using namespace std;
float mitad(float arc[100],int pinicial,int pfinal){
  
  return arc[(pinicial+pfinal)/2]; 
}
void ordenar1(float arc[100],int pinicial,int pfinal){
  int i=pinicial;
  int j=pfinal;
  float temp;
  float piv=mitad(arc,pinicial,pfinal);
  do{
  while(arc[i]<piv){
    i++;
  }
  while(arc[j]>piv){
    j--;
  }
  if(i<=j){
    temp=arc[i];
    arc[i]=arc[j];
    arc[j]=temp;
    i++;
    j--;
  }
  }while(i<=j);
  if(pinicial>j)
    ordenar1(arc,pinicial,j);
  if(i<pfinal)
   ordenar1(arc,i,pfinal);
}
