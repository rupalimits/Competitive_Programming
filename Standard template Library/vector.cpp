#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
    int a[] = {1, 2, 3, 5, 4, 7, 8, 8, 10};
    int n = sizeof(a) / sizeof(a[0]);
    // Assigning array into vector
    vector<int> vect(a, a+n);
    cout<<"The vector is\n";
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    // Finding size of the vector
    n = vect.size();
    cout<<"The size of the vector is "<<n<<"\n";
    
    // Sorting the elements of the vector
    sort(vect.begin(), vect.end());
    cout<<"The vector after sorting is\n";
    for(auto it = vect.begin(); it < vect.end(); it++)
    cout<< *it <<" ";
    cout<<"\n";
    
    // Reversing elements of the vector 
    reverse(vect.begin(), vect.end());
    cout<<"The vector after reversing is \n";
    for(auto it = vect.begin(); it < vect.end(); it++)
    cout<< *it << " ";
    cout<<"\n";
    
    // To find a particular element of the vector
    find(vect.begin(), vect.end(), 9) != vect.end() ? cout<<"Element Found\n" : cout<<"Element not found\n";
    
    sort(vect.begin(), vect.end());
    // To find the lower bound of any Element
    auto q = lower_bound(vect.begin(), vect.end(), 8);
    cout<< q-vect.begin() <<"\n";
    
    // To find the upper bound of any Element
    auto g = upper_bound(vect.begin(), vect.end(), 8);
    cout<< g-vect.begin() <<"\n";
    
    // To insert the element at the back of the vector 
    vect.push_back(15);
    cout<<"After inserting the element at the end ";
    for(auto it = vect.begin(); it < vect.end(); it++)
    cout<< *it <<" ";
    cout<<"\n";
    
    // To pop out the element from the end 
    vect.pop_back();
    cout<<"After popping the elemnt from the back ";
    for(auto it = vect.begin(); it < vect.end(); it++)
    cout<< *it <<" ";
    cout<<"\n";
    
    // Using Swap functionality of the vectors
    vector<int> v1 = {100, 101, 102, 103, 104};
    v1.swap(vect);
    cout<<"After swap vect will become ";
    for(auto it = vect.begin(); it < vect.end(); it++)
    cout<< *it <<" ";
    cout<<"\n";
    cout<<"After swap v1 will become ";
    for(auto it = v1.begin(); it < v1.end(); it++)
    cout<< *it <<" ";
    cout<<"\n";
    
    // To clear all the lelements of the vector
    cout<<"After applying clear elements \n";
    vect.clear();
    // To check whether the vector is empty or not
    if(vect.empty()){
        cout<<"No elements to display\n";
    }
	return 0;
}

