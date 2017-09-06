#include <iostream>
#include <stack>
#include <string>

using namespace std;

stack<char> pilha;

int main(){

			string palavra;

			while(cin >> palavra){
							for(int i = 0; i < palavra.length();++i){
											if(palavra[i] == '('){
															pilha.push(palavra[i]);				
											}else if(palavra[i] == ')'){

															if(pilha.empty()){
																			pilha.push(palavra[i]);
															}
															else{				
																			if(pilha.top() == '('){
																							pilha.pop();
																			}
															}
											}				
							}

							if(pilha.empty()) printf("correct\n");
							else printf("incorrect\n");

							while(!pilha.empty()) pilha.pop();
			}

			return 0;
}
