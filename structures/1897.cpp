#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
#include <map>

using namespace std;

#define MAX 500000

int n,m;

map<int,int> dist;

void bfs(){

		queue<int> fila;

		fila.push(n);
		dist.clear();
		dist[n] = 1;


		while(1){

						int no = fila.front();fila.pop();		

						if(dist[m]) break;

						if(!dist[no * 2]){
										dist[no * 2] = dist[no] + 1;
										fila.push(no * 2);
						}	
						if(!dist[no * 3]){
										dist[no * 3] = dist[no] + 1;
										fila.push(no * 3);
						}	
						if(!dist[no / 2]){
										dist[no / 2] = dist[no] + 1;
										fila.push(no / 2);
						}	
						if(!dist[no / 3]){
										dist[no / 3] = dist[no] + 1;
										fila.push(no / 3);
						}
						if(!dist[no + 7]){
										dist[no + 7] = dist[no] + 1;
										fila.push(no + 7);
						}	
						if(!dist[no - 7]){
										dist[no -7] = dist[no] +1;
										fila.push(no - 7);
						}		
		}

}

int main(){
		
		cin >> n >> m;

		bfs();

		cout << dist[m] - 1 << endl;

		return 0;
}
