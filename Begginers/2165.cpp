#include <iostream>
#include <string>

using namespace std;

int main(){

		string linha;
		getline(cin,linha);

		if(linha.size() > 140) cout << "MUTE" << endl;
		else cout << "TWEET" << endl;

		return 0;

}
