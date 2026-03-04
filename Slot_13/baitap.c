#include<stdio.h>

void inputArr(int a[], int n) {
	for(int i = 0; i < n; i++) {
		printf("Nhap so thu %d: ", i + 1);
		scanf("%d", &a[i]);
	}
}

void outputArr(int a[], int n) {
	printf("Phan tu trong mang:\n");
	for(int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}

int isPrime(int n) {
	if(n < 2) return 0;
	for(int i = 2; i*i <= n; i++) {
		if(n % i == 0) {
			return 0;
		}
	}
	return 1;
}

int countPrimes(int a[], int n) {
	int count = 0;
	for(int i = 0; i < n; i++) {
		if(isPrime(a[i])) {
			count++;
		}
	}
	return count;
}

int nhapInt() {
	int number;
	printf("Nhap so: ");
	while(scanf("%d", &number) != 1) {
		while (getchar() != '\n');
	}
	return number;
}

int main(){	
	int a[100];
	int n;
	
	n = nhapInt();
	
	inputArr(a, n);
	
	outputArr(a, n);
	
	printf("\n");
	printf("%d", countPrimes(a, n));
	
	return 0;
}