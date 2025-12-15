#include <iostream>
#include <vector>
#include <map>

using namespace std;

void currentGrade() {
    // 1 - ask user the different assignment types included in course (homeworks, quizzes, exams, etc.) (sort by name)
    // 2 - for however many the user inputs, loop through one by one and ask the user to input the weight of each assigment type
    // 3 - ask the user how many of each assignment type are within the course
    
    // run below for each individual assignment type 
    // ask user how many assignments within that assignment type have been completed
    // for each assignment type, ask what grade they got (ex. 20/20, 12/20, etc.) - run another function written to calculate based off input 

    // output current grade to user based off information given

    string assignmentTypeInput = ""; 
    double assignmentWeightsInput; 
    //double assignmentWeight;
    //int assignments[assignmentType];
    map<string, double> assignmentsList;

    vector<string> assignmentTypes; // keys  
    vector<double> assignmentWeights; // values 
    // 1 

    while (assignmentTypeInput != "e") { // while the user input for assignment type is not 'e'
        // assignment types 
        cout << "Insert the assignment type (type e to exit): " << endl;
        cin >> assignmentTypeInput; // insert input for assignment type 

        if (assignmentTypeInput == "e") {
            break; 
        }

        assignmentTypes.push_back(assignmentTypeInput); // push back input into assignmentTypes vector 
        // assignment weights
        cout << "Insert it's equivalent weight (include decimals): " << endl; 
        cin >> assignmentWeightsInput; // insert input for assignment weights 
        assignmentWeights.push_back(assignmentWeightsInput); // push back input into assignmentWeights vector
    }

    cout << "-----------------" << endl; 

    for (int i = 0; i < assignmentTypes.size(); i++) {
        cout << assignmentTypes[i] << ": " << assignmentWeights[i] << endl;
    }

    /*cout << "Insert the assignment weight for each assignment entered: " << endl; 

    for (size_t i = 0; i < assignmentsList.size(); i++) {
        cout << assignmentsList[i] << endl; 
    }*/

    /*for (size_t i = 0; i < assignmentsList.size(); i++) {

    }*/
    
    // 2
    
    /*for (int i = 0; i <= assignments.size(); i++) { // 
        cout << "hello" << endl; 
    }*/

    //cout << "here" << endl; 
}

int main() {
    /* 
    ask user if they would like generate current grade (1) or potential grade (2). 
    if 1 is input, run currentGrade on main. 
    */ 
   currentGrade();

   return 0; 
}