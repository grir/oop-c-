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

// Paprasta funkcija su rodyklėmis 
void sumaIrSandauga(const int a, const int b, const int c, int* const suma, int* const sandauga){
    *suma = a+b+c;
    *sandauga = a*b*c;
}

// Paprasta funkcija su nuorodomis/sinonimais 
void sumaIrSandauga(const int a, const int b, const int c, int& suma, int& sandauga){
    suma = a+b+c;
    sandauga = a*b*c;
}

int main(){
    int a,b,c;
    int san, sum;
    std::cin >> a >> b >> c;
    std::cout << "suma(" << a << "," << b << "," << c << ")="<<suma(a,b,c) << std::endl; 
    std::cout << "didziausioIrMaziausioSandauga(" << a << "," << b << "," << c << ")="<<didziausioIrMaziausioSandauga(a,b,c) << std::endl; 
    std::cout << "didziausioIrMaziausioSandauga(" << a << "," << b << ")="<<didziausioIrMaziausioSandauga(a,b) << std::endl; 
    sumaIrSandauga(a,b,c,&sum, &san);
    std::cout << "Kviečiame sumaIrSandauga(a,b,c,&san, &sum), gavome san=" << san << ", sum=" << sum << std::endl; 
    
    return 0;
    
}
