#include <bits/stdc++.h>

using namespace std;

int main() {
	int test, n, m, resp, temp, k;
	
	cin >> test;
	
	for(int i = 0; i < test; ++i){
		cin >> n >> m;
		resp = 1;
	
		// Vector que guardará todos los elementos de la cola
		vector<int> hight;
		// Cola para la simulación
		queue<pair<int, int>> pq;
		
		for(int j = 0; j < n; ++j){
			cin >> temp;
			
			hight.push_back(temp);
			
			// Solo será "1" en el "mi tarea"
			pq.push({temp, j == m});
			// cout << pq.top().first << " " << pq.top().second << endl;
		}
		
		// Se ordena de menor a mayor
		// k inicia en el mayor
		k = hight.size() - 1;
		
		sort(hight.begin(), hight.end());
		
		while(!pq.empty()){
		
			// Si el elemento en frente es el que tiene más alta prioridad
			if(pq.front().first == hight[k]){
			
				// Y es mi trabajo
				if(pq.front().second == 1){
					cout << resp << endl;
					break;
				}
				// Si no es mi trabajo
				else{
					// Se imprime
					// Se quita de la cola
					// Y se avanza en el vector hacia el elemento de menor prioridad
					resp++;
					pq.pop();
					--k;
				}
			}
			// Si no, se coloca al final
			else{
				pq.push(pq.front());
				pq.pop();
			}
		}
	}
	
	return 0;
}

/*
1
2
5
*/




