// Name = Shaurya Malhotra
// Roll No. = 2010990918
// Set No. = 3
// Q2

 
 
#include <bits/stdc++.h>

using namespace std;
  
 
int countPair(int arr[], int n, int sum)
{
    int count = 0;
  
    // for loop for checking sum
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] + arr[j] == sum)
                count++;
  
    return count;
}
  
 
int main()
{
     // sorry !
    cout<<"please input the array and sum by yourself in code "<<endl;

    int arr[] = { 1, 5, 7, -1, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    
    int sum = 10;
     
cout << "number of pairs in the array = "
         << countPair(arr, n, sum);
    return 0;
}