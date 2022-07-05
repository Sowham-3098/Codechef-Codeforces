#include <iostream>
using namespace std;
 
// Function to find all permutations of a given string `str[i…n-1]`
// containing all distinct characters
void permutations(string str, int i, int n)
{
    // base condition
    if (i == n - 1)
    {
        cout << str << endl;
        return;
    }
 
    // process each character of the remaining string
    for (int j = i; j < n; j++)
    {
        // swap character at index `i` with the current character
        swap(str[i], str[j]);        // STL `swap()` used
 
        // recur for substring `str[i+1, n-1]`
        permutations(str, i + 1, n);
 
        // backtrack (restore the string to its original state)
        swap(str[i], str[j]);
    }
}

 
int main()
{int t;
cin >> t;
while(t--){
    int n;
    cin >> n;
    string str[n];
    for(int i=0;i<n;i++){
        cin >> str[i];
    }


 
    permutations(str, 0, str.length(n));
}
    return 0;
}
