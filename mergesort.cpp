#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

void merge(int arr[],int l,int m,int u){
	int x,y,z;
	int n1 = m - l + 1;
	int n2 = u - m;
	
	int L[n1], R[n2];
	
	for(x=0;x<n1;x++)
	L[x]=arr[l+x];
	for(y=0;y<n2;y++)
	R[y]=arr[m+1+y];
	
	x=0;
	y=0;
	z=l;
	
	while (x < n1 && y < n2) 
    { 
        if (L[x] <= R[y]) 
        { 
            arr[z] = L[x]; 
            x++; 
        } 
        else
        { 
            arr[z] = R[y]; 
            y++; 
        } 
        z++; 
    }
    
	while (x < n1) 
    { 
        arr[z] = L[x]; 
        x++; 
        z++; 
    } 
    while (y < n2) 
    { 
        arr[z] = R[y]; 
        y++; 
        z++; 
    } 
}
void mergesort(int arr[],int l,int u){
	if (l<u){
		int m = 1+(u-1)/2;
		mergesort(arr,l,m);
		mergesort(arr,m+1,u);
		merge(arr,l,m,u);
	}
}

int main (){
	int arr[] = {12, 11, 13, 5, 6, 7}; 
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    cout<<"ARRAY AWAL	:"<<" ";
	for(int i=0;i<arr_size;i++){
    	cout<<arr[i]<<" ";
	}
	cout<<endl;
	mergesort(arr,0,arr_size-1);
	cout<<"ARRAY AKHIR	:"<<" ";
	for(int i=0;i<arr_size;i++){
    	cout<<arr[i]<<" ";
	}
	return 0;
}
