#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, k, c=0, scr;
    
    cin >> n >> k;
    
    int scores[n];
    
    for (int i=0; i<n; i++)
    {
        cin >> scr;
        scores[i] = scr;
    }
    
    for (int i=0; i<n; i++)
    {
        if (scores[i] >= scores[k-1] && scores[i] > 0) c++;
        else break;
    }
    
    cout << c;

    return 0;
}
		
		
