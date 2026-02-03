#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify source code above this line

void shuffle(int &a,int &b, int &c,int &d){
	int cash[] = {50,100,500,1000};
	bool check[] = {1,1,1,1};
	
	int i = 0;
	while(i < 4){
		int ran_num = rand()%4 ;
		if(check[ran_num]){
			if(i == 0){
				a = cash[ran_num];
			} else if(i == 1){
				b = cash[ran_num];
			} else if(i == 2){
				c = cash[ran_num];
			} else if(i == 3){
				d = cash[ran_num];
			}
		}
		check[ran_num] = 0;
		i++;

	}
}
