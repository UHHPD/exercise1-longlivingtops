#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
  int zahl_1;
  int zahl_2;
  ifstream fin("datensumme.txt");

  vector<int> v_sum;
  for (int x=0; x<234; ++x) {
      fin>> zahl_1;
      v_sum.push_back(zahl_1 );
  }

int sum=0;
for (int i: v_sum)
{
    sum=sum+i;
}

double mean = sum*1.0/v_sum.size();
cout /* << "Mean=" */<< mean << endl;

  fin.close();


  //Variance
  double var = 0;
  for (int i: v_sum)
{
    var += pow((v_sum[i] - mean),2);
}
    var = var/v_sum.size();
    cout /* << "Variance=" */ << var << endl;
//Standarddeviation
double stdv;
stdv = sqrt(var);
cout /* << "Std=" */ << stdv <<endl;

}


