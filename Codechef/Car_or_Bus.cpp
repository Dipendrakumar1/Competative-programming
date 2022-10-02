#include<iostream>
using namespace std;
int main()
{
   int test;
   cin>>test;
   for(int i=0;i<test; i++){
       int X,Y;
       cin>>X>>Y;
       if(X>Y)
       {
           cout<<"CAR"<<endl;
       }
       else if(X<Y)
       {
           cout<<"BIKE"<<endl;
       }
       else
       cout<<"SAME"<<endl;
       
   }
   return 0;

}