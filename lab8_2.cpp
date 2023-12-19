#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

char findGrade(float point){
    char grade;
    if (point > 90.0){
        grade = 'A';
    }
    else if (point > 75.0 && point <= 90.0){
        grade = 'B';
    }
    else if (point > 60.0 && point <= 75.0){
        grade = 'C';
    }
    else if (point > 45.0 && point <= 60.0){
        grade = 'D';
    }
    else if (point >= 0.0 && point <= 45.0){
        grade = 'F';
    }
    return grade;
}
int main(){
	int N,i = 0;
	cout << "Enter the number of students: ";
	cin >> N;
	string name[N];
	float score[N];	
	
	while(i < N){
		cout << "Name of student " << i+1 << ": ";
        
        cin.ignore();
        getline(cin, name[i]);
        
		cout << "Score of student " << i+1 << ": ";
        
        
        cin >> score[i];
        

        i++;
	}
	
	i = 0;
	cout << "---------------------------------------------\n";
	cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
	cout << "---------------------------------------------\n";
	while(i < N){
		cout << setw(25) << name[i] << setw(8) << score[i] << setw(8) << findGrade(score[i]) << "\n";
		i++;
	} 
	cout << "---------------------------------------------\n";

	return 0;
}