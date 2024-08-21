#include <stdio.h>
#include <string.h>

// Define a structure
struct Employee 
{
    int empNo;
    char empName[100];
    char address[200];
    int age;
};

// Define a union
union Data 
{
    int intData;
    float floatData;
    char strData[20];
};

main() 
{
    // structure variable
    struct Employee emp;

    //  union variable
    union Data data;

    // display structure members
    printf("Structure Example:\n");
    emp.empNo = 101;
    strcpy(emp.empName, "John Doe");
    strcpy(emp.address, "123 Main St");
    emp.age = 30;

    printf("Employee Number: %d\n", emp.empNo);
    printf("Employee Name: %s\n", emp.empName);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
    printf("\n");

    // display union members
    printf("Union Example:\n");
    data.intData = 10;
    printf("Integer Data: %d\n", data.intData);

    data.floatData = 220.5;
    printf("Float Data: %.2f\n", data.floatData);

    strcpy(data.strData, "Hello");
    printf("String Data: %s\n", data.strData);

    // Show that union overwrites previous data
    printf("\nUnion after overwriting previous data:\n");
    printf("Integer Data: %d\n", data.intData);   
    printf("Float Data: %.2f\n", data.floatData); 
    printf("String Data: %s\n", data.strData);
}

