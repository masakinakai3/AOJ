#include <bits/stdc++.h>
using namespace std;

class Dice{

public:
    void SetDice(int s1,int s2,int s3,int s4,int s5,int s6)
    {
        side1=s1;
        side2=s2;
        side3=s3;
        side4=s4;
        side5=s5;
        side6=s6;
    }

    int GetTop(void){
        return(side1);
    }

    void Rotate(char direction){
        if(direction=='N'){
            int wk=side1;
            side1=side2;
            side2=side6;
            side6=side5;
            side5=wk;
        }
        else if(direction=='S'){
            int wk=side1;
            side1=side5;
            side5=side6;
            side6=side2;
            side2=wk;
        }
        else if(direction=='W'){
            int wk=side1;
            side1=side3;
            side3=side6;
            side6=side4;
            side4=wk;
        }
        else if(direction=='E'){
            int wk=side1;
            side1=side4;
            side4=side6;
            side6=side3;
            side3=wk;
        }
    }

    private:
        int side1;
        int side2;
        int side3;
        int side4;
        int side5;
        int side6;
};

int main() {
    int s1,s2,s3,s4,s5,s6;
    cin>>s1>>s2>>s3>>s4>>s5>>s6;

    Dice dice;
    dice.SetDice(s1,s2,s3,s4,s5,s6);

    string s;
    cin>>s;

    for(int i=0;i<s.size();i++){
        dice.Rotate(s.at(i));
    }


    cout<<dice.GetTop()<<endl;

    return 0;
}