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
    
    // 定义一个学生1，姓名为Spongebob，年龄为30，GPA为3.5，是否全日制为true
    Student student1 = {"Spongebob", 30, 3.5, true};
    // 定义一个学生2，姓名为Patrick，年龄为25，GPA为2.5，是否全日制为false
    Student student2 = {"Patrick", 25, 2.5, false};
    // 定义一个学生3，所有字段初始化为0
    Student student3 = {0}; // Initialize all fields to 0

    // 将学生3的姓名设置为Sandy
    strcpy(student3.name, "Sandy");
    // 将学生3的年龄设置为28
    student3.age = 28;
    // 将学生3的GPA设置为4.0
    student3.gpa = 4.0;
    // 将学生3的全日制设置为true
    student3.isFullTime = true;

    
    // 打印学生1的信息
    printf("Student 1: %s, %d, %.2f, %s\n", student1.name, student1.age, student1.gpa, student1.isFullTime ? "true" : "false");
    // 打印学生2的信息
    printf("Student 2: %s, %d, %.2f, %s\n", student2.name, student2.age, student2.gpa, student2.isFullTime ? "true" : "false");
}

void printStudent(Student student) {
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);
    printf("Is Full Time: %s\n", student.isFullTime ? "true" : "false");
}