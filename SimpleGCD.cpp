#include <bits/stdc++.h>
using namespace std;



int64_t simple_gcd(int64_t x, int64_t y){

  if(x<y)
    swap(x,y);
  
  while(y>0){
    int64_t r = x%y;
    x=y;
    y=r;
  }
  return x;
}

int main() {

    int64_t x,y;
    cin>>x>>y;

    cout<<simple_gcd(x,y)<<endl;

	return 0;
}