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
    // in main call (arr,0,n)
}
// 1) two pointer method
/*  use two pointer until they match or cross
 */
// 1) reverse array  (brute force )
// time complexity is = o(n)
void RevArray1(int arr[], int l, int r)
{
    if (l >= r)
        return;
    swap(arr[l], arr[r]);
    RevArray1(arr, l + 1, r - 1);
    // in main call (arr,0,n-1)
}
// 1) reverse array  (better code )
// Time complexity = o(n) but more rediable
void RevArray2(int arr[], int i, int n)
{
    if (i >= n / 2)
        return;
    swap(arr[i], arr[n - i - 1]);
    RevArray2(arr, i + 1, n);
    // in main call (arr,0,n)
}

// cheack string a palindorme
// logic is last pair elements is not same then false otherwise is true
bool palin_str(string a, int i, int n)
{
    if (i >= n / 2)
        return true;
    if (a[i] != a[n - i - 1])
        return false;
    return palin_str(a, i + 1, n);
    // in main func call :- (string ,0,size(string))
}

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
    cout << "print 1 to N sum   :" << sumOfNumber1(n, 0);

    cout << "\n";
    cout << "print 1 to N odd sum  :" << sumOfNumber2(1, n);
    cout << "\n";
    int arr[5] = {2, 3, 4, 5, 6};
    cout << "before reversing array : " << "\n";
    for (int i = 0; i < size(arr); i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";
    cout << "before reversing array : " << "\n";
    RevArray1(arr, 0, size(arr) - 1);
    for (int i = 0; i < size(arr); i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n"
         << "after reversing again : ";
    RevArray2(arr, 0, size(arr));
    for (int i = 0; i < size(arr); i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    string s = "madam";

    cout << "cheack 'madam' is palindorme or not : ";
    if (palin_str(s, 0, s.size()))
        cout << "Palindrome"<<"\n";
    else
        cout << "Not Palindrome";
    string y = "hahahes";
    cout << "cheack 'hahahes' is palindorme or not : ";
    if (palin_str(y, 0, y.size()))
        cout << "Palindrome";
    else
        cout << "Not Palindrome"<<"\n";

    cout << "\n";
}
