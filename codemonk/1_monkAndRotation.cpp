/**
 *      file    :  1_monkAndRotation.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Jun 05 22:32:17 
 *      lastMod :  Sat Jun  5 22:32:17 2021 
 **/

#include<iostream>

using namespace std;
#include<bits/stdc++.h>
int main(){
	int t;
	int n, r;

	cin >> t;
	while (t--) {
		cin >> n >> r;
		vector<int>arr(n);
		int count = 0;

		for (int i = 0; i < n; ++i) {
			cin >> arr[i];
		}
		r = r % n;

		for (int i = 0; count < n; ++i) {
			int cur = i;
			int prev = arr[i];
			do {
				int next = (cur+r) % n;
				int temp = arr[next];
				arr[next] = prev;
				prev = temp;
				cur = next;
				count++;
			} while(i != cur);
		}
		for (auto &i : arr)
			cout << i << " ";
		cout << endl;
	}

