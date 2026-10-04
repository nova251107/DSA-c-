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

// brute force
/*
alorithem
create a set STL
put both value in set  o(n1logn) + o(n2 log n)
after
put set value in union array   o (n1 + n2)
return it

time complexity  :-o(n1logn) + o(n2 log n) +o (n1 + n2)
space complexity :- O(n1+n2 ) to solve the problem
                 :- O(n1+n2 ) to return the problem

*/
vector<int> sortedArray1(vector<int> a, vector<int> b)
{
    int n1 = a.size(); // store size as variable
    int n2 = b.size();

    set<int> st;

    for (int i = 0; i < n1; i++)
    {
        st.insert(a[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        st.insert(b[i]);
    }
    vector<int> ans;
    for (auto it : st)
    {
        ans.push_back(it);
    }
    return ans;
}

//==========================================================================

// optimal solution
/*
two pointer solution
take two pointer i and j
start with arr 1 i = 0 and arr 2 j = 0
create a 0 size union
while(i and j < n1 and n2)
   compare both index
      if( a1[i]<=a2[j])
           if(unionsize ==0  or union.back != a1[i])
                union.pushback(a1[i])
                i++;
      else
        if(unionsize ==0  or union.back != a2[j])
            union.pushback(a2[j])
            j++;
      if(i < n1 or j < n2 )
          same as before

    return union
            */
vector<int> sortedArray2(vector<int> a, vector<int> b)
{
    int i = 0;
    int j = 0;
    int n1 = a.size();
    int n2 = b.size();

    vector<int> unionarray;
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            if (unionarray.size() == 0 or unionarray.back() != a[i])
            {
                unionarray.push_back(a[i]);
            }
            i++;
        }
        else if (unionarray.size() == 0 or unionarray.back() != b[j])
        {
            unionarray.push_back(b[j]);
        }
        j++;
    }
    while (i < n1)
    {
        if (unionarray.size() == 0 or unionarray.back() != a[i])
        {
            unionarray.push_back(a[i]);
        }
        i++;
    }
    while (j < n2)
    {
        if (unionarray.size() == 0 or unionarray.back() != b[j])
        {
            unionarray.push_back(b[j]);
        }
        j++;
    }

    return unionarray;
}

// intersection of array
/*
3 method
1-> brute force
visited n2 size all elements are zero
start i = o to n1 in array 1
    start i = 0 to n2 in array 2
       if (vis j == 0 && a[i]==b[j])
            ans.add(a[i])
            vis[j]=1
            break;
       if ( b[j]>a[j])
            break;

2-> my approach optimal
while(i < n1 && j < n2)
   while (j < n2 &&  (a[i]!=b[j]))
       j++;
   if(j == n2 ) break;
   if(a[i]==b[j])
       ans.add(a[i])
         i++ and j ++
   else
       i++
3-> standard 2 pointer
while(i < n1)
   i < j --> i++
   j < i --> j++
   i==j --> add a[i] --> i++ and j ++
  */

vector<int> intersection1(vector<int> a, vector<int> b)
{
    int n1 = a.size();
    int n2 = b.size();
    int i = 0, j = 0;
    vector<int> visited(n2, 0);
    vector<int> ans;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (a[i] == b[j] && visited[j] == 0)
            {
                ans.push_back(a[i]);
                visited[j] = 1;
                break;
            }
            if (b[j] > a[i])
                break;
        }
    }
    return ans;
}
vector<int> intersection2(vector<int> a, vector<int> b)
{
    int n1 = a.size();
    int n2 = b.size();
    int i = 0, j = 0;
    vector<int> ans;
    while (i < n1 && j < n2)
    {
        while ((j < n2) && (b[j] < a[i]))
        {
            j++;
        }
        if (j == n2)
            break;
        else if (a[i] == b[j])
        {
            ans.push_back(a[i]);
            i++;
            j++;
        }
        else
            i++;
    }
    return ans;
}
vector<int> intersection3(vector<int> a, vector<int> b)
{
    int n1 = a.size();
    int n2 = b.size();

    int i = 0;
    int j = 0;

    vector<int> ans;

    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }

    return ans;
}

//============================================================================
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