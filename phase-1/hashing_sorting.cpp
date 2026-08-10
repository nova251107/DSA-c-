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

int countFrequency(const vector<int>& arr, int number)
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
        3, 5, 3, 3
    };

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

    for (const string& word : arr)
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


// =========================================================
//                         MAIN
// =========================================================

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    /*
        Uncomment the function you want to test.
    */

    hashingArray();

    hashingCharacterLowercase();

    hashingCharacter();

    hashingMapNumber();

    hashingMapString();

    return 0;
}