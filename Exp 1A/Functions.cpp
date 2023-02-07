#include<bits/stdc++.h>
using namespace std;
using ll=long long;

float firstFn(float n){
  float ans=powf((float)3/2,n);
  return ans;
}
float secondFn(float n){
  return powf(n,3);
}
float thirdFn(float n){
  return powf(2,(float)log2(n));
}
double fourthFn(int n){
  int factorial=1;
  for (int a=1;a<=n;a++) {
		factorial=factorial*a;
	}
  return log2(factorial);
}
double fifthFn(float n){
  double x=powf(2,n);
  return powf(2,x);
}
float sixthFn(float n){
  return powf(n,(float)1/log2(n));
}
float seventhFn(float n){
  return log(log(n));
}
float ninthFn(float n){
   return (float)n*powf(2,n);
}
float tenthFn(float n){
  return powf(n,log(log(n)));
}
float twelthFn(float n){
  return powf(2,log(n));
}


int main()
{
  for(int n=1;n<=100;n++){
    //cout<<(float)twelthFn(n)<<" ";
  }
  
    return 0;
}