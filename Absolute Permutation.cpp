#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
		int i,j;
    	int n;
    	int k;//²î 
    	cin>>n>>k;
    	if(k==0){
    		for(i=0; i<n; i++)
				cout<<i+1<<" ";
			cout<<endl; 
			continue;
		}
    		
    	if(n%(k*2)==0){
    		vector<int>a(n);

    		for(i=0; i<n; i+=k*2){
    			for(j=i; j<i+k; j++)
    				a[j]=j+1+k;
    			for(; j<i+2*k; j++)
    				a[j]=j+1-k;
			}
			
			for(i=0; i<n; i++)
				cout<<a[i]<<" ";
			cout<<endl;	
		}
		
		else
			cout<<-1<<endl;
    		
	}
    
    return 0;
}

