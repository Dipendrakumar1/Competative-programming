#include <iostream>
using namespace std;
bool check(int a,int b)
{
    
	   
	        for(int i=1;i<b;)
	        {
	           
	            if(b==a)
	            {
	                return true;
	       
	            }
	            else
	            {
	                a=a*2; 
	            }
                i++;
	        }
	  return false;
}
bool check1(int a,int b)
{
   
	    
	   
	        for(int i=1;i<a;)
	        {
	            if(b==a)
	            {
	                return true;
	            }
	            else
	            b=b*2;
	            i++;
	        }
	  
return false;
}


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    if(a==b)
	    cout<<"YES"<<endl;
	   else if(a<b)
	    {
	        if(check(a,b)==1)
	        cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;
	    }
	    else if(a>b)
	    {
            //cout<<check1(a,b)<<endl;
	      if(check1(a,b)==1)
	        cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;   
	    }
	   
	}
	return 0;
}
