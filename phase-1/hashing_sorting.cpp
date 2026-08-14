#include <bits/stdc++.h>
using namespace std;

/*
===========================================================
                    HASHING IN C++
===========================================================

Hashing:
Hashing is a technique used to store and retrieve information
quickly using a key.

Main idea:

1. PRE-STORE
   Store the frequency/information before queries arrive.

2. FETCH
   Retrieve the already stored information when needed.

-----------------------------------------------------------
Without Hashing:
For every query, we may need to traverse the entire array.

Time Complexity:
O(N * Q)

With Hashing:
Pre-computation  -> O(N)
Each fetch        -> O(1) for array hashing
                     O(log N) for map
                     O(1) average for unordered_map

===========================================================
*/

// =========================================================
// 1. WITHOUT HASHING
// =========================================================

int countFrequency(const vector<int> &arr, int number)
{
    int count = 0;

    for (int value : arr)
    {
        if (value == number)
        {
            count++;
        }
    }

    return count;
}

// =========================================================
// 2. HASHING USING ARRAY
// =========================================================

void hashingArray()
{
    cout << "\n========================================\n";
    cout << "       HASHING USING ARRAY\n";
    cout << "========================================\n";

    vector<int> arr = {2, 3, 5, 3, 2, 4, 7};

    /*
        Maximum value in this array is 7.

        We create a hash array large enough
        to store frequencies from 0 to 11.
    */

    int hashTable[12] = {0};

    // ---------------- PRE-STORE ----------------

    for (int value : arr)
    {
        hashTable[value]++;
    }

    cout << "\nHashing completed successfully.\n";

    // ---------------- FETCH ----------------

    cout << "\n--- Frequency Results ---\n";

    cout << "Frequency of 1 = " << hashTable[1] << '\n';
    cout << "Frequency of 2 = " << hashTable[2] << '\n';
    cout << "Frequency of 3 = " << hashTable[3] << '\n';
    cout << "Frequency of 4 = " << hashTable[4] << '\n';
    cout << "Frequency of 5 = " << hashTable[5] << '\n';
    cout << "Frequency of 7 = " << hashTable[7] << '\n';

    /*
        Another example
    */

    vector<int> arr2 =
        {
            3, 3, 4, 5, 3, 2,
            1, 3, 4, 5, 6, 4,
            3, 5, 3, 3};

    int hashTable2[19] = {0};

    // Pre-store
    for (int value : arr2)
    {
        hashTable2[value]++;
    }

    // Fetch
    cout << "\n--- Second Array ---\n";

    cout << "Frequency of 1 = " << hashTable2[1] << '\n';
    cout << "Frequency of 2 = " << hashTable2[2] << '\n';
    cout << "Frequency of 3 = " << hashTable2[3] << '\n';
    cout << "Frequency of 4 = " << hashTable2[4] << '\n';
    cout << "Frequency of 5 = " << hashTable2[5] << '\n';
    cout << "Frequency of 6 = " << hashTable2[6] << '\n';
    cout << "Frequency of 0 = " << hashTable2[0] << '\n';
}

// =========================================================
// 3. HASHING CHARACTERS - LOWERCASE a-z
// =========================================================

void hashingCharacterLowercase()
{
    cout << "\n========================================\n";
    cout << "     HASHING LOWERCASE CHARACTERS\n";
    cout << "========================================\n";

    string s =
        "aaaaaaaaabbbbbccdeefgjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj";

    // 26 positions -> a to z
    int hashTable[26] = {0};

    // ---------------- PRE-STORE ----------------

    for (char ch : s)
    {
        hashTable[ch - 'a']++;
    }

    /*
        Character mapping:

        a - a = 0
        b - a = 1
        c - a = 2
        ...
        z - a = 25

        ASCII:
        'a' = 97
        'b' = 98
        ...
        'z' = 122
    */

    // ---------------- FETCH ----------------

    cout << "\n--- Frequency Results ---\n";

    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        cout << "Frequency of " << ch
             << " = " << hashTable[ch - 'a'] << '\n';
    }
}

// =========================================================
// 4. HASHING CHARACTERS - ALL ASCII CHARACTERS
// =========================================================

