#include <bits/stdc++.h>
using namespace std;
int main()
{
    //     string s="12:45:54PM";
    //     // // string to integer
    //     // string st="12:01:30";
    //     // cout<<st.substr(2,6);

    //     int hour=stoi(s);
    //     string ss;
    //    if(s.find("PM")!=string::npos && (hour<12 || hour==12) )
    //    {
    //      cout<<"HII";

    //        if(hour==12)
    //        {

    //            ss=to_string(hour);
    //        }
    //        else {
    //        hour+=12;
    //       ss=to_string(hour);
    //        }

    //    }
    //    else {
    //        if(hour<12)
    //        {
    //            hour+=0;
    //            ss=to_string(hour);
    //            ss="0"+ss;
    //           // s=ss+s.substr(1,6);
    //           // return s;
    //        }
    //        else {
    //        hour=00;
    //       ss="0"+to_string(hour);
    //        }

    //    }
    //    s=ss+s.substr(2,6);
    //   cout<<s;

    //     // int hour=stoi(st);

    //     // cout<<hour;
    //     // // string cancatenation
    //     // st=st+"day";
    //     // cout<<
    //     // if(s.find('z')==string::npos)
    //     // {
    //     //     cout<<"Not Present";
    //     // }
    //     // st.erase(2);
    //     // int i=1;
    // // while(s.empty()!=true && i<s.size()){
    // //     if(s[i]==s[i+1]){
    // //         s.erase(i,2);
    // //         i=0;
    // //     }else{
    // //         i++;
    // //     }
    // // }
    // // int i;
    // // int count=1;
    // //   for(i=0;i<s.size();i++)
    // //   {
    // //       if(s[i]>='A' && s[i]<='Z' )
    // //       {
    // //         count++;
    // //       }
    // //   }
    // //   cout<<count;
    // //    char ch=toupper('a');
    // //     cout<<ch;
 
    vector<string> st={"heater","reheat","cold","docl"};
    cout<<(st.at(0)).sort();
    // vector<int> grades = {73,67,38,33};
    // int n = grades.size();
    // cout << n << endl;
    // vector<int> grd;
    // int i, temp, temp1;
    // for (i = 0; i < n; i++)
    // {
    //     if (grades.at(i) > 90 && grades.at(i) < 100)
    //     {
    //         temp=grades.at(i)%10;
    //         temp = grades.at(i)-temp+5;
    //         temp1 = temp;
    //         temp = temp - grades.at(i);
    //         if (temp <= 3)
    //         {
    //             grd.push_back(temp1);
    //         }
    //         grd.push_back(grades.at(i));
    //     }
    //     else if (grades.at(i) > 80 && grades.at(i) < 90)
    //     {
    //         temp=grades.at(i)%10;
    //         temp = grades.at(i)-temp+5;
    //         temp1 = temp;
    //         temp = temp - grades.at(i);
    //         if (temp <= 3)
    //         {
    //             grd.push_back(temp1);
    //         }
    //         grd.push_back(grades.at(i));
    //     }
    //     else if (grades.at(i) > 70 && grades.at(i) < 80)
    //     {
    //         temp=grades.at(i)%10;
    //         temp = grades.at(i)-temp+5;
    //         temp1 = temp;
    //         temp = temp - grades.at(i);
    //         if (temp <= 3)
    //         {
    //             grd.push_back(temp1);
    //         }
    //         grd.push_back(grades.at(i));
    //     }
    //     else if (grades.at(i) > 60 && grades.at(i) < 70)
    //     {
    //        temp=grades.at(i)%10;
    //         temp = grades.at(i)-temp+5;
    //         temp1 = temp;
    //         temp = temp - grades.at(i);
    //         if (temp <= 3)
    //         {
    //             grd.push_back(temp1);
    //         }
    //         grd.push_back(grades.at(i));
    //     }
    //     else if (grades.at(i) > 50 && grades.at(i) < 60)
    //     {
    //         temp=grades.at(i)%10;
    //         temp = grades.at(i)-temp+5;
    //         temp1 = temp;
    //         temp = temp - grades.at(i);
    //         if (temp <= 3)
    //         {
    //             grd.push_back(temp1);
    //         }
    //         grd.push_back(grades.at(i));
    //     }
    //     else if (grades.at(i) > 40 && grades.at(i) < 50)
    //     {
    //         temp=grades.at(i)%10;
    //         temp = grades.at(i)-temp+5;
    //         temp1 = temp;
    //         temp = temp - grades.at(i);
    //         if (temp <= 3)
    //         {
    //             grd.push_back(temp1);
    //         }
    //         grd.push_back(grades.at(i));
    //     }
    //     else if (grades.at(i) < 40)
    //     {
    //         grd.push_back(grades.at(i));
    //     }
    // }
    // for (i = 0; i < n; i++)
    //     cout << grd.at(i) << " ";
    cout << endl;
    return 0;
}