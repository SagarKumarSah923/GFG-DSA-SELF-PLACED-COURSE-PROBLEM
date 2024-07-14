#include<iostream>
using namespace std;
void insertAtEnd(int arr[],int sizeOfArray,int element){
	arr[sizeOfArray-1]=element;
}
int main(){
	int arr[5]={1,2,3,4};
	cout<<"Original Array: ";
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int elementToAdd=10;
	insertAtEnd(arr,5,elementToAdd);
	cout<<"Array after inseting "<<elementToAdd<<"at the end:";
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}