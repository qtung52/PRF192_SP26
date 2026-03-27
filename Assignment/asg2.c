#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_NAME_LEN 50
#define MAX_RECORDS 100

typedef struct {
  int student_id;
  char firstname[MAX_NAME_LEN];
  char lastname[MAX_NAME_LEN];
  float gpa;
} Student;


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

  Student s;

  fp = fopen(filename, "a");

  if(fp == NULL) {
    printf("Error!");
    exit(0);
  }

  printf("Enter Student ID: ");
  scanf("%d", &s.student_id);

  while (getchar() != '\n');

  printf("Enter First Name: ");
  scanf(" %[^\n]", s.firstname);

  while (getchar() != '\n');

  printf("Enter Last Name: ");
  scanf(" %[^\n]", s.lastname);

  printf("Enter GPA: ");
  scanf("%f", &s.gpa);

  fprintf(fp, "%d,%s,%s,%.2f\n", s.student_id, s.firstname, s.lastname, s.gpa);

  printf("Student added successfully.\n");

  fclose(fp);
}

void displayStudents(const char *filename) {
  FILE *fp = fopen(filename, "r");

  if(fp == NULL) {
    printf("Error!");
    exit(0);
  }

  Student s;
  printf("\n-------------------------------------------------\n");
  printf("%-10s %-15s %-15s %-5s\n", "ID", "First Name", "Last Name", "GPA");
  printf("-------------------------------------------------\n");

  while (fscanf(fp, "%d,%[^,],%[^,],%f\n", &s.student_id, s.firstname, s.lastname, &s.gpa) != EOF) {
    printf("%-10d %-15s %-15s %-5.2f\n", s.student_id, s.firstname, s.lastname, s.gpa);
  }

  fclose(fp);
}

void searchStudentById(const char *filename,int id) {
  FILE *fp;

  Student s;
  int found = 0;

  fp = fopen(filename, "r");

  if(fp == NULL) {
    printf("Error!");
    exit(0);
  }

  while(fscanf(fp, "%d,%[^,],%[^,],%f\n", &s.student_id, s.firstname, s.lastname, &s.gpa) != EOF) {
    if(id == s.student_id) {
      printf("Student found:\n");
      printf("----------------------------------\n");
      printf("ID: %d\n", s.student_id);
      printf("First Name: %s\n", s.firstname);
      printf("Last Name: %s\n", s.lastname);
      printf("GPA: %.2f\n", s.gpa);
      found = 1;
      break;
    }
  }

  if(found == 0) {
    printf("Student ID %d not found.\n", id);
  }

  fclose(fp);
}

void searchStudentByLastName(const char *filename, const char *lastname) {
  FILE *fp;

  Student s;
  int found = 0;

  fp = fopen(filename, "r");

  if(fp == NULL) {
    printf("Error!");
    exit(0);
  }

  while(fscanf(fp, "%d,%[^,],%[^,],%f\n", &s.student_id, s.firstname, s.lastname, &s.gpa) != EOF) {
    if(strcmp(lastname, s.lastname) == 0) {
      printf("Student found:\n");
      printf("----------------------------------\n");
      printf("ID: %d\n", s.student_id);
      printf("First Name: %s\n", s.firstname);
      printf("Last Name: %s\n", s.lastname);
      printf("GPA: %.2f\n", s.gpa);
      found = 1;
      break;
    }
  }

  if(found == 0) {
    printf("Student Last Name %s not found.\n", lastname);
  }

  fclose(fp);
}

void sortStudentByLastName(const char *filename) {
  FILE *fp;

  fp = fopen(filename, "r");

  if(fp == NULL) {
    printf("Error!");
    exit(0);
  }

  Student list[MAX_RECORDS];
  int count = 0;

  while (count < MAX_RECORDS && fscanf(fp, "%d,%[^,],%[^,],%f\n", &list[count].student_id, list[count].firstname, list[count].lastname, &list[count].gpa) != EOF) {
    count++;
  }
  fclose(fp);

  for (int i = 0; i < count - 1; i++) {
    for (int j = 0; j < count - i - 1; j++) {
      if (strcmp(list[j].lastname, list[j + 1].lastname) > 0) {
          Student temp = list[j];
          list[j] = list[j + 1];
          list[j + 1] = temp;
        }
    }
  }

  fp = fopen(filename, "w");
  for (int i = 0; i < count; i++) {
    fprintf(fp, "%d,%s,%s,%.2f\n", list[i].student_id, list[i].firstname, list[i].lastname, list[i].gpa);
  }
  
  printf("Data sorted by last name successfully.\n");
  
  fclose(fp);
}