/*
PATTERN NUMBER LADDER
Take N (number of rows), print the following pattern (for N = 4)

1
2 3
4 5 6
7 8 9 10


Constraints:
0 < N < 100

Sample Input:
4
Sample Output:
1  
2	3  
4	5	6  
7	8	9	10
Explanation:
Each number is separated from other by a tab.
*/


#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter n : ";
	cin>>n;
	int line=1,no=1;
	while(line<=n){
		int j=1;
		while(j<=line){
			cout<<no<<" ";

			no=no+1;
			j=j+1;
		}
		cout<<endl;
		line=line+1;
	}




	return 0;
}