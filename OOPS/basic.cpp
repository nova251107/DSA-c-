/* 
Introduction to OOP
Classes and Objects
Access Specifiers
Constructors
Destructor
this Pointer
Static Members
Friend Function & Friend Class
Encapsulation
Abstraction
Inheritance
Polymorphism
Virtual Functions
Runtime Polymorphism
Function Overloading
Operator Overloading
Virtual Destructor
Abstract Classes & Pure Virtual Functions
Object Slicing
Copy Constructor
Copy Assignment Operator
Shallow vs Deep Copy
Move Constructor (placement overview)
new and delete
Dynamic Objects
Memory Layout of Objects
Virtual Table (vtable) basics
Exception Handling (placement level)
File Handling basics
OOP interview problems and mock interviews 
*/
//main object of oops -->Functions are grouped with the data they operate on.
/* 

-----------------------------------------------------------------------------------------------

               LEC  1 :- introduction of oops 

-----------------------------------------------------------------------------------------------
why oops exist ? 
      What problem was OOP created to solve?

      step 1 :- imagine a real project(suppose bank management system)
             it has , 
             sustomers , bank accounts , employees , Loans , cards 
             
             now using only functiona and variables
                  string customerName[1000];
                  int customerAge[1000];
                  double balance[1000]; 
            initially looks like manageable 

            but if projects grow 100000+ lines of code and 1000 developer working tother then
            then problem start apperaing 

       step 2 :- proceduaral programming 
       
           1 ) data is not protected (any one can changes origional values )
           2 ) everything is scatterd (sperad over large area not connected together  )
           3 ) difficult to maintain ( one small effect can changes )
           4 ) code duplication (similar code repeate many times )
           5 ) Poor scalability (more bugs , confusing code organise , difficult on teamwork )
           (if one data add everythings needs to changes)

      step 3 :-  OOP idea 
           Instead of separating data and functions:
           OOP says:
                Keep related data and behavior together.
                Everything about a customer stays inside one unit.
                    That unit is called a class.
        (it means before oops function and variables are not related but after oop says 
            keep relating data and behaviour together in one unit 
             this one unit called a class ) 
             
    setp 4 :- Real world analogy
    (An analogy is a comparison between two different things to show how they are similar, usually to help explain or clarify a complex idea)
    Think of a smartphone.
    it has 
       data--> brand , RAM, ROM , storage , battery 
       behavior --> call , charge , take pics , play music

    smartphone naturally combines its data and behavior.
    A class does the same thing in code.
    
    Step 5: Why Companies Prefer OOP
        Large software systems use OOP because it provides:
                Better organization
                Easier maintenance
                Code reuse
                Improved security through controlled access
                Easier collaboration among developers
                Better scalability for growing applications
 */
/* 
Q: Why was OOP introduced?

A strong answer is:

OOP was introduced to overcome the limitations of procedural 
programming.
It groups related data and functions into classes, making software more modular, maintainable,
reusable, secure, and scalable, especially for large applications developed by multiple programmers.
  */



/* 
-----------------------------------------------------------------------------------------------

               LEC  1 :- Classes & Objects 
               
-----------------------------------------------------------------------------------------------
1. What is a Class?
A class is a blueprint/template used to create objects.

thinks of building blueprint 
   its describe --> rooms , doors , windows ,
   but the blurprint it self isn't an actual building
   ex:-

class Car {
public:
    string brand;
    int speed;

    void accelerate() {
        speed += 10;
    }
}; 

car is class :- 
its describe what car object contain 
and what can object can do ?

2. What is an Object?
An object is an actual instance of a class.
Car  → class / blueprint

car1 → object
car2 → object

we can create many object from same class 

Car car1;
Car car2;
Car car3;
Car car4;
All four objects have the structure defined by Car, but each object has its own data.


 */

