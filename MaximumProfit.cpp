#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
 
  int64_t n;
  cin>>n;


  int64_t min_wk = 10000000000;
  int64_t max_wk = -10000000000;
  for(int i=0;i<n;i++){
    int64_t r;
    cin>>r;


    max_wk = max(max_wk,r-min_wk);
    min_wk = min(r,min_wk);
  }

  cout<<max_wk<<endl;

	return 0;
}