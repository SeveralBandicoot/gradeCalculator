#include <iostream>

using namespace std;

void currentGrade() {
    // 1 - ask user for the number of different assignment types included in course (homeworks, quizzes, exams, etc.) (sort by name)
    // 2 - for however many the user inputs, loop through one by one and ask the user to input the weight of each assigment type
    // 3 - ask the user how many of each assignment type are within the course
    
    // run below for each individual assignment type 
    // ask user how many assignments within that assignment type have been completed
    // for each assignment type, ask what grade they got (ex. 20/20, 12/20, etc.) - run another function written to calculate based off input 

    // output current grade to user based off information given

    //int assignmentType = 1; 
    //int assignments[assignmentType];
    // 1 
    cout << "Insert the number of assignment types in your course:\n";
    for (int i = 0; i < 2; i++) { // 
        cout << "hello" << endl; 
    }
    cin >> assignmentType; 
    // 2 
}

int main() {
    /* 
    ask user if they would like generate current grade (1) or potential grade (2). 
    if 1 is input, run currentGrade on main. 
    */ 
   currentGrade();
}