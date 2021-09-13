#include<iostream>		// Input/Output
#include<cmath>			// sqrt() function
using namespace std;	


int main(){				
	ios::sync_with_stdio(false);
	cin.tie(0); 	

	int N;		
	bool cond;
	int enough;		// "enough = sqrt(i)" that enough number to control if this number is prime

	cin >> N;
	for(int i=2;i<=N;i++){
		cond=false; 
		enough=sqrt(i);
		for(int j=2;j<=enough;j++){
			if(i%j==0){
				cond=true;	
				break;
			}
		}
		if(!cond){
			cout << i << "\n";
		}
	}
} 