/* 
| Class                                | Object                        |
| ------------------------------------ | ----------------------------- |
| Blueprint/template                   | Actual instance               |
| Logical definition                   | Concrete entity               |
| Defines data and behavior            | Contains its own object state |
| Example: `Car`                       | Example: `car1`               |
| Doesn't represent one particular car | Represents one particular car |

What is a class?
A class is a user-defined data type that groups related data members and member functions together 
and serves as a blueprint for creating objects.

What is an object?
An object is an instance of a class that has its own state and can use the behaviors defined by the class.

A class is a blueprint from which objects are created
 */

 /* 
 class ClassName {
    // data members
    // member functions
};

s1
├── name = Rahul
└── age = 20

s2
├── name = Amit
└── age = 21


ex :- 
class Student {
public:
    string name;    --> data membor 
    int age;        --> data membor
    float cgpa;     --> data membor

    void display()              -->member function
    {
        cout << name << endl;        
        cout << age << endl;            
        cout << cgpa << endl;
    }
};

8. A Member Function Operates on Object Data
This is where you need to understand the relationship between data and behavior

The same display() function works with different objects.
s1.display()
     ↓
uses s1's name and cgpa

s2.display()
     ↓
uses s2's name and cgpa

A member function operates on the object through which it was called.
10. Class Does Not Mean One Object

This is a common misunderstanding.
you haven't created one specific car.
You've only defined what a Car looks like and what it can do.



A class describes:

what data an object has
what operations an object can perform

Objects represent individual accounts:
Same class.
Different objects.
Different state.
*/
/* 
An object generally has:

State--> The current values of its data.

for Student s1; 
    state can be :---> 
        name = "Rahul"
        age = 20
        cgpa = 8.7

Behavior

What the object can do.
display()
updateCGPA()
calculateGrade()


Object = State + Behavior

Modularity in OOP
Modularity means dividing a large program into small, independent, manageable parts called modules/classes.
Each module should have a specific responsibility and should interact with other modules through well-defined interfaces.

Why modularity is useful
Easy to understand → smaller pieces are easier to study.
Easy to maintain → changes in one module usually don't require changing the entire program.
Reusable → a module/class can potentially be reused elsewhere.
Easy to test → individual modules can be tested separately.
Team development → different developers can work on different modules.

In basic OOP discussions, object and instance are often used almost interchangeably.

More precisely:

Object → the actual entity created in memory.
Instance of a class → emphasizes that the object was created from that particular class.

1. Attributes → What an object has

Attributes are the data/properties/state of an object.
class Car {
public:
//attributes --> what state of object 
    string brand;
    int speed;
    int fuel;

//behavoiur --> action on object 
    void accelerate() {
        speed += 20;
    }

    void brake() {
        speed -= 20;
    }
};

brand → attribute
speed → attribute
fuel → attribute

2. Behavior → What an object can do
Behaviors are the actions/functions an object can perform.

accelerate() → behavior
brake() → behavior

 */

 /* 
 Class → Blueprint of objects
Object → Actual class instance
Instance → Object created from class
Attribute → What object has state/property
Behavior → What object does or take action 
Modularity → Divide system into modules
Encapsulation → Protect internal data
Abstraction → Hide unnecessary implementation
Inheritance → Acquire properties from parent
Polymorphism → One interface, many forms
 */

 /* 
 Lecture 3: Access Specifiers
 1. What is an Access Specifier?
An access specifier controls the visibility/accessibility of members of a class.

C++ has three access specifiers:

public
private
protected
They determine where class members can be accessed from.

why we need ?
A user/program component should not be able to arbitrarily modify important internal data.


3. public
Members declared under public:
-> can be accessed from outside the class.
(can changed by outside )

4. private
Members declared under private: 
 ->can be accessed only from within the class itself.
 (cant change by outside)

 Because balance is private.
However, a member function of the class can access it:
ex:- its allow coz its inside the class
    void deposit(double amount) {
        balance += amount;
    }

    why private is imp 
suppose we have :-
    class BankAccount {
private:
    double balance;

public:
    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        }
    }
};

we cant do :->> account.balance = -1000000;
Instead, it has to interact through the functions provided by the class:
account.deposit(5000);
account.withdraw(1000);

This gives the class control over how its internal data is modified.
This idea is extremely important.

6. protected

protected is mainly related to inheritance.

A protected member:
Can be accessed inside the class.
Can be accessed by derived/child classes.
Cannot normally be accessed directly from outside.

class Vehicle {
protected:
    int speed;
};

class Car : public Vehicle {
public:
    void increaseSpeed() {
        speed += 10;
    }
};

here 
Car can access speed because Car inherits from Vehicle.
But:

Car car;
car.speed = 100;   // ❌

is not allowed from normal outside code.

**protected mainly exists to provide controlled access to derived classes.
------------------------------------------------------------------
| Specifier   | Inside class | Derived class | Outside class |
| ----------- | -----------: | ------------: | ------------: |
| `public`    |          ✅ |            ✅ |            ✅ |
| `protected` |          ✅ |            ✅ |            ❌ |
| `private`   |          ✅ |           ❌* |            ❌ |
--------------------------------------------------------------

 */

 /* 
 common interview question 
 -----------------------------------------------
 class Student {
    string name;
    int age;
};
What is the access level of name and age?
In a C++ class, members are private by default.

so,
Student s;
s.name = "Rahul";   // ❌
doesn't work.
--------------------------------------------
10. Can We Have Multiple Access Specifiers?

Yes.

ex ,
class BankAccount {
private:
    double balance;
    string accountNumber;

public:
    void deposit(double amount) {
        balance += amount;
    }

    void display() {
        cout << balance;
    }

protected:
    int accountType;
};


A class can switch between access levels multiple times.
The access specifier applies to the members that follow it 
until another access specifier appears.


*/

