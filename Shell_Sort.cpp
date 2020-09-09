#include <bits/stdc++.h>
using namespace std;

int cnt=0;

void print_vec_data(vector<int> &in){

    for(int i=0;i<in.size();i++){
      cout<<in.at(i)<<endl;
  }
}

void InsersionSort(vector<int> &A ,int N, int g){

  for(int i=g;i<N;i++){
    int v=A.at(i);
    int j=i-g;
    while(j>=0 && A.at(j)>v){
        A.at(j+g)=A.at(j);
        j=j-g;
        cnt++;
    }
    A.at(j+g)=v;
  }
}

void shellSort(vector<int> &A, int N){

    cnt=0;

    int h=1;
    vector<int> G;
    do{
        G.push_back(h);
        h=3*h+1;
    }while(h<N);


    int m= G.size();
    cout<<m<<endl;

    for(int i=m-1;i>=0;i--){
        if(i==0)
            cout<<G.at(i)<<endl;
        else
            cout<<G.at(i)<<' ';
    }
    for(int i=m-1;i>=0;i--){
        InsersionSort(A,N,G.at(i));
    }
    cout<<cnt<<endl;
}



int main() {

  int n;
  cin>>n;

  vector<int> in(n);
  for(int i=0;i<n;i++){
    cin>>in.at(i);
  }

  shellSort(in, n);

  for(int i=0;i<n;i++){
      cout<<in.at(i)<<endl;
  }

  return 0;
}
