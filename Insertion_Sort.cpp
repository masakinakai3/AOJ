#include <bits/stdc++.h>
using namespace std;
 

void print_vec_data(vector<int> in){

    for(int i=0;i<in.size();i++){
    if(i<in.size()-1)
      cout<<in.at(i)<<' ';
    else
      cout<<in.at(i)<<endl;
  }
}

vector<int> InsersionSort(vector<int> A ,int N){

  print_vec_data(A);

  for(int i=1;i<N;i++){
    int v=A.at(i);
    int j=i-1;
    while(j>=0 && A.at(j)>v){
        j--;
    }

    A.erase(A.begin()+i);
    A.insert(A.begin()+j+1,v);

    print_vec_data(A);
  }

  return A;
}



int main() {

  int n;
  cin>>n;

  vector<int> in(n);
  for(int i=0;i<n;i++){
    cin>>in.at(i);
  }

  vector<int> out(n);
  out = InsersionSort(in,n);

  return 0;
}