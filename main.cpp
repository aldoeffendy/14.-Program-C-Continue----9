#include <iostream>

using namespace std;

int main(){
	
	
	for ( int i = 0; i <= 10; i++){
		
		if(i == 8){
			continue;
			//break;
		}
		cout << i << endl;
	}
	
	cout << "KELAR" << endl;
	
	cin.get();
	return 0;
}
