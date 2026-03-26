#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_NAME_LEN 50
#define MAX_RECORDS 100

void addStudent(const char *filename);
void displayStudents(const char *filename);
void searchStudentById(const char *filename,int id);
void searchStudentByLastName(const char *filename, const char *lastname);
void sortStudentByLastName(const char *filename);

int main() {
  system("cls");
  
  const char *filename = "students.txt";
  int choice, id;
  char lastname[MAX_NAME_LEN];

  do {
    printf("\nStudents Management System\n");
    printf("1. Add Student\n");
    printf("2. Search Student by ID\n");
    printf("3. Sreach Student by Last Name\n");
    printf("4. Display Students Sorted by Last Name\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
      case 1:
        addStudent(filename);
        break;
      case 2:
        printf("Enter Student ID to search: ");
        scanf("%d", &id);
        searchStudentById(filename, id);
        break;
      case 3:
        printf("Enter Last Name to search: ");
        scanf(" %[^\n]", lastname);
        searchStudentByLastName(filename,lastname);
        break;
      case 4:
        sortStudentByLastName(filename);
        displayStudents(filename);
        break;
      case 5:
        printf("Exiting...\n");
        break;
      default:
        printf("Invalid choice. Please try again.\n");
    }
  } while(choice != 5);

  system ("pause");
  return(0);
}

void addStudent(const char *filename) {
  FILE * fp;

  fp = open(filename, "w");

  if(fp == NULL) {
    printf("Error!");
    exit(0);
  }

  
}

void displayStudents(const char *filename) {

}

void searchStudentById(const char *filename,int id) {

}

void searchStudentByLastName(const char *filename, const char *lastname) {

}

void sortStudentByLastName(const char *filename) {

}