// #include <bits/stdc++.h>
// using namespace std;



// int main(int argc, char const *argv[])
// {
//     vector<int> arr;
//     arr.emplace_back(1);
//     arr.emplace_back(2);
//     arr.emplace_back(2);
//     arr.emplace_back(3);
//     arr.emplace_back(4);
//     return 0;

//     // int n = arr.size();
//     int n = 5;
//     int m = *max_element(arr.begin(),arr.end());
//     vector<int> x(m+1,0);
//     for(int i=0;i<n;i++){
//         x[arr[i]]++;
//     }
// int res;
//     for(int i=0;i<m+1;i++){
//         if(x[i]>1){
//             res = i;
//         }
//     }

// cout<<res;
    
// }
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string str;
//     cin>>str;
//     int n = str.size();
//     stack<char>st;
//     for(int i = 0;i<n;i++){
//         st.push(str[i]);
//     }
// string res ;
//     for(int i = 0 ; i<n ; i++){
//         res = res + st.top();
//         st.pop();
//     }

// cout<<res;

    
//     // return 0;
// }


// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <bits/stdc++.h>
// using namespace std;


// void rev(stack<char> &st){
//     string res;
//     while(!st.empty()){
//         res = res+st.top();
//         st.pop();
//     }

//     cout<<res;
// }

// int main()
// {
    
//     string str;
//     cin>>str;
//     int n = str.size();
//     stack<char>st;

//     for(int i = 0;i<n;i++){
//         if(str[i]!=' '){
//         st.push(str[i]);
//         }

//         else rev(st);
//     }


// }
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++




// #include <bits/stdc++.h>
// using namespace std;

// void solve(queue<int>& q, int k);


// queue<int> reverseFirstK(queue<int> q, int k) {
// 	solve(q, k);
// 	int s = q.size() - k;
// 	while (s-- > 0) {
// 		int x = q.front();
// 		q.pop();
// 		q.push(x);
// 	}
// 	return q;
// }

// void solve(queue<int> & q, int k) {
// 	if (k == 0) return;
// 	int e = q.front();
// 	q.pop();
// 	solve(q, k - 1);
// 	q.push(e);
// }

// int main() {
// 	queue<int> queue;
// 	queue.push(10);
// 	queue.push(20);
// 	queue.push(30);
// 	queue.push(40);
// 	queue.push(50);
// 	queue.push(60);
// 	queue.push(70);
// 	queue.push(80);
// 	queue.push(90);
// 	queue.push(100);

// 	int k = 6;
// 	queue = reverseFirstK(queue, k);

// 	while (!queue.empty()) {
// 		cout << queue.front() << " ";
// 		queue.pop();
// 	}
// 	return 0;
// }

// ------------------------------------------------------------------------------



// #include <bits/stdc++.h>
// using namespace std;


// char tree[10];
// int root(char key){
// 	if(tree[0]!="/0"){
// 		cout<<"--> Tree already has a Root <--";
// 	}
// 	else{
// 		tree[0]=key;
// 		return 0;
// 	}
// }

// int set_left(char key,int parent){
// 	if(tree[parent]=="/0"){
// 		cout<<"--> No Parent Found <--";
// 	}
// 	else{
// 		tree[(parent*2)+1]=key;
// 		return 0;
// 	}
// }


// int set_right(char key,int parent){
// 	if(tree[parent]=="/0"){
// 		cout<<"--> No Parent Found <--";
// 	}
// 	else{
// 		tree[(parent*2)+2]=key;
// 		return 0;
// 	}
// }


// int main()
// {
// 	// int n;
// 	// cout<<"ENTER THE SIZE OF TREE - ";
// 	// cin>>n;
// 	root(10);

// 	return 0;
// }


//////////////////////////////////////////////////////////////////////////////////


