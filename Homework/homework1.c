#include<stdio.h>

void add_value(int arr[], int *n);
void search_value(int arr[], int n);
void remove_first_value(int arr[], int *n);
void remove_all_value(int arr[], int *n);
void print_array(int arr[],int n);
void print_array_ascending(int arr[], int n);
void print_array_descending(int arr[], int n);

int main(){	
	int arr[100];
	int n = 0;
	int choice;
	do{
		printf("-----Menu-----\n");
		printf("1. Them gia tri\n");
		printf("2. Tim gia tri\n");
		printf("3. Xoa gia tri dau tien\n");
		printf("4. Xoa tat ca gia tri\n");
		printf("5. In gia tri\n");
		printf("6. Sap xep mang tang dan\n");
		printf("7. Sap xep mang giam dan\n");
		printf("Other - Out chuong trinh.\n");
		printf("Chon: ");
		scanf("%d", &choice);

		switch(choice) {
			case 1:
				add_value(arr, &n);
				break;
			case 2:
				search_value(arr, n);
				break;
			case 3:
				remove_first_value(arr, &n);
				break;
			case 4:
				remove_all_value(arr, &n);
				break;
			case 5:
				print_array(arr, n);
				break;
			case 6:
				print_array_ascending(arr, n);
				break;
			case 7:
				print_array_descending(arr, n);
				break;
			default: printf("Out Chuong trinh.");
		}
	} while(choice >= 1 && choice <= 7);
	return 0;
}

void add_value(int arr[], int *n) {
	int value;
	printf("Nhap gia tri: ");
	scanf("%d", &value);

	arr[*n] = value;
	(*n)++;

	printf("Them thanh cong.\n");
}

void search_value(int arr[], int n) {
	int value, found = 0;
	printf("Nhap gia tri can tim: ");
	scanf("%d", &value);
	
	for(int i = 0; i < n; i++) {
		if(arr[i] == value) {
			printf("Da tim thay %d o vi tri %d.\n", arr[i], i);
			found = 1;
		}
	}

	if(found == 0) {
		printf("Gia tri ko ton tai.\n");
	}
}

void remove_first_value(int arr[], int *n) {
	int value;
	printf("Nhap gia tri de xoa (xoa gia tri dau tien khi tim thay): ");
	scanf("%d", &value);

	for(int i = 0; i < *n; i++) {
		if(arr[i] == value) {
			for(int j = i; j < *n - 1; j++) {		//Dời tất cả giá trị phía sau lên phía trước 1 ô
				arr[j] = arr[j+1];
			}
			(*n)--;
			printf("Xoa thanh cong.\n");
			return;
		}
	}

	printf("Gia tri ko ton tai.\n");
}

void remove_all_value(int arr[], int *n) {
	int value;
	printf("Nhap gia tri de xoa (xoa tat cai gia tri khi tim thay): ");
	scanf("%d", &value);

	for(int i = 0; i < *n;) {
		if(arr[i] == value) {
			for(int j = i; j < *n - 1; j++) {		//Dời tất cả giá trị phía sau lên phía trước 1 ô
				arr[j] = arr[j+1];
			}
			(*n)--;
		}else {
			i++;									//Dùng i++ ở đây vì để tránh bị bỏ xót giá trị
		}
	}

	printf("Xoa thanh cong.\n");
}

void print_array(int arr[], int n) {
	if(n == 0) {
		printf("Mang dang trong.\n");
		return;
	}
	
	printf("Phan tu trong mang:\n");
	for(int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void print_array_ascending(int arr[], int n) {
	int arrCopy[100];
	for(int i = 0; i < n; i++) {				//Copy arr để ko sắp xếp arr gốc
		arrCopy[i] = arr[i];
	}

	for(int i = 0; i < n; i++) {				//Dùng thuật toán bubble sort để sắp xếp tăng dần
		for(int j = i + 1; j < n; j++) {
			if(arrCopy[j] < arrCopy[i]) {
				int temp = arrCopy[i];
				arrCopy[i] = arrCopy[j];
				arrCopy[j] = temp;
			}
		}
	}

	printf("Xap sep tang dan:\n");

	for(int i = 0; i < n; i++) {
		printf("%d ", arrCopy[i]);
	}

	printf("\n");
}

void print_array_descending(int arr[], int n) {
	int arrCopy[100];
	for(int i = 0; i < n; i++) {				//Copy arr để ko sắp xếp arr gốc
		arrCopy[i] = arr[i];
	}

	for(int i = 0; i < n; i++) {				//Dùng thuật toán bubble sort để sắp xếp giảm dần
		for(int j = i + 1; j < n; j++) {
			if(arrCopy[j] > arrCopy[i]) {
				int temp = arrCopy[i];
				arrCopy[i] = arrCopy[j];
				arrCopy[j] = temp;
			}
		}
	}

	printf("Xap sep giam dan:\n");

	for(int i = 0; i < n; i++) {
		printf("%d ", arrCopy[i]);
	}

	printf("\n");
}
