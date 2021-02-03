	/*
	 ------------------------ Linear Search ------------------------
	 -----------------By Using Arrays Traverse Operation -----------
	 ------------------ #100daysofcode Day-3 -----------------------
	 ------------------ Date: 13 JAN,2020--------------------------
	 Author: Muhammad Waqas Nazir, 2nd Year CS student ,CS Dept. VU
	 ---------------------------------------------------------------
	*/
	#include <iostream>
	using namespace std;
	
	int linearSearch(int students[], int a, int age){
	
			for (int i=0; i<a; i++){
			if(students[i]==age){
				cout<<"Your Age is at Index: ";
				return i;
			}
		} return -1;
	}
	
	int main (void){
		cout<<"\t\tAge Finder"<<endl<<endl;
		int a;
		cout<<"Enter The Number of Class Students ";
		cin>>a;
		int students[a];
		
		for (int i=0; i<a; i++){
			
			cout<<"Age of Studnent "<<i+1 << " :";
			cin>>students[i];
		};
		
		int age;
		cout<<"Enter The Age Which You want to check :";
		cin>>age;
		
		cout<<linearSearch(students,a,age);	
	}
	/*
	Output
	              Age Finder
	
	Enter The Number of Class Students 5
	Age of Studnent 1 :20
	Age of Studnent 2 :21
	Age of Studnent 3 :25
	Age of Studnent 4 :18
	Age of Studnent 5 :22
	Enter The Age Which You want to check :18
	Your Age is at Index: 3
	--------------------------------
	*/
