/*
	The function is called with the parameters:
	quickSort(input, 0, size - 1);

*/

int partitionArray(int arr[], int start, int end) {
	// Write your code here
	int pivot = arr[start];
	int i = start;
	int j = end;

	while(i<j){
		while(arr[i]<=pivot && i<=end-1){
			i++;
		}
		while(arr[j]>pivot && j>=start+1){
			j--;
		}
		if(i<j){
			swap(arr[i],arr[j]);
		}
		
	}
	swap(arr[start],arr[j]);
	return j;
}

void quickSort(int input[], int start, int end) {
	/*
		Don't write main().
		Don't read input, it is passed as function argument.
		Change in the given array itself.
		Taking input and printing output is handled automatically.
	*/
	if(start<end){
		int partition = partitionArray(input, start, end);
		quickSort(input, start, partition-1);
		quickSort(input, partition+1, end);
	}
}