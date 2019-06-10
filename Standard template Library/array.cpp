#include <bits/stdc++.h>
#include <array>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	array<int, 5> ar = {1, 2, 3, 4, 5};
	for(int i = 0; i < ar.size(); i++)
	cout<<ar[i]<<" ";
	cout<<"\n";
	// Printing first element of array 
    cout << "First element of array is : "; 
    cout << ar.front() << endl; 
  
    // Printing last element of array 
    cout << "Last element of array is : "; 
    cout << ar.back() << endl; 
    
    array<int, 6> ar1 = {7, 8, 9, 10, 11, 12}; 
    
    ar1.swap(ar);
    cout << "The second array elements after swapping are : "; 
    for (int i=0; i<6; i++) 
    cout << ar1[i] << " "; 
    cout << endl; 
	return 0;
}

