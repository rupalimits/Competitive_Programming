// List in stl means doubly linked list which stores elements at non-contiguous positions in memory.
#include <bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	list<int> l1, l2;
	
	for (int i = 10; i >= 1 ; i--){
	    l1.push_back(i);
	    l2.push_back(i * 2);
	}
	cout<<"The list l1 is ";
	for(auto it = l1.begin(); it != l1.end(); it++)
	cout<< *it <<" ";
	cout<<"\n";
	cout<<"The list l2 is ";
	for(auto it = l2.begin(); it != l2.end(); it++)
	cout<< *it <<" ";
	cout<<"\n";
	cout<<"The front element of the l1 is "<<l1.front()<<"\n";
	cout<<"The back element of the l2 is "<<l2.back()<<"\n";
	l1.sort();
	cout<<"The sorted list l1 is ";
	for(auto it = l1.begin(); it != l1.end(); it++)
	cout<< *it <<" ";
	cout<<"\n";
	cout<<"The reverse of the list l2 is ";
	l2.reverse();
	for(auto it = l2.begin(); it != l2.end(); it++)
	cout<< *it <<" ";
	cout<<"\n";
	cout<<"The merging of the list is done as follows ";
	l1.merge(l2);
	for(auto it = l1.begin(); it != l1.end(); it++)
	cout<< *it <<" ";
	cout<<"\n";
	return 0;
}

