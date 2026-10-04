#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    // Attributes
    int id;
    int age;
    string name;
    int nos;
    float *gpa;

    //cunstructor defaults 
    Student()
    {
        cout << "studnets cunstructor created "<<endl;
    }

    // ctor :: parameterised ctor 
    Student(int id,int age, string name, int nos, float gpa )
    {
        cout<<"studnets parameterised cunstructor created "<<endl;
        this-> id = id;
        this-> age = age;
        this-> name = name;
        this-> nos = nos;
        this-> gpa = new float (gpa); 
    }

        // ctor :: parameterised ctor 
    Student(const Student &scrobj)// scr obj==> A
    {
        cout<<"studnets parameterised cunstructor created "<<endl;
        this-> id = scrobj.id;
        this-> age = scrobj.age;
        this-> name = scrobj.name;
        this-> nos = scrobj.nos;
    }

    // Behavior / Method / Function
    void Study()
    {
        cout << this->name << " studying" << endl;
    }
    void Sleep()
    {
        cout << this->name << " sleeping" << endl;
    }
    void bunk()
    {
        cout << this->name << " bunking" << endl;
    }
    void cry()
    {
        cout << this->name << " crying" << endl;
    }

    //discunstructor 
    ~Student()
    {
        cout << "studnets discunstructor created "<<endl;
        delete this->gpa;
    }
};
int main()
{

    // we created students class intance 
/*  
 // this all are stored in stack 

    A.id = 1;
    A.age = 19;
    A.name = "ranu";
    A.nos = 6;
    A.Study();

    Student B;
    B.id = 2;
    B.age = 39;
    B.name = "lodu";
    B.nos = 9;
    B.Sleep(); */
/* 
    Student A(1,15,"vasu",6);
    Student B(1,16,"vahbh",6);
    Student C(1,19,"vassbhsy",6);
    Student D(1,34,"vahusb",6);
    Student E(1,356,"vasu",6);
    Student F(1,134,"vssu",6);

    cout<< A.name << " "<< A.age<<endl;
    cout<< B.name << " "<< A.age<<endl;
    cout<< A.name << " "<< C.age<<endl;
    cout<< E.name << " "<< A.age<<endl;



    A.bunk(); B.Sleep();
    // copy ctor 
    Student G = A; 
    // Student G(A); also copy ctor  
    */

    // dynamic allocation 
    /* 
    this is stored in heap or created a pointer  */
    Student *A = new Student(1,14,"haha9", 9,9.78);
    cout<< A->name<<endl;
    delete A;
    return 0;
    

}