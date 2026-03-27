#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

typedef struct {
  int product_id;
  char product_name[50];
  float price;
  int quantity;
} Product;

void writeProduct(const char *filename, int numProducts);
void appendProduct(const char *filename, int numProducts);
void readProduct(const char *filename);
void modifyProduct(const char *filename);

int main() {
  system("cls");

  const char *filename = "products.bin";
  int choice, numProducts;
  
  do {
    printf("\n-- Product Management System --\n");
    printf("1. Write Products\n");
    printf("2. Append Products\n");
    printf("3. Read Products\n");
    printf("4. Modify Products\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
      case 1:
        printf("Enter the number of products to write: ");
        scanf("%d", &numProducts);
        writeProduct(filename, numProducts);
        break;
      case 2:
        printf("Enter the number of products to append: ");
        scanf("%d", &numProducts);
        appendProduct(filename, numProducts);
        break;
      case 3:
        readProduct(filename);
        break;
      case 4:
        modifyProduct(filename);
        break;
      case 5:
        printf("Exiting......\n");
        break;
      default:
        printf("Invalid choice. Please try again.\n");
    }
  } while(choice != 5);

  system ("pause");
  return(0);
}

void writeProduct(const char *filename, int numProducts) {
  FILE *fp;

  Product p;

  fp = fopen(filename, "wb");

  if(fp == NULL) {
    printf("Error!");
    exit(0);
  }

  for(int i = 0; i < numProducts; i++) {
    printf("Enter details for product %d:\n", i+1);

    printf("Product ID: ");
    scanf("%d", &p.product_id);

    while (getchar() != '\n');

    printf("Product name: ");
    if (fgets(p.product_name, sizeof(p.product_name), stdin)) {
      p.product_name[strcspn(p.product_name, "\n")] = 0;
    }

    printf("Price: ");
    scanf("%f", &p.price);

    printf("Quantity: ");
    scanf("%d", &p.quantity);

    fwrite(&p , sizeof(Product), 1, fp);
  }

  printf("\nProducts have been written to the file successfully.\n");

  fclose(fp);
}

void appendProduct(const char *filename, int numProducts) {
  FILE *fp;

  Product p;

  fp = fopen(filename, "ab");

  if(fp == NULL) {
    printf("Error!");
    exit(0);
  }

  for(int i = 0; i < numProducts; i++) {
    printf("Enter details for product %d:\n", i+1);

    printf("Product ID: ");
    scanf("%d", &p.product_id);

    while (getchar() != '\n');

    printf("Product name: ");
    if (fgets(p.product_name, sizeof(p.product_name), stdin)) {
      p.product_name[strcspn(p.product_name, "\n")] = 0;
    }

    printf("Price: ");
    scanf("%f", &p.price);

    printf("Quantity: ");
    scanf("%d", &p.quantity);

    fwrite(&p , sizeof(Product), 1, fp);
  }

  printf("\nProducts have been appended to the file successfully.\n");

  fclose(fp);
}

void readProduct(const char *filename) {
  FILE *fp;

  Product p;

  fp = fopen(filename, "rb");

  if(fp == NULL) {
    printf("Error!");
    exit(0);
  }

  printf("\nReading products from the file:\n");
  printf("-----------------------------------------------------\n");
  printf("Product ID      Product Name        Price    Quantity\n");
  printf("-----------------------------------------------------\n");

  while(fread(&p, sizeof(Product), 1, fp) == 1) {
    printf("%-15d %-19s %-8.2f %d\n", p.product_id,
      p.product_name,
      p.price,
      p.quantity);
  }

  fclose(fp);
}

void modifyProduct(const char *filename) {
  FILE *fp;

  Product p;
  int findId;
  int found = 0;

  fp = fopen(filename, "rb+");

  if(fp == NULL) {
    printf("Error!");
    exit(0);
  }

  printf("Enter the Product ID to modify: ");
  scanf("%d", &findId);

  while(fread(&p, sizeof(Product), 1, fp) == 1) {
    if(p.product_id == findId) {
      found = 1;
      printf("Product found. Enter new details:\n");
      printf("New Product Name: ");
      scanf(" %[^\n]", p.product_name);
      printf("New Price: ");
      scanf("%f", &p.price);
      printf("New Quantity: ");
      scanf("%d", &p.quantity);

      fseek(fp, -(long)sizeof(Product), SEEK_CUR);
      fwrite(&p , sizeof(Product), 1, fp);
      
      printf("\nProduct updated successfully.\n");
      break;
    }
  }
  
  if(found == 0) {
    printf("Product ID %d not found.\n", findId);
  }
  
  fclose(fp);
}
