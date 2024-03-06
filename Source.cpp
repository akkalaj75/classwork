#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Constructor to initialize name and age
    Person(string personName, int personAge) {
        name = personName;
        age = personAge;
    }

    // Getter method for name
    string getName() {
        return name;
    }

    // Getter method for age
    int getAge() {
        return age;
    }

    // Setter method for name
    void setName(string newName) {
        name = newName;
    }

    // Setter method for age
    void setAge(int newAge) {
        age = newAge;
    }
};

int main() {
    // Creating a Person object with name "Alice" and age 30
    Person alice("Alice", 30);

    // Displaying initial name and age
    cout << "Initial Name: " << alice.getName() << endl;
    cout << "Initial Age: " << alice.getAge() << endl;

    // Updating name to "Bob" and age to 35
    alice.setName("Bob");
    alice.setAge(35);

    // Displaying updated name and age
    cout << "\nUpdated Name: " << alice.getName() << endl;
    cout << "Updated Age: " << alice.getAge() << endl;

    return 0;
}
/* In this example, the Person class represents individuals with private member variables name and age. 
Getter methods getName() and getAge() allow access to these private variables, 
while setter methods setName() and setAge() enable modification. 
The main() function demonstrates creating a Person object, accessing and updating its attributes, 
and then displaying the changes. This program serves as a foundation for understanding encapsulation 
and the use of getter and setter methods in object-oriented programming with C++.
*/