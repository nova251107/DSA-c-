#include <bits/stdc++.h>
using namespace std;

// in globally we can declare 10^7
// inside main we can declare 10^6
int arr[10000000];

// with out hashing
// count freq in array :-
// method 1 :- time complexity = o(n*Q)  q is size of array
// in each time q we need iterate n time
int count_freq(int arr[], int size, int number)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == number)
        {
            count++;
        }
    }

    return count;
}

// here time complexity so high, we need more time , thats why hashing come and reduce time complexity
// Hashing is a technique used to store and find data quickly using a key.

/* 1. Pre-store

Pre-store = put the data into a hash table before you need to answer queries. */

/* 2. Fetching

Fetching = retrieving the stored information when you need it. */


// hashing using array
void hashing_array()
{
    int arr1[7] = {2, 3, 5, 3, 2, 4, 7};
    int n = 7;
    int number = 3;

    // cout << "number 3 frequency is : " << count_freq(arr, n, number);

    // Step 1: Create a hash array
    int hash1[12] = {0};

    // (1) Pre-store/compute
    for (int i = 0; i < n; i++)
    {
        hash1[arr1[i]]++;
    }

    // (2) Fetching
    cout << "Frequency of 1: " << hash1[1] << endl;
    cout << "Frequency of 2: " << hash1[2] << endl;
    cout << "Frequency of 3: " << hash1[3] << endl;


    int arr2[18] = {3, 3, 4, 5, 3, 2, 1, 3, 4, 5, 6, 4, 3, 5, 3, 3};
    int hash2[19] = {0};

    // pre store
    for (int i = 0; i < 18; i++)
    {
        hash2[arr2[i]]++;
    }

    // fetching
    cout << "\n";
    cout << "Frequency of 3: " << hash2[3] << endl;
    cout << "Frequency of 2: " << hash2[2] << endl;
    cout << "Frequency of 5: " << hash2[5] << endl;
    cout << "Frequency of 4: " << hash2[4] << endl;
    cout << "Frequency of 0: " << hash2[0] << endl;
    cout << "Frequency of 6: " << hash2[6] << endl;
}


// hashing in character string
void hashing_character()
{
    string s = "aaaaaaaaabbbbbccdeefgjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj";
    int hash3[26] = {0}; // for smaller case

    // for call a = any char x - 'a' = 0 then its a
    // a == 97 ASCII value z == 122 ASCII value
    for (int i = 0; i < s.size(); i++)
    {
        hash3[s[i] - 'a']++;
    }

    cout << "\n";
    cout << "Frequency of a: " << hash3[0] << endl;
    cout << "Frequency of b: " << hash3[1] << endl;
    cout << "Frequency of c: " << hash3[2] << endl;
    cout << "Frequency of d: " << hash3[3] << endl;
    cout << "Frequency of e: " << hash3[4] << endl;
    cout << "Frequency of f: " << hash3[5] << endl;
    cout << "Frequency of g: " << hash3[6] << endl;
    cout << "Frequency of h: " << hash3[7] << endl;
    cout << "Frequency of i: " << hash3[8] << endl;
    cout << "Frequency of j: " << hash3[9] << endl;

    // for charactor logic is subtract  char x by a and find a index and fetching it
}


int main()
{
    hashing_array();

    hashing_character();

    return 0;
}
