#include <stdio.h>
#include <stdbool.h>
#include <string.h>


typedef struct {
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
} Student;

void printStudent(Student student);


int main() {
    
    Student student1 = {"Spongebob", 30, 3.5, true};
    Student student2 = {"Patrick", 25, 2.5, false};
    Student student3 = {0}; // Initialize all fields to 0

    strcpy(student3.name, "Sandy");
    student3.age = 28;
    student3.gpa = 4.0;
    student3.isFullTime = true;

    
    printf("Student 1: %s, %d, %.2f, %s\n", student1.name, student1.age, student1.gpa, student1.isFullTime ? "true" : "false");
    printf("Student 2: %s, %d, %.2f, %s\n", student2.name, student2.age, student2.gpa, student2.isFullTime ? "true" : "false");
}

void printStudent(Student student) {
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);
    printf("Is Full Time: %s\n", student.isFullTime ? "true" : "false");
}