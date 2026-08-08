#include <bits/stdc++.h>
using namespace std;
// basic recursion

// (1)print 1 to n  (method 1)
void printN1(int i, int n)
{
    if (i > n)
        return;
    cout << i << " ";
    printN1(i + 1, n);
}

// method 2 for print 1 to n
/* printN(n - 1);  // go down first
cout << n;      // print while coming back */
void printN2(int n)
{
    if (n <= 0)
        return;
    printN2(n - 1);
    cout << n << " ";
}
// method 1 for print n to 1
void RevPrintN1(int n)
{
    if (n <= 0)
        return;
    cout << n << " ";
    RevPrintN1(n - 1);
}
// method 2 for print N to 1 using two variable
void RevPrintN2(int i, int n)
{
    if (i > n)
        return;
    RevPrintN2(i + 1, n);
    cout << i << " ";
}
// print even number
void printEven(int n)
{
    if (n <= 0)
        return;
    printEven(n - 1);
    if (n % 2 == 0)
        cout << n << " ";
}
// print odd number
void printodd(int n)
{
    if (n <= 0)
        return;
    printodd(n - 1);
    if (n % 2 != 0)
        cout << n << " ";
}

/* parameterised way
in return
change in parameter and get answe  */
int sumOfNumber1(int n, int sum)
{
    if (n < 1)
    {
        return sum;
    }
    sum += n;
    return sumOfNumber1(n - 1, sum);
    
}
// find sum of 1 to N
/* this is a functional way for getiing ans
here add funtion in return call multiple function */
int sumOfNumber2(int i, int n)
{
    if (i > n)
        return 0;
    return i + sumOfNumber2(i + 1, n);
}
// 1) two pointer method 
// 1) reverse array 



int main()
{
    int i = 1;
    int n;
    cout << "enter a last number : " << "\n";
    cin >> n;
    cout << "print 1 to N     :";
    printN1(i, n);
    cout << "\n";
    cout << "print 1 to N     :";
    printN2(n);
    cout << "\n";
    cout << "print N to 1     :";
    RevPrintN1(n);
    cout << "\n";
    cout << "print N to 1     :";
    RevPrintN2(i, n);
    cout << "\n";
    cout << "print 1 to N even number  :";
    printEven(n);
    cout << "\n";
    cout << "print 1 to N odd number  :";
    printodd(n);
    cout << "\n";
    cout << "print 1 to N sum   :"<<sumOfNumber1(n, 0);
    
    cout << "\n";
    cout << "print 1 to N odd sum  :"<<sumOfNumber2(1, n);
    
}
