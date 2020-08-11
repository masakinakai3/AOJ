#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
 
   /* Input vector size */
  int n;
  cin>>n;

  /* Input vector data */
  vector<int> a(n);
  for(int i=0;i<n;i++){
    cin>>a.at(i);
  }

  /* Selection Sort */
  int cnt=0;
  for(int i=0;i<n;i++){
    int min_j=i;
    for(int j=i;j<n;j++){
      if(a.at(j)<a.at(min_j))
        min_j=j;
    }
    if(a.at(i)>a.at(min_j)){
      int wk=a.at(i);
      a.at(i)=a.at(min_j);
      a.at(min_j)=wk;
      cnt++;
    }
  }

  /* Output Sorted vector data */
  for(int i=0;i<n;i++){
    if(i<n-1)
      cout<<a.at(i)<<' ';
    else
      cout<<a.at(i)<<endl;
  }
  /* Output exchange count */
  cout<<cnt<<endl;

  return 0;
}