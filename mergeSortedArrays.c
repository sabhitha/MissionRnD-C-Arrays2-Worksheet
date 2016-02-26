#include <stdio.h>
struct transaction {
	int amount;
	char date[11];
	char description[20];
};
void mergesortarrays(struct transaction*, int, struct transaction*, int);
int main(){
	struct transaction A[3] = { { 10, "09-10-2003", "First" }, { 20, "19-10-2004", "Second" }, { 30, "03-03-2005", "Third" } };
	struct transaction B[2] = { { 10, "09-10-2003", "First" }, { 220, "18-01-2010", "Sixth" } };
	mergesortarrays(A, 3, B, 2);
	return 0;
}
void mergesortarrays(struct transaction A[], int Alen, struct transaction B[], int Blen){
	int arr1[10][3] = { {0} };
	int arr2[10][3] = { { 0 } };
	struct transaction C[20];
	for (int i = 0; i < Alen; i++){
		//day
		arr1[i][0] = A[i].date[0]-48;
		arr1[i][0] *= 10;
		arr1[i][0] += A[i].date[1]-48;
		//month
		arr1[i][1] = A[i].date[3] - 48;
		arr1[i][1] *= 10;
		arr1[i][1] += A[i].date[4] - 48;
		//year
		arr1[i][2] = A[i].date[6] - 48;
		arr1[i][2] *= 10;
		arr1[i][2] += A[i].date[7] - 48;
		arr1[i][2] *= 10;
		arr1[i][2] += A[i].date[8] - 48;
		arr1[i][2] *= 10;
		arr1[i][2] += A[i].date[9] - 48;
	}
	for (int i = 0; i < Blen; i++){
		//day
		arr2[i][0] = A[i].date[0] - 48;
		arr2[i][0] *= 10;
		arr2[i][0] += A[i].date[1] - 48;
		//month
		arr2[i][1] = A[i].date[3] - 48;
		arr2[i][1] *= 10;
		arr2[i][1] += A[i].date[4] - 48;
		//year
		arr2[i][2] = A[i].date[6] - 48;
		arr2[i][2] *= 10;
		arr2[i][2] += A[i].date[7] - 48;
		arr2[i][2] *= 10;
		arr2[i][2] += A[i].date[8] - 48;
		arr2[i][2] *= 10;
		arr2[i][2] += A[i].date[9] - 48;
	}
	for (int i = 0,j=0,k=0; i < Alen + Blen; k++){
		if (i > Alen){
			// assign remaining elements to array
			C[k] = B[j];
			j++;
		}
		if (j > Blen){
				//assign remaining elements to the array
			C[k] = A[i];
			i++;
		}
		if (arr1[i][2] < arr2[j][2]){
			C[k] = A[i];
			i++;
		}
		else if (arr1[i][2]>arr2[j][2]){
			C[k] = B[j];
			j++;
		}
		else{
			if (arr1[i][1] < arr2[j][1]){
				C[k] = A[i];
				i++;
			}
			else if (arr1[i][1]>arr2[j][1]){
				C[k] = B[j];
				j++;
			}
			else{
				if (arr1[i][0] < arr2[j][0]){
					C[k] = A[i];
					i++;
				}
				else if (arr1[i][0]>arr2[j][0]){
					C[k] = B[j];
					j++;
				}
				else{
					C[k] = A[i];
					i++;
					k++;
					C[k] = B[j];
					j++;
					
				}
			}
		}
	}
	/*for (int i = 0; i < 2; i++){
		for (int j = 0; j < 3; j++){
			printf("%d\t", arr2[i][j]);
		}
	}*/
	 for (int i = 0; i < Alen + Blen; i++){
		printf("%d\n", C[i].amount);
		printf("%s\n", C[i].date);
		printf("%s\n", C[i].description);
	}
	
	return;
}