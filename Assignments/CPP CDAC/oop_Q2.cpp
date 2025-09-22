#include <iostream>
#include <string>
using namespace std;

// Abstract base class
class Person {
protected:
    string name;
    int age;
public:
    Person(string n, int a)  {
        name = n;
        age = a;
        cout << "Person constructor called.\n";
    }

    virtual ~Person() {
        cout << "Person destructor called.\n";
    }

    // Pure virtual functions
    virtual void getDetails() = 0;
    virtual string getRole() = 0;

    // Setters
    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }

    // Getters
    string getName() { return name; }
    int getAge() { return age; }
};

// Derived Student class
class Student : public Person {
    int marks[3];
public:
    Student(string n, int a, int m1, int m2, int m3) 
        : Person(n, a) {
        marks[0] = m1; marks[1] = m2; marks[2] = m3;
        cout << "Student constructor called.\n";
    }

    ~Student() {
        cout << "Student destructor called.\n";
    }

    // Function overriding
    void getDetails() override {
        cout << "Student Name: " << name << ", Age: " << age << endl;
        cout << "Marks: " << marks[0] << ", " << marks[1] << ", " << marks[2] << endl;
        cout << "Average Marks: " << calculateAvg() << endl;
    }

    string getRole() override {
        return "Student";
    }

    // Function overloading
    double calculateAvg() {
        return (marks[0] + marks[1] + marks[2]) / 3.0;
    }

    double calculateAvg(int extra) {  // overloaded version
        return (marks[0] + marks[1] + marks[2] + extra) / 4.0;
    }
};

// Derived Faculty class
class Faculty : public Person {
    string subject;
public:
    Faculty(string n, int a, string sub) 
        : Person(n, a), subject(sub) {
        cout << "Faculty constructor called.\n";
    }

    ~Faculty() {
        cout << "Faculty destructor called.\n";
    }

    // Function overriding
    void getDetails() override {
        cout << "Faculty Name: " << name << ", Age: " << age << endl;
        cout << "Subject: " << subject << endl;
    }

    string getRole() override {
        return "Faculty";
    }

    // Function overloading (different params)
    void setSubject(string sub) { subject = sub; }
    void setSubject(string sub, int code) {
        subject = sub + " (" + to_string(code) + ")";
    }
};

int main() {
    // Base class pointer array
    Person* arr[5];

    // 3 Students
    arr[0] = new Student("Alice", 20, 85, 90, 80);
    arr[1] = new Student("Bob", 21, 75, 88, 92);
    arr[2] = new Student("Charlie", 19, 95, 85, 90);

    // 2 Faculty
    arr[3] = new Faculty("Dr. Smith", 45, "Mathematics");
    arr[4] = new Faculty("Prof. Brown", 50, "Computer Science");

    cout << "\n---- University Course Management System ----\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nRole: " << arr[i]->getRole() << endl;
        arr[i]->getDetails();
    }

    // Clean up
    for (int i = 0; i < 5; i++) {
        delete arr[i];
    }

    return 0;
}
