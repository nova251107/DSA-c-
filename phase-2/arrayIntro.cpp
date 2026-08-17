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
//time complexity = O(n)
}
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
        cout << "remove duplicate element and give number of unique element 1  : " << CountUniqueElements1(st, arr);
        break;
    case 6:
        cout << "remove duplicate element and give number of unique element  2 : " << CountUniqueElements2(st, arr);
        break;

    default:
        cout << "invalid choice ";
    }

    return 0;
}