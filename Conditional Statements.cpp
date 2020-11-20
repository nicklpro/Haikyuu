//HackerRank Conditional Statements
#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
        
    
    if(n==5)
    {
        cout<<"five";
    }
    else if(n==8)
    {
        cout<<"eight";
    }
    else if(n>9)
    {
        cout<<"Greater than 9";    
    }
   
    return 0;
}

