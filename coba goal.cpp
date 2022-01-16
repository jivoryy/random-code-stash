#include <iostream>
#include <string.h>
#include <cstdlib>
#include <time.h>
using namespace std;
int s;
int buatgol(int s){
	srand(time(NULL));
	int goal[s];
	for(int i=0;i<s;i++){
		goal[i]= rand()%4;
	}
	return goal[s];
}

int main(){
	int goal[10];
	int buatgol(10);
	srand(time(NULL));
	for(int i=0;i<10;i++){		
		cout<<goal[i]<<endl;
	}
}
