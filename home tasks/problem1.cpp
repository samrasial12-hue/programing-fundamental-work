#include <iostream>
using namespace std;

main(){
  int n; cin>> n;
  int numbers[n];
  int sum=0;
  for (int i=0;i<n;i++){
    cin>> numbers[i];
  sum += numbers[i];
  }
cout<<"Sum: "<<sum;
}