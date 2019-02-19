#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, resp = 0;
    string s;
    map<string, int> mapa;

    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> s;
        mapa[s]++;
    }

    for(auto it = mapa.begin(); it != mapa.end(); ++it){
        if((*it).first == "Tetrahedron"){
            resp += (*it).second * 4;
        }
        else if((*it).first == "Cube"){
            resp += (*it).second * 6;
        }
        else if((*it).first == "Octahedron"){
            resp += (*it).second * 8;
        }
        else if((*it).first == "Dodecahedron"){
            resp += (*it).second * 12;
        }
        else {
            resp += (*it).second * 20;
        }
    }

    cout << resp << endl;

    return 0;
}