#include <stdio.h>
int findSingleOcuurance(int[], int);
int main(){
	printf("working");
	int arr[] = { 12, 1, 12, 3, 12, 1, 1, 2, 3, 3 };
	int len = 10;
	int num = findSingleOcuurance(arr, len);
	printf("%d", num);
	return 0;
}
int findSingleOcuurance(int arr[], int len){
	if (!arr == 1)
		return -1;
	if (len <= 0)
		return -1;
	int *count = (int *)calloc(sizeof(int), (len - 2));
	for (int i = 0; i < len; i++){
		count[arr[i]]++;
	}
	for (int i = 0; i < len; i++){
		if (count[arr[i]] == 1)
			return arr[i];
	}
	return 0;
}