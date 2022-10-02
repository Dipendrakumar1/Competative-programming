#include<iostream>
using namespace std;
int main()
{
   int test;
   cin>>test;
   for(int i=0;i<test; i++){
       int N;
       cin>>N;
       int pages;
       pages=N*1000;
       int notebooks;
       notebooks=pages/100;
       cout<<notebooks<<endl;
   }
   return 0;

}