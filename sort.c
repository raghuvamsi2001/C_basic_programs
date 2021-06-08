#include<stdio.h>

//This function returns 1 if the array is in ascending order and return 0 otherwise
int isSorted(int arraySize, int array[]);

int main(){
	
	int arr[]={1,4,9};
	int size = 3;
	int sorted = isSorted(size, arr);
	
	
	if(sorted == 1)
		printf("The array is sorted in ascending order");
	else
		printf("The array is NOT sorted in ascending order");
	
	return 0;
}

int isSorted(int arraySize, int array[]){
	
	//Base Case
	//If the array has size equal to 0 or 1 then the array is already sorted
	if(arraySize <= 1)
		return 1;
		
	
	//Recursive Case
	//Check if the last element in the array is greater than the previous element
	if(array[arraySize - 1] >= array[arraySize - 2])
		return isSorted(arraySize-1,  array);
	
	
	return 0;
	
}