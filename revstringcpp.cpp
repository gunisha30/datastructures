#include <bits/stdc++.h>
using namespace std;

 void solve(string &str)
   {
       stack <char> stk;
       char c;
       for (int i=0;i<str.length();i++)
       stk.push(str[i]);
       
       vector <char> temp;
       while(stk.empty()!=1)
       {
           if(stk.top()!='.')
           {    
               c=stk.top();
               stk.pop();
               temp.push_back(c);
           }
           else
           {
              reverse(temp.begin(),temp.end());
              for (int i=0;i<temp.size();i++)
              cout<<temp[i];
              cout<<stk.top();
              stk.pop();
              temp.clear(); 
           }
        }
   
      reverse(temp.begin(),temp.end());
      for (int i=0;i<temp.size();i++)
      cout<<temp[i];
   }

int main()
{
    int t;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>str;
        solve(str);
        cout<<endl;
    }
    
    return 0;
}
