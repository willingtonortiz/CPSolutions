#include <bits/stdc++.h>
using namespace std;

int main() {
	string name;
	cin>>name;
	set<char> letra;
	for(int i=0;i<name.size();i++)
		letra.insert(name[i]);
	if(letra.size()%2==0)
	cout<<"CHAT WITH HER!"<<endl;
	else
	cout<<"IGNORE HIM!"<<endl;
	return 0;
}