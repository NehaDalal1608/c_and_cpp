
#include <stdio.h>


struct Employee {
    char name[50];
    float grossSalary;
    float da; 
    float hra; 
    float conveyance;
    float otherAllowances;
};

float calculateBasicSalary(struct Employee emp) {
    return emp.grossSalary - (emp.da + emp.hra + emp.conveyance + emp.otherAllowances);
}

int main() {
    struct Employee employee;

    printf("Enter employee name: ");
    scanf("%s", employee.name);

    printf("Enter gross salary: ");
    scanf("%f", &employee.grossSalary);

    printf("Enter Dearness Allowance: ");
    scanf("%f", &employee.da);

    printf("Enter House Rent Allowance: ");
    scanf("%f", &employee.hra);

    printf("Enter conveyance allowance: ");
    scanf("%f", &employee.conveyance);

    printf("Enter other allowances: ");
    scanf("%f", &employee.otherAllowances);

    float basicSalary = calculateBasicSalary(employee);
    printf("Employee %s's basic salary is:%.2f\n", employee.name, basicSalary);

    return 0;
}


/*Enter employee name: neha
Enter gross salary: 2000000
Enter Dearness Allowance: 5000
Enter House Rent Allowance: 10000
Enter conveyance allowance: 3000
Enter other allowances: 6000 
Employee neha's basic salary is:1976000.00*\

