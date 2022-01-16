#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <time.h>
using namespace std;
int r,c,i,j;

int main()
{
	srand (time(NULL));
    cout << "Masukkan jumlah baris: ";
    cin >> r;

    cout << "Masukkan jumlah kolom: ";
    cin >> c;
    
	int G[r][c],x[i],y[j];
	
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           G[i][j]=rand()%255;			//randomizer array
       }
    
    cout<<"::::MATRIKS G ::::"<<endl;
	for(i = 0; i < r; ++i)
    	for(j = 0; j < c; ++j)
    	{
        cout << "	" << G[i][j];		//print matriks
        if(j == c-1)
            cout << endl;
    	}
    cout<<endl;
    
    for(i = 0; i < r; ++i)
    {
    	x[i]=0;							//keadaan awal supaya didapatkan nilai maks
	}
	
    for(i = 0; i < r; ++i)
    	for(j = 0; j < c; ++j)
    {
    	if(x[i] < G[i][j])
    	{
    		x[i] = G[i][j];				//mulai melihat mana yang lebih besar
		}
	}
	
	cout<<"::Hasil array x(nilai maksimal tiap baris)::"<<endl;
	for(i = 0; i < r; ++i)
    {
    	cout<<"Baris "<<i+1<<": ";
    	cout<<x[i]<<endl;				//print array x
	}
	cout<<endl;
	
	for(j = 0; j < c; ++j)
    {
    	y[j]=255;						//keadaan awal supaya didapatkan nilai minimum
	}
	
	 for(i = 0; i < r; ++i)
    	for(j = 0; j < c; ++j)
    {
    	if(y[j] > G[i][j])
    	{
    		y[j] = G[i][j];				//mulai melihat mana yang lebih kecil
		}
	}
	
	cout<<"::Hasil array y(nilai minimum tiap kolom)::"<<endl;
		for(j = 0; j < c; ++j)
    {
    	cout<<"Kolom "<<j+1<<": ";
		cout<<y[j]<<endl;				//print array y
	}
	
 	return 0;
 }
