#include <iostream>
void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int arr[], int n, int i){
    int largest = i;
    int l = 2*i +1;
    int r = 2*i + 2;
    
    if(l < n && arr[l] > arr[largest]) largest = l;
    
    if(r < n && arr[r] > arr[largest]) largest = r;
    
    if(largest!= i){ swap(&arr[i], &arr[largest]);
    
    heapify(arr, n, largest);
    }
}
void buildheap(int arr[], int n){
    for(int i = (n/2) - 1; i >=0; i--){
        heapify(arr, n, i);
        }
}

void printHeap(int arr[], int n) 
{ 
	std::cout << "Array representation of Heap is:\n"; 

	for (int i = 0; i < n; ++i) 
		std::cout << arr[i] << " "; 
	std::cout << "\n"; 
} 
int main(){

    int arr[] = {2, 5, 1, 7, 9, 3};
    int n = sizeof(arr)/ sizeof(arr[0]);
    
    buildheap(arr, n);
    printHeap(arr, n);
}
