#include <bits/stdc++.h>
using namespace std;
// count digit (brute force)
int countdigit1(int n)
{
    int count = 0;
    while (n > 0)
    {
        count++;
        n /= 10;
    }
    return count;
}

// better approach (use loog10 base method)
/* if number = 2453 then log (2453)base 10 = 3.something
so , total digit = ans in integer  + 1  */
int countdigit2(int n)
{
    if (n == 0)
        return 1;
    int cnt = log10(abs(n)) + 1; // * mistake use abs (log only for n > 0)
    return cnt;
}
// reverse number = rev = rev* 10 + last digit

// palindrone = if rev == org then true otherwise false

// armstrong number = 371=3^3 + 7^3+ 1^3
// here we can use pow

bool armstrong(int n)
{
    int org = n, sum = 0;
    int digit = countdigit2(n);
    while (n > 0)
    {
        int i = n % 10;
        sum += pow(i, digit);
        n /= 10;
    }
    return sum == org;
}

// print all divisior
// 1 (brute force )
void printdivisor1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << " ";
    }
    cout << "\n";

    return;
}
// optimal approach
void printdivisor2(int n)
{
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if (n / i != i)
            {
                cout << n / i << " ";
            }
        }
    }
    cout << "\n";

    return;
}
// cheack prime number (brute force)

bool primenumber1(int n)
{
    int cnt = 0;
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
// cheack prime optimal
bool primenumber2(int n)
{
    int cnt = 0;
    if (n < 2)
    {
        return false;
    }
    if (n == 2) // n==2 prime already
        return true;
    for (int i = 3; i * i <= n; i += 2) // we dont need to cheack even number
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// GCD (gretest commmon divisor  ) or HCF (heighest common factor )
/*
logic is divisior of both then multiplie it
always start with gcd=1
 */
// 1 brute force
int GCD_HCF1(int a, int b)
{
    int gcd = 1;
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}
// 2 better            logic iis we check back side and if find then break and return it
int GCD_HCF2(int a, int b)
{
    int hcf = 1;
    for (int i = min(a, b); i > 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
            return hcf;
        }
    }
    return 1;
}

// equlidian algorithm
/*
for a and b where a >b
then 2 case :-
        1) gcd(a,b)=gcd(a-b,b)
        1) gcd(a,b)=gcd(a/b,b)
        here continue loop run
        if one find zero then other find gcd
*/
// 3 optimal        Time complexity = log(min(a,b))
int GCD_HCF3(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
        if (a == 0)
        {
            return b;
        }
        else if (b == 0)
        {
            return a;
        }

    }
}
// find LCM Time complecity same as gcd 
int LCM(int a, int b)
{
    //return (a*b)/GCD_HCF3(a,b);  this may over flow 
    return (a/GCD_HCF3(a,b))*b;
}

int main()
{
    int n;
    cout << "enter a integer number     :" << "\n";
    cin >> n;
    int a, b;
    cout << "enter a first number     :" << "\n";
    cin >> a;
    cout << "enter a first number     :" << "\n";
    cin >> b;

    cout << "using brute force : " << countdigit1(n) << "     :" << "\n";
    cout << "better solution : " << countdigit2(n) << "     :" << "\n";
    cout << "cheack armstrong  : " << armstrong(n) << "     :" << "\n";
    cout << "find GCD   : " << GCD_HCF1(a, b) << "\n";
    cout << "find GCD   : " << GCD_HCF2(a, b) << "\n";
    cout << "find GCD   : " << GCD_HCF3(a, b) << "\n";

    cout << "print all divisor : ";
    printdivisor1(n);
    printdivisor2(n);

    return 0;
}
