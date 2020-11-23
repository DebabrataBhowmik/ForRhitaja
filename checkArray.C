#include<iostream>
#include<fstream>

using namespace std;

  double* makeArray(int n){
    static double array[5];
    for(int i=0;i<n;i++){
      array[i]=5.0;
    }
    return array;
  }

void checkArray(){
  //int main(){
  
  double *cpArray;

  cpArray = makeArray(5);
  cout<<cpArray[1]<<endl;

  //return 0;

}
