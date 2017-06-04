#include <iostream>
#include <stdlib.h>
using namespace std;
void shakerSort(int array[], int size){
	for (int i=0;i<size/2;i++){
		bool swapped=false;
		for (int j=i;j<size-i-1;j++){
			if (array[j]>array[j+1]){
				int tmp=array[j];
				array[j]=array[j+1];
				array[j+1]=tmp;
				swapped=true;
			}
		}
		for (int j=size-2-i;j>i;j--){
			if (array[j]<array[j-1]){
				int tmp=array[j];
				array[j]=array[j-1];
				array[j-1]=tmp;
				swapped=true;
			}
		}
		if(!swapped) break;
	}
}
int main(){
	int a[1000],n;
	cout<<"Enter number of elements:";
	cin>>n;
	for (int i=0; i<n; i++)
		a[i]=rand()%100;
	for (int i=0; i<n; i++)
		cout<<a[i]<<" ";
	cout<<'\n';
	shakerSort(a,n);
	for (int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<'\n';
}
