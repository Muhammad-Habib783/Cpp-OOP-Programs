#include <iostream>
using namespace std;
// here student class with private data members
class Student 
{
private:
string name;
int rollNumber;
float cgpa;
public:
    // for setting a name
    void  setName(string studentName) 
    {
        name=studentName;
    }
    // for getting a name
    string getName() 
    {
        return name;
    }
    // for setting a roll number
    void setRollNumber(int studentRollNumber) 
    {
        rollNumber=studentRollNumber;
    }
    // for getting a roll number
    int getRollNumber() 
    {
        return rollNumber;
    }
    // for setting a cgpa by checking  condition
    void setCgpa(float studentCgpa)
     {
        if(studentCgpa>=0.0&&studentCgpa<=4.0)
         {
            cgpa=studentCgpa;
        } 
        else 
        {
            cout<<"\n you entered an invalid CGPA value setting default CGPA to 0.0";
            cgpa=0.0; // Default value if invalid input is entered by the user 
        }
    }
    // for getting a cgpa
    float getCgpa() 
    {
        return cgpa;
    }
    // Function to display student details
    void displayStudentDetails() 
    {
        cout<<"\n Student Name: "<<name;
        cout<<"\n Roll Number: "<<rollNumber;
        cout<<"\n CGPA: "<<cgpa;
    }
};
int main()
 {
    Student student1, student2;

    // Set student 1 details
    student1.setName("Ali khan");
    student1.setRollNumber(67283);
    student1.setCgpa(3.8);
    cout<<"\n Student 1 Details:";
    student1.displayStudentDetails();

   // Set student 2 details
    student2.setName("Hasssan");
    student2.setRollNumber(102);
    student2.setCgpa(4.3); // Invalid CGPA then the default cgpa set to 0.0 here
    cout<<"\n Student 2 Details:";
    student2.displayStudentDetails();
    return 0;
}