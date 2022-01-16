#include <iostream>
#include <string.h>
#include <cstdlib>
#include <time.h>
#include <conio.h>
using namespace std;

int i,n,j,k,o,s;
float avga;

struct player{
	string playername, team;
	int playernum, playerage, totalgoal;
	float playerheight, playerweight;
	int goal[10];
};

typedef player array[500];

void oldest(array x, int n){
	int p;
	player q;
	o=0;
	for(i=0;i<n-1;i++){
		for(p=i+1;p<n;p++){
			if(x[i].playerage<x[p].playerage){
				o=p;
			}
		}
	}
}

void topscore(array x, int n){
	int p;
	player q;
	s=0;
	for(i=0;i<n-1;i++){
		for(p=i+1;p<n;p++){
			if(x[i].totalgoal<x[p].totalgoal){
				s=p;
			}
		}
	}
}

void average_age(array x, int n){
	int p;
	player q;
	avga=0;
	for(i=0;i<n;i++){
		avga = avga + x[i].playerage;
		}
	avga=avga/n;
}

void data_input(array x, int n){
	for(i=0;i<n;i++){
		x[i].totalgoal=0;
		cout<<"Pemain ke-"<<i+1<<endl;
		cout<<"Masukkan nama pemain			:";
		cin>>x[i].playername;
		cout<<"Masukkan team pemain			:";
		cin>>x[i].team;
		cout<<"Masukkan nomor punggung pemain		:";
		cin>>x[i].playernum;
		cout<<"Masukkan umur pemain			:";
		cin>>x[i].playerage;
		cout<<"Masukkan tinggi badan pemain (dalam cm)	:";
		cin>>x[i].playerheight;
		cout<<"Masukkan berat badan pemain (dalam kg)	:";
		cin>>x[i].playerweight;
		for(j=0;j<10;j++){
			x[i].goal[j]=rand()%4;
		}
		x[i].totalgoal=0;
		for(k=0;k<10;k++){
			x[i].totalgoal = x[i].totalgoal + x[i].goal[k];
		}
	}
	cout<<endl;
}

void data_output(array x, int n){
	for(i=1;i<=n;i++){
		cout<<endl<<"Pemain ke-"<<i<<endl;
		cout<<"Nama pemain		:"<<x[i-1].playername<<endl;
		cout<<"Team pemain		:"<<x[i-1].team<<endl;
		cout<<"Nomor punggung pemain	:"<<x[i-1].playernum<<endl;
		cout<<"Umur pemain		:"<<x[i-1].playerage<<endl;
		cout<<"Tinggi badan pemain	:"<<x[i-1].playerheight<<endl;
		cout<<"Berat badan pemain	:"<<x[i-1].playerweight<<endl;
		cout<<"Total gol tercetak	:"<<x[i-1].totalgoal<<endl;
		cout<<"GOL TIAP GAME:"<<endl;
		for(int j=1;j<=10;j++){
			cout<<"Game ke-"<<j<<"---"<<x[i-1].goal[j-1]<<endl;
		}
	}
	cout<<endl;
}

int main(){
	srand(time(NULL));
	array x;
	cout<<"Berapa jumlah input pemain?";
	cin>>n;
	data_input(x,n);
	oldest(x,n);
	topscore(x,n);
	average_age(x,n);
	cout<<"Keluarkan data tiap pemain (y/n)?"<<endl;
	char ch = _getch();
	if(ch=='y')
		data_output(x,n);	
	cout<<"STATISTIK PEMAIN :"<<endl;
	cout<<"Pemain tertua	: "<<x[o].playername<<endl;
	cout<<"Pencetak gol terbanyak	: "<<x[s].playername<<" ("<<x[s].playernum<<") dengan "<<x[s].totalgoal<<" gol(s)"<<endl;
	cout<<"Rata-rata umur pemain	: "<<avga<<" tahun"<<endl;
}
