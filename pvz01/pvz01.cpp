#include <iostream>

// Kartojame C ir pereiname prie C++

// Paprasta funkcija. 
int suma(const int a, const int b, const int c){
    return a+b+c;
}

// Dar viena paprasta funkcija. Turime numatytuousius parametrus.
int didziausioIrMaziausioSandauga(const int a=0, const int b=0, const int c=0){
  int mx = a;
  int mn = a;
  if (b > mx) mx = b;
  if (b < mn) mn = b;
  if (c > mx) mx = c;
  if (c < mn) mn = c;
  return mx * mn;
}
