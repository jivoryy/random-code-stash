#include <iostream>
using namespace std;

int main(){
	int box, container, cookies_left, box_left;
	int cookies = 1825;
	int box_capacity = 24;
	int container_capacity= 75;
	
	box = cookies/box_capacity;
	container = box/container_capacity;
	cookies_left = cookies % box_capacity;
	box_left = box % container_capacity;
	
	cout<<box<<endl;
	cout<<container<<endl;
	cout<<cookies_left<<endl;
	cout<<box_left<<endl;	
}