void hashingCharacter()
{
    cout << "\n========================================\n";
    cout << "       HASHING ALL CHARACTERS\n";
    cout << "========================================\n";

    string s =
        "sduiwvduwdugefyubwyvbfgfbfiuaaaaaabbbbcdfffggghhhiklkjguudb";

    // 256 positions for ASCII characters
    int hashTable[256] = {0};

    // ---------------- PRE-STORE ----------------

    for (char ch : s)
    {
        hashTable[(unsigned char)ch]++;
    }

    /*
        Here we directly use the ASCII value.

        Example:

        'a' = 97
        hashTable[97] -> frequency of 'a'

        'b' = 98
        hashTable[98] -> frequency of 'b'
    */

    // ---------------- FETCH ----------------

    cout << "\n--- Frequency Results ---\n";

    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        cout << "Frequency of " << ch
             << " = " << hashTable[(unsigned char)ch] << '\n';
    }
}

// =========================================================
// 5. HASHING USING MAP - INTEGER
// =========================================================

void hashingMapNumber()
{
    cout << "\n========================================\n";
    cout << "       HASHING USING MAP - NUMBER\n";
    cout << "========================================\n";

    int n;

    cout << "\nEnter the size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    /*
        map<int, int>

        key   -> number
        value -> frequency

        Example:

        arr = {1, 2, 2, 3, 3, 3}

        map:

        1 -> 1
        2 -> 2
        3 -> 3
    */

    map<int, int> frequencyMap;

    // ---------------- PRE-STORE ----------------

    for (int value : arr)
    {
        frequencyMap[value]++;
    }

    cout << "\nHashing completed successfully.\n";

    // ---------------- QUERIES ----------------

    int q;

    cout << "\nEnter number of queries: ";
    cin >> q;

    cout << "\n--- Frequency Results ---\n";

    while (q--)
    {
        int number;

        cout << "Enter number to find frequency: ";
        cin >> number;

        // ---------------- FETCH ----------------

        cout << "Frequency of " << number
             << " = " << frequencyMap[number] << '\n';
    }
}

// =========================================================
// 6. HASHING USING MAP - STRING
// =========================================================

void hashingMapString()
{
    cout << "\n========================================\n";
    cout << "       HASHING USING MAP - STRING\n";
    cout << "========================================\n";

    int n;

    cout << "\nEnter the size of array: ";
    cin >> n;

    vector<string> arr(n);

    cout << "Enter " << n << " strings: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    /*
        map<string, int>

        key   -> string
        value -> frequency

        Example:

        apple apple mango

        apple -> 2
        mango -> 1
    */

    map<string, int> frequencyMap;

    // ---------------- PRE-STORE ----------------

    for (const string &word : arr)
    {
        frequencyMap[word]++;
    }

    cout << "\nHashing completed successfully.\n";

    // ---------------- QUERIES ----------------

    int q;

    cout << "\nEnter number of queries: ";
    cin >> q;

    cout << "\n--- Frequency Results ---\n";

    while (q--)
    {
        string word;

        cout << "Enter string to find frequency: ";
        cin >> word;

        // ---------------- FETCH ----------------

        cout << "Frequency of \"" << word
             << "\" = " << frequencyMap[word] << '\n';
    }
}

//========================================================
// SELECTION SORT:- get min and swap it
//=========================================================
/*
name says it :- select (minimum)
before sort :- 21,78,27,90,2,56
after sort :- 2,78,27,90,21,56
step 1:- (select min and swap)

cheack array and find
if find minimum place into first place
and swap with first element

step 2:- after first place same as step 1
before sort :- 2,78,27,90,21,56
after sort :- 2,21,27,90,78,56

loop continue

 */
void selectionSort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
}
//======================================================================================
//======================================================================================

