//Deque is actually the double ended queue of c++ where insertion and deletion operations are possible at both the ends.So Double ended queues are sequence containers with the feature of expansion and contraction on both the ends.
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(30);
	d1.push_front(40);
	cout<<"The deque created is as follows ";
	for(auto it = d1.begin(); it != d1.end(); it++)
	cout<< *it <<" ";
	cout<<"\n";
	cout<<"The size of the deque is "<<d1.size()<<"\n";
	cout<<"The maximum possible size of the deque is "<<d1.max_size()<<"\n";
	cout<<"The element at index 2 of the deque is "<<d1.at(2)<<"\n";
	cout<<"The element at the front of the deque is "<<d1.front()<<"\n";
	cout<<"The last element of the deque is "<<d1.back()<<"\n";
	d1.pop_front();
	cout<<"After popping the first element of the deque ";
	for(auto it = d1.begin(); it != d1.end(); it++)
	cout<< *it <<" ";
	cout<<"\n";
	d1.pop_back();
	cout<<"After popping the last elemnt of the deque ";
	for(auto it = d1.begin(); it != d1.end(); it++)
	cout<< *it <<" ";
	cout<<"\n";
    //Showing functionality of =  in deque
    deque<int> d2 = {1, 2, 3, 4};
    cout<<"The d2 created (before assignment) is ";
    for(auto it = d2.begin(); it != d2.end(); it++)
	cout<< *it <<" ";
	cout<<"\n";
    d2 = d1; //Using assignment operator
    cout<<"The d2 after assignment operator is ";
    for(auto it = d2.begin(); it != d2.end(); it++)
	cout<< *it <<" ";
	cout<<"\n";
	//All other functions such as clear(), erase(), resize(), swap(), at(), front(), back(), empty() and emplace() works similarly as they work in case of vectors.
	return 0;
}

