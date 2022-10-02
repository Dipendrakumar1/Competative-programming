#include<iostream>
using namespace std;
int main()
{
   int test;
   cin>>test;
   for(int i=0;i<test; i++){
       int A,B,X,Y;
       cin>>A>>B>>X>>Y;
       if(A*B > X*Y)
       {
           cout<<"No"<<endl;
       }
       else
       cout<<"Yes"<<endl;
      
   }
   return 0;

}