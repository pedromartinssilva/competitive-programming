#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    string wrd;
    string out;
    
    cin >> n;
    
    for (int i=0; i<n; i++)
    {
        cin >> wrd;
        out = wrd;
        
        if (wrd.size() > 10)
        {
            string cnt = to_string(wrd.size() - 2);
            out = wrd[0] + cnt + wrd[wrd.size() - 1];
        }
        
        cout << out << '\n';
    }
 
    return 0;
}
