#include <iostream>
using namespace std;

int main() {
	int N;
	cout<< " enter number of students";
	cin>> N;
	
	int fee;
	int totalIncome = 0;
	int intensiveCount = 0;
	
	for (int i = 1; i<=N; i++){
	
	cout<< " enter fee for student" << i << ":";
	
	totalIncome += fee;
	
	if (fee > 12000){
		cout<< " Intensive Course" << endl;
		intensiveCount++;
	}
}

    cout << " /nTotal Income = " << totalIncome << endl;
    cout<< " Intensive Course students = "<< intensiveCount << endl;
    
    return 0;
}
