// Bits++ 282A 10min
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    string in;
    int n, X=0;
    
    cin >> n;
    
    for (int i=0; i<n; i++)
    {
        cin >> in;
        if(in == "X++" || in == "++X") X++;
        else X--;
    }
    
    cout << X;
    
    return 0;
}
