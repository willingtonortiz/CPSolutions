#include <bits/stdc++.h>

using namespace std;


int main() {
	int cantCasas,
	cantTareas,
	casaTarea,
	casaActual = 1,
	tareaActual;
	long long tiempoTotal = 0;
	cin >> cantCasas >> cantTareas;
	
	for(int i = 0; i < cantTareas; i++){
		cin >> tareaActual;
		if(casaActual != tareaActual){
			if(casaActual < tareaActual){
				tiempoTotal += (tareaActual - casaActual);
			}
			else{
				tiempoTotal += (cantCasas - casaActual + tareaActual);
			}
			casaActual = tareaActual;
		}
	}
	cout << tiempoTotal;
}