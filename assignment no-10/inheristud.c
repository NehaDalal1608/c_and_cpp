#include <iostream>
#include <string>

class Student {
public:
    Student(const std::string& name, int rollNumber) : name(name), rollNumber(rollNumber) {}

    void displayStudentInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
    }

private:
    std::string name;
    int rollNumber;
};

class Test : public Student {
public:
    Test(const std::string& name, int rollNumber, const std::string& subject, int marks)
        : Student(name, rollNumber), subject(subject), marks(marks) {}

    void displayTestInfo() {
        displayStudentInfo();
        std::cout << "Subject: " << subject << std::endl;
        std::cout << "Marks: " << marks << std::endl;
    }

private:
    std::string subject;
    int marks;
};

class Result : public Test {
public:
    Result(const std::string& name, int rollNumber, const std::string& subject, int marks, const std::string& grade)
        : Test(name, rollNumber, subject, marks), grade(grade) {}

    void displayResultInfo() {
        displayTestInfo();
        std::cout << "Grade: " << grade << std::endl;
    }

private:
    std::string grade;
};

int main() {
    Result student1("Neha", 101, "Math", 95, "A+");
    student1.displayResultInfo();

    return 0;
}


/*ubuntu@ubuntu-OptiPlex-3010:~$ ./a.out
Name: Neha
Roll Number: 101
Subject: Math
Marks: 95
Grade: A+*\


