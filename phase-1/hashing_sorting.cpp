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

int main()
{
    // inside main array max number size  is:  10^6
    int arr1[7] = {2, 3, 5, 3, 2, 4, 7};
    int n = 7;
    int number = 3;
    //cout << "number 3 frequency is : " << count_freq(arr, n, number);

    // Step 1: Create a hash array
    int hash[12] = {0};
    // (1) Pre-store/compute 
    for (int i = 0; i < n; i++)
    {
        hash[arr1[i]]++;
    }
    // (2) Fetching 
    cout << "Frequency of 1: " << hash[1] << endl;
    cout << "Frequency of 2: " << hash[2] << endl;
    cout << "Frequency of 3: " << hash[3] << endl;

    return 0;
}