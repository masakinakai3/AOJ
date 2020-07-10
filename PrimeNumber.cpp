#include <bits/stdc++.h>
using namespace std;

bool is_prime(int64_t n){

  bool flg=true;

  for(int64_t i=2;i*i<=n;i++){
    if(n%i==0){
      flg=false;
      break;
    }
  }

  return flg;
}


int main() {

  int64_t n;
  cin>>n;

  int64_t cnt=0;
  for(int i=0;i<n;i++){
    int64_t wk;
    cin>>wk;

    if(is_prime(wk))
      cnt++;
  }

  cout<<cnt<<endl;

	return 0;
}