#include <iostream>
using namespace std;
#include <string> 


string f(string s)
{
    int n=s.length();
    int arr[n],top=-1;
    for(int i=0;i<n;i++)
    {
       if(s[i]=='{')
       {
       top++;
       arr[top]=1;
       }
       
       else if(s[i]=='(')
       {
         top++;
       arr[top]=2;  
       }
       
       else if(s[i]=='[')
       {
           top++;
       arr[top]=3;
       }
       
       else if(s[i]=='}')
       {
           if(arr[top]==1)
           top--;
           
           else
           {
               return("not balanced");
           }
       }
    
        else if(s[i]==')')
       {
           if(arr[top]==2)
           top--;
           
           else
           {
               return("not balanced");
           }
       }
    
        else if(s[i]==']')
       {
           if(arr[top]==3)
           top--;
           
           else
           {
               return("not balanced");
           }
       }
    }

    if(top==-1)
    return ("balanced");
    
    else
    return ("not balanced");
}

int main() {
	int t;
	cin>>t;
	string s,s1;
	while(t--)
	{
	    cin>>s;
	    s1=f(s);
	    cout<<s1<<endl;
	}
	return 0;
}
