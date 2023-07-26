using namespace std;
 
int main()
{
    string username, characters;
    int len;
 
    cin >> username;
 
    len = username.length();
 
    for (int i=0; i<len; i++) {
        if (find(characters.begin(), characters.end(), username[i]) == characters.end()) {
            characters += username[i];
        }
    }
 
    if (characters.length()%2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
 
    return 0;
}
