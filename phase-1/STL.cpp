#include <bits/stdc++.h>
using namespace std;

// pair function
void STL_Pair()
{

    // use #include<utility> library for using pair

    std::pair<int, string> p1 = {2, "vasu"}; // use std if in funtion
    cout << p1.first << " " << p1.second;
    cout << "\n";

    std::pair<int, pair<int, string>> p2 = {2, {3, "haha"}};
    cout << p2.first << " " << p2.second.first << p2.second.second;
    cout << "\n";

    std::pair<array<int, 5>, array<int, 5>> p3 = {{2, 3, 4, 5}, {2, 3, 5, 6, 8}}; // declare array
    cout << p3.first[4] << " \n"
         << p3.second[3];
    cout << "\n";

    // take input and declare and print array
    std::pair<int, int> arr[5];
    // input
    cout << "enter roll number and mark for 5 students ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i].first << " " << arr[i].second;
    }
    cout << "\n";

    pair<int, string> p4 = make_pair(23, "haha"); // using name_pair

    pair<int, int> p5 = {4, 9};
    pair<int, int> p6 = {23, 4};
    cout << "\n";

    if (p5 > p6)
    {
        cout << "true ";
    }
    else
    {
        cout << "false";
    }
    cout << "\n";

    // swap pair p5 and p6

    swap(p5, p6);
    cout << "\n";
    return;
}
void STL_vector()
{
    vector<int> v1; // declare vector
    for (int i = 0; i < 5; i++)
    {
        int x;
        cout << "enter a elements : " << endl;
        cin >> x;
        cout << "\n";
        // v1.push_back(x);   ///push back and emplace back both are same
        v1.emplace_back(x);
    }
    for (int x : v1)
    {
        cout << x << " ";
    }
    cout << "---------------------";

    vector<int> v2 = {2, 3, 4, 5, 6, 7, 7};

    cout << v2.front(); // for print frist number
    cout << "\n";
    cout << v2.back(); // for print last number
    cout << "\n";

    // creating a vector pair

    vector<pair<int, string>> v3 = {{1, "haha"}, {2, "nana"}}; // declare

    v3.push_back({1, "nana"});
    v3.push_back({7, "nina"});
    v3.push_back({9, "naka"});
    int x1 = size(v3);
    cout << "number of elements in this vector is : " << x1 << "\n";

    // using auto print a vectore
    for (auto x : v3)
        cout << x.first << " " << x.second << endl;

    cout << "---------------------";

    cout << "---------ARRAY OF VETOR--------------" << "\n";

    vector<vector<int>> arr; // declare a array
    arr.push_back({2, 3, 4, 5, 6});
    arr.push_back({2, 3, 4, 0, 3, 5, 6});
    arr.push_back({2, 3});

    //  using auto for print array of vector
    // general code
    /*  for (auto &v : arr)      :- here &v give address of vector inside

        {
            for (int x : v)              :- v is calling here
            {
                cout << x << " ";
            }
            cout << "\n";
        }
     */

    for (auto &v : arr)
    {
        for (int x : v)
        {
            cout << x << " ";
        }
        cout << "\n";
    }

    // copy of vector
    vector<pair<int, string>> v4 = v3; // vector<pair<int,string>> same as both v1 and v2 to copy vector

    // clear vector
    v4.clear();
    cout << v4.size();

    cout << v3.at(2).first << endl;
    cout << v3[2].first << endl;
    cout << v3.front().first << endl;
    cout << v3.back().first << endl;

    cout << "----------------------------------" << "\n";

    // print vectore using itrator
    for (auto it = v2.begin(); it != v2.end(); it++)
    {
        cout << *it << endl;
    }

    cout << "----------------------------------\n";

    // print vectore using itrator
    for (auto it = v2.rbegin(); it != v2.rend(); it++)
    {
        cout << *it << endl;
    }

    cout << "----------------------------------";

    return;
}

int main()
{
    cout << "--------------------code start  -----------------------\n ";
    STL_Pair();
    cout << "\n";
    STL_vector();
    cout << "\n";

    
    cout << "--------------------code complete -----------------------\n ";

    return 0;
}