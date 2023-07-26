#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    int teams, UNI=2, ans=0;
 
    cin >> teams;
 
    int home[teams], guest[teams];
 
    for (int i=0; i<teams; i++) {
        cin >> home[i] >> guest[i];
    }
 
    for (int i=0; i<teams; i++) {
        for (int j=0; j<teams; j++) {
            if(home[i] == guest[j]) {
                ans++;
            }
        }
    }
 
    cout << ans << endl;
 
    return 0;
}