/* 
STRUCT 
This is an important C++ distinction.
syntax :- 

struct Student {
    string name;
    int age;
};
For a struct, members are public by default.
therefore -->

Student s;
s.name = "Rahul";   // ✅

------------------------------
class  → private by default
struct → public by default
------------------------------
*/

/* 
Real-World Example

Think about an ATM.

You can perform:

Withdraw
Deposit
Check Balance

But you don't directly manipulate the bank's internal database.

Conceptually:

             User
              ↓
       Public interface
       ┌───────────────┐
       │ withdraw()    │
       │ deposit()     │
       │ checkBalance()│
       └───────┬───────┘
               ↓
        Private data
        ┌─────────────┐
        │ balance     │
        │ accountData │
        └─────────────┘

The user interacts with controlled operations rather than directly changing internal data.

This is the basic intuition behind encapsulation. 
*/
/*
private prevents direct access from outside the class.

If data is private, how do we read or modify it?
That's where getter and setter functions come in.
ex 1 
class Student {
private:
    int age;
};
Student s;

s.age = 20;   // ❌

We can't directly access age.

ex2 
class Student {
private:
    int age;

public:
    void setAge(int value) {
        age = value;
    }
};
now --> Student s;

s.setAge(20);
this works 


we use setage inside class and create a behaviour to modification
  */

/* 
2. Setter
A setter is a function used to set or modify the value of a private data member.

example :- 
void setAge(int value) {
    age = value;
}
use as -->
s.setAge(20); // this will works 


----------------------------------------
Why Is This Better Than Public Data?
any one can do :- s.age = -500;

but with setter -->
    void setAge(int value) {
        if (value >= 0 && value <= 150) {
            age = value;
        }

we can create a our boundry
The class can control how its data is modified. 
   */

   /* 
   4. Getter
A getter is a function used to retrieve/read a private data member. 
for example -->
--------------------------------
class Student {
private:
    int age;

public:
    void setAge(int value) {
        age = value;
    }

    int getAge() {
        return age;
    }
};
-------------------
useages 
------>>
Student s;

s.setAge(20);
cout << s.getAge();

---------------------------------------
Setter → modifies data
Getter → reads data
----------------------------------------
 This Is Called Controlled Access
*/

/* 
              OBJECT
        ┌─────────────────┐
        │                 │
Outside │  Public         │
───────→│  functions      │
        │      ↓          │
        │  Private data   │
        │                 │
        └─────────────────┘
        
Outside code doesn't need to know how the internal data is stored.
It simply uses the interface provided by the class.
This idea becomes very important when we study abstraction and encapsulation.
       */
/* 
attributes :- binds data and member in a class 
like a capsule , it combind and binds toghether  
*/