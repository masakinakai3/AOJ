#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
 

  // input vector size
  int n;
  cin>>n;

  // input vector data
  vector<int> a(n);
  for(int i=0;i<n;i++){
    cin>>a.at(i);
  }

  // bubble sort
  int cnt=0;
  for(int j=n;j>=1;j--){
    for(int i=1;i<j;i++){
      if(a.at(i-1)>a.at(i)){
        int wk = a.at(i-1);
        a.at(i-1)=a.at(i);
        a.at(i)=wk;
        cnt++;
      }
    }
  }

  // output sorted vector
  for(int i=0;i<n;i++){
    if(i<n-1)
      cout<<a.at(i)<<' ';
    else
      cout<<a.at(i)<<endl;
  }
  // output exchange count
  cout<<cnt<<endl;

	return 0;
}