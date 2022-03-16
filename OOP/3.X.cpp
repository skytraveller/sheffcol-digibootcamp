
/*

This program is a very simple example of OOP programming to create and print simple student records.

gcc 3.X.cpp -lstdc++

*/

#include <iostream> 

using namespace std;

class Student
{
    /*
        Student - The base class used in this program.

        This class uses the private variables: name, type, age and numberofcourses with getters and setters.
        This class can be printed using the 'print' function.
    */

    public:

        Student()
        {
            // This blank method is needed so this class and derived classes can handle being initiated without an argument.
            // cout <<  "Student created!\n";
        }
        Student(string namevar)
        {
            setName(namevar);
        }

        // ~Student()
        // {
            // This method has been commented out due to not being needed, yet.
            // cout <<  "Student destroyed!\n";
        // }

        int getAge(void)
        {
            return age;
        }
        void setAge(int v)
        {
            age = v;
        }

        string getName(void)
        {
            return name;
        }
        void setName(string v)
        {
            name = v;
        }

        int getNumberOfCourses(void)
        {
            return numberofcourses;
        }
        void setNumberOfCourses(int v)
        {
            numberofcourses = v;
        }

        void print()
        {
            cout << "Student: " << getName() << endl;
            cout << getAge() << " years old, currently taking " << getNumberOfCourses() << " course(s)." << endl;
        }

        void set(string nme, int age, int noc)
        {
            if (nme != "")
            {
                setName(nme);
            }
            setAge(age);
            setNumberOfCourses(noc);
        }

    private:
        int age = 0;
        int numberofcourses = 0;
        string name = "";
        string type = "";
};


class ArtStudent: public Student
{
    private:
        string type = "art";
};

class TechStudent: public Student
{
    private:
        string type = "tech";
};

int main()
{
    // Create a student, set it's properties, print to screen, repeat.

    Student luke("Luke");
    luke.setAge(21);
    luke.setNumberOfCourses(1);
    luke.print();

    ArtStudent bob;
    bob.set("bob", 29, 2);
    bob.print();

    TechStudent john;
    john.set("john", 28, 4);
    john.print();

    return 0;
    
}
