#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
using namespace std;


vector<double> variances(vector<double> vec){

  double sum=0;
  for (double i: vec)
  {
      sum=sum+i;
  }

  double mean = sum*1.0/vec.size();
  //cout /* << "Mean=" */<< mean << endl;
  double var = 0;
    for (double i: vec)
  {
      var += pow((i - mean),2);
      //cout<<i<<endl;
  }
      var = var/vec.size();

    vector<double> res;
    res.push_back(mean);
    res.push_back(var);
    return res;
  //cout /* << "Variance=" */ << var << endl;
  }


int main(){
  int zahl_1;
  ifstream fin("datensumme.txt");

  vector<int> v_sum;
  for (int x=0; x<234; ++x) {
      fin>> zahl_1;
      v_sum.push_back(zahl_1 );
  }
  fin.close();


  //Variance
ofstream fout_mw("mittelwerte.txt");

ofstream fout_var("varianzen.txt");


vector<double> means;
vector<double> vars;

for (int i=0; i<234/9;++i){
  vector<double> v2=vector<double>(v_sum.begin()+ i*9,v_sum.begin()+9*(i+1));
  vector<double> res=variances(v2);

  fout_mw<< res[0]<<endl;
  fout_var<< res[1]<<endl;
  means.push_back(res[0]);
  vars.push_back(res[1]);

}

fout_mw.close();

fout_var.close();

double meanmean=variances(means).at(0);
double varmean=variances(vars).at(0);

cout<<meanmean<<endl;
cout<<varmean<<endl;

}

