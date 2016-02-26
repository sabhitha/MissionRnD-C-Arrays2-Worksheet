#include <stdio.h>
struct transaction {
	int amount;
	char date[11];
	char description[20];
};
int count(struct transaction*, int, char *date);
int main(){
	struct transaction A[3] = { { 10, "09-10-2003", "First" }, { 20, "19-10-2004", "Second" }, { 30, "03-03-2005", "Third" } };
	char given_date[11] = "19-10-2004";
	int great_count = count(A, 3, given_date);
	printf("%d", great_count);
	return 0;
}
int count(struct transaction A[], int Alen, char given_date[]){
	int flag = 0;
	for (int i = 0; i < Alen; i++){
		if (given_date == A[i].date)
			return Alen - i - 1;
	}
	
	return 0;
}