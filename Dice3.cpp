#include <bits/stdc++.h>
using namespace std;

class Dice{

public:
    void SetDice(int s1,int s2,int s3,int s4,int s5,int s6)
    {
        side.at(0)=s1; //top
        side.at(1)=s2; //front
        side.at(2)=s3; //right
        side.at(3)=s4; //left
        side.at(4)=s5; //back
        side.at(5)=s6; //bottoms
    }

    int GetTop(void){
        return(side.at(0));
    }

    int GetRight(void){
        return(side.at(2));
    }

    int SetPos(int top, int front){
        //search top  and rotation
        vector<int> rot1={0,4,5,1};
        int top_rot1=0;
        for(int i=0;i<rot1.size();i++){
          if(side.at(rot1.at(i))==top)
            top_rot1=i;
        }

        for(int i=0;i<top_rot1;i++){
          Rotate('S');
        }

        vector<int> rot2={0,2,5,3};
        int top_rot2=0;
        for(int i=0;i<rot2.size();i++){
          if(side.at(rot2.at(i))==top)
            top_rot2=i;
        }

        for(int i=0;i<top_rot2;i++){
          Rotate('W');
        }

        vector<int> rot_f = {1,3,4,2};
        int front_rot=0;
        for(int i=0;i<rot_f.size();i++){
          if(side.at(rot_f.at(i))==front)
            front_rot=i;
        }

        for(int i=0;i<front_rot;i++){
          Rotate('H');
        }

        return 0;
        
    }

    void Rotate(char direction){
        if(direction=='N'){
            int wk=side.at(0);
            side.at(0)=side.at(1);
            side.at(1)=side.at(5);
            side.at(5)=side.at(4);
            side.at(4)=wk;
        }
        else if(direction=='S'){
            int wk=side.at(0);
            side.at(0)=side.at(4);
            side.at(4)=side.at(5);
            side.at(5)=side.at(1);
            side.at(1)=wk;
        }
        else if(direction=='W'){
            int wk=side.at(0);
            side.at(0)=side.at(2);
            side.at(2)=side.at(5);
            side.at(5)=side.at(3);
            side.at(3)=wk;
        }
        else if(direction=='E'){
            int wk=side.at(0);
            side.at(0)=side.at(3);
            side.at(3)=side.at(5);
            side.at(5)=side.at(2);
            side.at(2)=wk;
        }
        else if(direction=='H'){
            int wk=side.at(2);
            side.at(2)=side.at(1);
            side.at(1)=side.at(3);
            side.at(3)=side.at(4);
            side.at(4)=wk;
        }
    }

    bool Comparison_dice(Dice A, Dice B){
      bool comp_result=false;
      for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
          bool flg0 = B.side.at(0)==A.side.at(0);
          bool flg1 = B.side.at(1)==A.side.at(1);
          bool flg2 = B.side.at(2)==A.side.at(2);
          bool flg3 = B.side.at(3)==A.side.at(3);
          bool flg4 = B.side.at(4)==A.side.at(4);
          bool flg5 = B.side.at(5)==A.side.at(5);
          if(flg0&&flg1&&flg2&&flg3&&flg4&&flg5)
            comp_result=true;
          B.Rotate('W');
        }
        B.Rotate('S');
      }

      B.Rotate('W');
      for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
          bool flg0 = B.side.at(0)==A.side.at(0);
          bool flg1 = B.side.at(1)==A.side.at(1);
          bool flg2 = B.side.at(2)==A.side.at(2);
          bool flg3 = B.side.at(3)==A.side.at(3);
          bool flg4 = B.side.at(4)==A.side.at(4);
          bool flg5 = B.side.at(5)==A.side.at(5);
          if(flg0&&flg1&&flg2&&flg3&&flg4&&flg5)
            comp_result=true;
          B.Rotate('W');
        }
        B.Rotate('S');
      }

       B.Rotate('E');
       B.Rotate('E');
      for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
          bool flg0 = B.side.at(0)==A.side.at(0);
          bool flg1 = B.side.at(1)==A.side.at(1);
          bool flg2 = B.side.at(2)==A.side.at(2);
          bool flg3 = B.side.at(3)==A.side.at(3);
          bool flg4 = B.side.at(4)==A.side.at(4);
          bool flg5 = B.side.at(5)==A.side.at(5);
          if(flg0&&flg1&&flg2&&flg3&&flg4&&flg5)
            comp_result=true;
          B.Rotate('W');
        }
        B.Rotate('S');
      }     




      return comp_result;
    }


    private:
          vector<int> side = vector<int> (6); //この定義にしないと「型指定子が必要です」エラーが出る。
};

int main() {
    int s1,s2,s3,s4,s5,s6;
    cin>>s1>>s2>>s3>>s4>>s5>>s6;
    Dice diceA;
    diceA.SetDice(s1,s2,s3,s4,s5,s6);

    cin>>s1>>s2>>s3>>s4>>s5>>s6;
    Dice diceB;
    diceB.SetDice(s1,s2,s3,s4,s5,s6);

    bool comp = diceB.Comparison_dice(diceA,diceB);
    if(comp)
      cout<<"Yes"<<endl;
    else
      cout<<"No"<<endl;

    return 0;
}