//========================================================
// BUBBLE SORT:-  FIND MAX AND  SWAP IT TILL THEY GO TO THE LAST
//=========================================================
/*
BEFORE SORT :- 1 , 8 , 7 , 5   ( 1AND8  SORT NO SWAP)
            :- 1 , 8 , 7 , 5   (8 AND 7 NO SORT , SWAP IT )
AFTER SORT :-  1, 7 ,8 , 5     (5,8 NO SORT , SWAP IT )
AFTER SORT :-  1, 7 , 5, 8    (MAX ELEMENT AT LAST :- STOP  )

here 8 is sort now repeate same with not sort array

same ;-  1, 7 , 5 ,  :- 1 and 7 sort no swap
before ;-  1, 7 , 5 ,  :- 5 and 7 no sort so swap it
after ;-  1, 5 , 7 , 8:- MAX ELEMENT AT LAST :- STOP

same continue


             */
void bubbleSort(int arr[], int n)
{
    int didswap = 0;
    for (int i = n - 1; i >= 1; i--)
    {

        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                didswap == 1;
            }
        }
        if (didswap == 0)
        {
            break;
        }
        cout << "runs";
    }
}

// ======================================================
//    SELECTION SORT :- cheack untill all part sort
// ======================================================

/*
first cheack 2 element are sorted or not
if not then sorted
aftert cheack 3 element are sorted or not
if not sorted
until array complete
 */

void InsertionSort(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j - 1], arr[j]);
        }
    }
}

// ======================================================
//    MERGE SORT :- DIVIDE AND MERGE
// ======================================================
/*
suppose array have 9 element
we can divide into 2 part : 1 (5,4)
                          :-2 (4, 5)
Merge Sort is a Divide and Conquer sorting algorithm.

Core idea
Divide the array into two halves.
Recursively divide until each part has 1 element.
Merge the smaller sorted arrays while maintaining sorted order.
Divide:

[5, 2, 4, 1]
       ↓
[5, 2]    [4, 1]
 ↓          ↓
[5] [2]   [4] [1]

Merge:

[5] + [2] → [2, 5]
[4] + [1] → [1, 4]

Then:

[2, 5] + [1, 4]
       ↓
[1, 2, 4, 5]

 */
/*
==========================
PSEUDOCODE FOR MERGE SORT
==========================

voic func(arr,low , high)
     //base condition
     if (low >= high ) return;

     //find mid point
     mid = low + (high - low) / 2

     // divide into two array imageinary with recursion
     // array 1
     merge-sort(arr,low,mid)
     // array 2
     merge-sort (arr,mid+1, high)

     //after sorted all array
     //we merge them
    merge (arr,low,mid,high)
===================================
PSEUDOCODE FOR MERGE CODE
=================================
merge (arr,low ,mid , high)
    temp = {}
    left   = low (pointer)
    right  = mid + 1 (pointer)

    // cheack both array which is min and add into temp array
    while (left < = mid && right <= high )
        {
            if(arr[left]<= arr[right])
            {
                temp.add(arr[left])
                      left ++
            }
            else
            {
                temp.add(arr[right])
                      right ++
            }
        }

    // if left element remain so add them
    while (left <= mid)
        {
            temp.add(arr[left])
                left ++
        }
    // if right element remain so add them
    while (right <= high)
        {
            temp.add(arr[right])
                right ++
        }

    // copy into origional array
    for (i = low to high )
    {
        arr[i]=temp(i-low);
    }

 */
void MergeArr(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if left element remain so add them
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    // if right element remain so add them
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    // copy into origional array
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}
void MergeSort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;
    int mid = low + (high - low) / 2;

    // first divide
    MergeSort(arr, low, mid);
    // second divide
    MergeSort(arr, mid + 1, high);

    // merge both array
    MergeArr(arr, low, mid, high);
}

// =========================================================
//                         MAIN
// =========================================================

int main()
{
    /*   ios::sync_with_stdio(false);
      cin.tie(nullptr);
   */
    /*
        Uncomment the function you want to test.
    */

    /*     hashingArray();

        hashingCharacterLowercase();

        hashingCharacter();

        hashingMapNumber();

        hashingMapString(); */

    int n;
    cout << "enter a size of array :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter a number :";
        cin >> arr[i];
        cout << "\n";
    }
    /*     selectionSort(arr, n);
        cout << "after sort :- ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n==================\n";
        bubbleSort(arr, n);
        cout << "after sort :- ";

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n==================\n"; */
    selectionSort(arr, n);
    cout << "after sort :- ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n==================\n";

    return 0;
}