#include <bits/stdc++.h>
using namespace std;
// find largest element in array
/*
            brute :-
  sort array by merge or quick sort
  after return i
  time complexity :-O(nlogn)
            better :-
  declare max element :- INT_MIN or arr[0]
  if any element > max update
  return max
  time complexity :- O(n)
 */
int largestNum(vector<int> &arr)
{
    // better virsion
    int largest = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}
/*
brute force :-
sort array                  t.c[1]= O(nlogn)
find a second largest       t.c.[2]=O(n)
for (i = n-2 to i = 0 )
  if (largest!= arr[i])
      return arr[i];
      loop stop
total t.c = nlogn + n

better
find largest element t.c = O(n)
after traverse array
if arr[i]>large && secondlarge[i]!=largest
      second large = arr[i]
return secondlarge // t.c = O(n)
total t.c. = O(2n)

 */
// optimal
int SecondLargest(vector<int> &arr)
{
    // better virsion
    int largest = arr[0];
    int temp;
    int secondLarge = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            temp = largest;
            largest = arr[i];
            secondLarge = temp;
        }
        else if (arr[i] == largest)
        {
            continue;
        }
        else if (arr[i] > secondLarge)
        {
            secondLarge = arr[i];
        }
    }
    if (secondLarge == INT_MIN)
        return -1;
    return secondLarge;
}
int SecondSmallest(vector<int> &arr)
{
    // better virsion
    int smallest = arr[0];
    int temp;
    int secondSmall = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < smallest)
        {
            temp = smallest;
            smallest = arr[i];
            secondSmall = temp;
        }
        else if (arr[i] == smallest)
        {
            continue;
        }
        else if (arr[i] < secondSmall)
        {
            secondSmall = arr[i];
        }
    }
    if (secondSmall == INT_MAX)
        return -1;
    return secondSmall;
}
// cheack array is sorted or not
bool IsSorted(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < arr[i - 1])
            return false;
    }
    return true;
}
// remove duplicate element in array
// in sorted array
// brute force using set
int CountUniqueElements1(set<int> &st, vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        st.insert(arr[i]);
    }
    return st.size();
}
/*

set take a nlogn time complexity for insert
and for loop take n time complexity
total T.C. = nlogn + n==> n logn

 */
// better
// using tow pointer
int CountUniqueElements2(set<int> &st, vector<int> &arr)
{
    int i = 0;
    for (int j = 0; j < arr.size(); j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1; // coz i is last index in array
                  // so total number is I+1
    // time complexity = O(n)
}
// Rotate left in array
// optimal T.C. ==> O(n), extra space :- O(1); total space :- O(n)
void rotateLeftOnce(vector<int> &arr)
{
    int temp = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[arr.size() - 1] = temp;
}
// left rotate by D times
void LeftrotateDtimes1(vector<int> &arr, int d)
{
    d = d % arr.size();
    if (d == 0)
    {
        return;
    }
    int temp = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[arr.size() - 1] = temp;
    LeftrotateDtimes1(arr, d - 1);
}
// vector has a built in reverse function
// not useful in coding rounds
// time complexity is :- O(n)
void LeftRotateDtimes2(vector<int> &arr, int d)
{
    int n = arr.size();

    d = d % n;

    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.end());
    reverse(arr.begin(), arr.end());
}
// left rotate by D element (with out using built in function )
void LeftRotateDtimes3(vector<int> &arr, int d)
{
    d = d % arr.size(); // avoid repetative recursion
    // create a temp array to store first d element
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = d; i < arr.size(); i++)
    {
        arr[i - d] = arr[i];
    }
    for (int i = arr.size() - d; i < arr.size(); i++)
    {
        arr[i] = temp[i - (arr.size() - d)];
    }
}
void RightRotateDtimes2(vector<int> &arr, int d)
{
    if (arr.size() == 0)
    {
        return;
    }
    d = d % arr.size();
    reverse(arr.end() - d, arr.end());   // reverse last d element
    reverse(arr.begin(), arr.end() - d); // reverse remaining element
    reverse(arr.begin(), arr.end());     // reverse array
}

// move zeros to last
// brute force(stiver logic)
vector<int> moveZeros1(vector<int> &arr, int n)
{
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp.push_back(arr[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i < temp.size())
        {
            arr[i] = temp[i];
        }
        else
        {
            arr[i] = 0;
        }
    }
    return arr;
}
// my logic
vector<int> moveZeros2(vector<int> &arr, int n)
{
    int count = 0;
    for (int i = 0; i < n;)
    {
        if (arr[i] == 0)
        {
            count++;
            arr.erase(arr.begin() + i);
        }
        else
        {
            i++;
        }
    }
    while (count--)
    {
        arr.emplace_back(0);
    }
    return arr;
}
// two pointer approach move zero to end
// not solve real problem
vector<int> moveZeros3(vector<int> &arr, int n)
{
    int i = 0, j = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (i + 1 <= j && arr[i] == 0)
        {
            swap(arr[i], arr[j]);
            j--;
        }
    }
    return arr;
}
// this approach is push zeros to end but not stable
// array are change so this is not solution for move zero

// two pointer again using swap method(optimal)
// t.c. :- o(n) extra space:- o(1)
vector<int> moveZeros(vector<int> &arr)
{
    int j = 0; // position for next non-zero

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != 0)
        {
            if (i != j)
            {
                swap(arr[i], arr[j]);
            }
            j++;
        }
    }

    return arr;
}
int LinearSearch(vector<int> &arr, int n)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == n)
            return i;
    }
    return -1;
}
// union of two sorted array


int main()
{

    int n;
    cout << "enter a number ";
    cin >> n;
    vector<int> arr(n);
    int i = 0;
    while (i < arr.size())
    {
        cout << "enter a " << i << " number";
        cin >> arr[i];
        i++;
    }

    cout << "1 : large number " << "\n";
    cout << "2 : second largest number " << "\n";
    cout << "3 : second smallest number " << "\n";
    cout << "4 : cheack sorted array  " << "\n";
    cout << "5 : Count Unique Elements() brute " << "\n";
    cout << "6 : Count Unique Elements() better  " << "\n";
    cout << "7 : rotate left array   " << "\n";
    int choice;
    cout << "enter a choice : ";
    cin >> choice;
    cout << "\n";

    set<int> st;

    switch (choice)
    {
    case 1:
        cout << "largest num is : " << largestNum(arr);
        break;
    case 2:
        cout << "Second largest num is : " << SecondLargest(arr);
        break;
    case 3:
        cout << "Second smallest num is : " << SecondSmallest(arr);
        break;
    case 4:
        cout << "cheack array is sorted : " << IsSorted(arr);
        break;
    case 5:
        cout << "remove duplicate element and give number of unique element 1  : " << CountUniqueElements1(st, arr) << "\n";
        for (auto x : arr)
        {
            cout << x << " ";
        }
        break;
    case 6:
        cout << "remove duplicate element and give number of unique element  2 : " << CountUniqueElements2(st, arr) << "\n";
        break;
    case 7:
        cout << "rotate left" << "\n";
        rotateLeftOnce(arr);
        for (auto x : arr)
        {
            cout << x << " ";
        }
        break;

    default:
        cout << "invalid choice ";
    }

    return 0;
}