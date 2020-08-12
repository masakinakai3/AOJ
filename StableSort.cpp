#include <bits/stdc++.h>
using namespace std;
 
// Bubble sort
 void BubbleSort(vector<string> &a, int n){
  for(int j=n;j>=1;j--){
    for(int i=1;i<j;i++){
      if(a.at(i-1).at(1)>a.at(i).at(1)){
        string wk = a.at(i-1);
        a.at(i-1)=a.at(i);
        a.at(i)=wk;
      }
    }
  }
 }

// Selection sort
void SelectionSort(vector<string> &a, int n){
  for(int i=0;i<n;i++){
    int min_j=i;
    for(int j=i;j<n;j++){
      if(a.at(j).at(1)<a.at(min_j).at(1))
        min_j=j;
    }
    if(a.at(i).at(1)>a.at(min_j).at(1)){
      string wk=a.at(i);
      a.at(i)=a.at(min_j);
      a.at(min_j)=wk;
    }
  }
}

// display vector 
void DisplayVector(vector<string> &a, int n){
  for(int i=0;i<n;i++){
    if(i<n-1)
      cout<<a.at(i)<<' ';
    else
      cout<<a.at(i)<<endl;
  }
}

bool isStable(vector<string> &in, vector<string> &out, int n){
  bool flg=true;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      for(int a=0;a<n;a++){
        for(int b=a+1;b<n;b++){
          if(in.at(i).at(1)==in.at(j).at(1) && in.at(i)==out.at(b) && in.at(j)==out.at(a))
            flg=false;
        }
      }
    }
  }
  return flg;
}


int main() {
 

  // input vector size
  int n;
  cin>>n;

  // input vector data
  vector<string> a(n);
  for(int i=0;i<n;i++){
    cin>>a.at(i);
  }
  vector<string> a1=a;
  vector<string> a2=a1;

  // bubble sort
  BubbleSort(a1,n);
  // output sorted vector
  DisplayVector(a1,n);
  // check sort stable?
  if(isStable(a,a1,n))
    cout<<"Stable"<<endl;
  else
    cout<<"Not stable"<<endl;

  // selection sort
  SelectionSort(a2,n);
  // output sorted vector
  DisplayVector(a2,n);
  // check sort stable?
  if(isStable(a,a2,n))
    cout<<"Stable"<<endl;
  else
    cout<<"Not stable"<<endl;

	return 0;
}