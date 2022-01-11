#include <bits/stdc++.h>

using namespace std;

int main(){
    string text;
    list<char> res;
    list<char>::iterator it;

    while(getline(cin, text)){
        res.clear();
        it = res.begin();

        for (auto c : text) {
            if (c == '[') it = res.begin();
            else if (c == ']') it = res.end();
            else res.insert(it, c);
        }

        for(it = res.begin(); it != res.end(); ++it) cout << *it;
        
        cout << endl;
    }

    return 0;
}
