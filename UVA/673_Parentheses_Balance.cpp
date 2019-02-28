#include <iostream>
#include <stack>
#include <string>

using namespace std;

string solve(string s){
    stack<char> pila;

    for(int i = 0; i < s.size(); ++i){
        if(s[i] == '(' || s[i] == '['){
            pila.push(s[i]);
        } 
        else {
            if(pila.empty()) return "No";
            if((s[i] == ')' && pila.top() == '(') || (s[i] == ']' && pila.top() == '[')){
                pila.pop();
            }
            else return "No";
        }
    }

    if(pila.empty()) return "Yes";
    else return "No";
}

int main(){
    int cases;
    string s;

    cin >> cases;
    getline(cin, s);

    for(int i = 0; i < cases; ++i){
        getline(cin, s);

        cout << solve(s) << endl;
    }

    return 0;
}