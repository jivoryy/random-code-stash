#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;

/*
by Johanes Bosco Gading
15/3838176/PA/16836
*/

int n, i, a, b, c, d, e;

float random(float j,float h)							//function untuk randomize float antara nominal j ke h
{
    return j + (rand() / ( RAND_MAX / (h-j) ) ) ;  
}

int main(){
	cout.precision(2);									//supaya tampilan angka yang dicetak hanya menunjukan 2 angka saja tiap data
	cout<<"Masukkan jumlah data gempa :";
	cin>>n;
	float x[n], x1[a], x2[b], x3[c], x4[d] ,x5[e];
	for (int i=0;i<n;i++)  
      {
        x[i]=random(0,9);								//function dipanggil
        
        if(x[i]>=8.0) {x1[a]=x[i];a++;}					//pengecekan dan pengelompokan nominal data
        else
         if(x[i]>=6.0) {x2[b]=x[i];b++;}
         else
          if(x[i]>=5.0) {x3[c]=x[i];c++;}
          else
          	if(x[i]>=4.0) {x4[d]=x[i];d++;}
          	else
          		{x5[e]=x[i];e++;}
       }
    cout<<endl;
    /*cout<<"Semua Data Gempa:"<<endl;					//mencetak semua data
	for(int i=0;i<n;i++)
	{
		cout<<""<<x[i]<<endl;
	}
	cout<<endl; 
    cout<<"==================="<<endl;
    */
	cout<<"Gempa Sangat Besar:"<<endl;					//mencetak data
	for(int p=0;p<a;p++)
	{
		cout<<""<<x1[p]<<endl;
	}
	cout<<endl;
	cout<<"Gempa Besar:"<<endl;
    for(int q=0;q<b;q++)
	{
		cout<<""<<x2[q]<<endl;
	}	
	cout<<endl;
	cout<<"Gempa Merusak:"<<endl;
	for(int r=0;r<c;r++)
	{
		cout<<""<<x3[r]<<endl;
	}
	cout<<endl;
	cout<<"Gempa Sedang:"<<endl;
    for(int s=0;s<d;s++)
	{
		cout<<""<<x4[s]<<endl;
	}
	cout<<endl;
	cout<<"Gempa Mikro/Kecil:"<<endl;
	for(int t=0;t<e;t++)
	{
		cout<<""<<x5[t]<<endl;
	}
	cout<<endl;
	
	cout<<"Jumlah Gempa Sangat Besar : "<<a<<endl;		//menghitung jumlah tiap kelompok
	cout<<"Jumlah Gempa Besar : "<<b<<endl;
	cout<<"Jumlah Gempa Merusak : "<<c<<endl;
	cout<<"Jumlah Gempa Sedang : "<<d<<endl;
	cout<<"Jumlah Gempa Mikro/Kecil : "<<e<<endl;
    getch();
      return 0;
}
