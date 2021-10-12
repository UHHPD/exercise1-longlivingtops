#include<iostream>
#include<fstream>

int main() {
  std::ifstream fin("daten.txt");
  std::ofstream fout("datensumme.txt"); 
  int a,b;
  for(int i = 0 ; i < 234 ; ++i) {
      fin >> a >> b;
      int sum = a + b;
      std::cout << a << " + " << b << " = " << sum  << std::endl;
      fout << sum << std::endl;
    }
  fout.close();
  fin.close();
}