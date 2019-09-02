#include "Player.h"
int main(){
	int n = 3;
	Player p[n];
	for (int i = 0; i < n; i++){
		p[i].accept();	
	}

	for(int i = 0; i < n; i ++){
		p[i].display();
	}
	
	// Sort array by name:
	playerSortName(p, n);

	cout << "\n\nThe sorted array by name is as follows:\n";
		
	for(int i = 0; i < n; i ++){
		p[i].display();
	}
	
}
