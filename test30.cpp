#include <bits/stdc++.h>
using namespace std;



int main() {


  vector<int64_t> number;
  string swk;

  while(cin>>swk){

    if(swk=="+"){
      int64_t nwk1 = number.back();
      number.pop_back();
      int64_t nwk2 = number.back();
      number.pop_back();
      number.push_back(nwk2+nwk1);
    }
    else if(swk=="-"){
      int64_t nwk1 = number.back();
      number.pop_back();
      int64_t nwk2 = number.back();
      number.pop_back();
      number.push_back(nwk2-nwk1);
    }
    else if(swk=="*"){
      int64_t nwk1 = number.back();
      number.pop_back();
      int64_t nwk2 = number.back();
      number.pop_back();
      number.push_back(nwk2*nwk1);
    }
    else
      number.push_back(stoll(swk));
  }

  cout<<number.back()<<endl;

  return 0;
}