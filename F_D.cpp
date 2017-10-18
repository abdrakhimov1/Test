#include <iostream>

int main(){

	int n,k;

	std::cin >> n >> k;

	int t = -1;
	int tmp;
	for(int i = 0; i < n; i++){
		
		std::cin >> tmp ;

		if( tmp == k){
				
			t = i;
			std::cout << t+1 << "\n";
			break;
		}
	}

	if( t== -1) std::cout << t << "\n";
	return 0;
}
