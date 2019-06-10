#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	queue<int> q1;
	q1.push(10);
	q1.push(20);
	q1.push(30);
	
	cout<<"The size of the queue is "<<q1.size()<<"\n";
	cout<<"The front element of thw queue is "<<q1.front()<<"\n";
	cout<<"The back element of the queue is "<<q1.back()<<"\n";
	cout<<"The queue formed is as follows ";
	while(!q1.empty()){
	    cout<<q1.front()<<" ";
	    q1.pop();
	}
	cout<<'\n';
	return 0;
}

