#include <iostream>
#include <vector>

using namespace std;

void currentGrade() {
    // 1 - ask user the different assignment types included in course (homeworks, quizzes, exams, etc.) (sort by name)
    // 2 - for however many the user inputs, loop through one by one and ask the user to input the weight of each assigment type
    // 3 - ask the user how many of each assignment type are within the course
    
    // run below for each individual assignment type 
    // ask user how many assignments within that assignment type have been completed
    // for each assignment type, ask what grade they got (ex. 20/20, 12/20, etc.) - run another function written to calculate based off input 

    // output current grade to user based off information given

    // data variables
    string assignmentTypeInput = ""; 
    int assignmentTypeAmount = 0; 

    double weightedSum = 0.0; 
    double totalWeight = 0.0; 
    double assignmentWeightsInput; 

    // data lists
    vector<string> assignmentTypesList; // keys  
    vector<int> assignmentTypeAmountList; // amount of assignments per type in the course
    vector<double> gradesByCatList; 
    vector<double> assignmentWeightsList; // values 
    // 1 
    cout << "\n\n\n==========INSERT ASSIGNMENTS AND THEIR EQUIVALENET WEIGHTS==========" << endl; 
    while (assignmentTypeInput != "e") { // while the user input for assignment type is not 'e'
        // assignment types 
        cout << "--------------------------------------------------------------------" << endl;
        cout << "Insert the assignment type (quiz, test, homework, etc.) type e to exit: ";
        cin >> assignmentTypeInput; // insert input for assignment type 

        if (assignmentTypeInput == "e") { // if user input is 'e', break out of loop 
            break; 
        }

        assignmentTypesList.push_back(assignmentTypeInput); // push back input into assignmentTypes vector 
        // assignment weights
        cout << "Insert it's equivalent weight (in percentages): "; 
        cin >> assignmentWeightsInput; // insert input for assignment weights 
        assignmentWeightsList.push_back(assignmentWeightsInput); // push back input into assignmentWeights vector
    }

    cout << "\n\n\n==========INSERT FREQUENCY OF EACH ASSIGNMENT TYPE==========" << endl; 
    // 3 - ask the user how many of each assignment have been done so far 
    for (int i = 0; i < assignmentTypesList.size(); i++) {
        cout << "--------------------------------------------------------------------" << endl;
        cout << "How many " << assignmentTypesList[i] << "\'s have been done so far in this course: "; 
        cin >> assignmentTypeAmount; 
        assignmentTypeAmountList.push_back(assignmentTypeAmount);
    }

    cout << "\n\n\n==========INSERT SCORES FOR EACH ASSIGNMENT DONE==========" << endl; 
    // for each assignment type, ask what grade they got (ex. 20/20, 12/20, etc.) - run another function written to calculate based off input 
    for (int i = 0; i < assignmentTypesList.size(); i++) {
        double actualPoints = 0; // the points earned 
        double totalPoints = 0; // total possible points 
        double gradePerCat = 0.0; 
        
        
        double input; 
        double gradeInput;

        vector<double> grades; 
        
        cout << "For " << assignmentTypesList[i] << "\'s..." << endl; 
        for (int j = 0; j < assignmentTypeAmountList[i]; j++) {
            cout << "--------------------------------------------------------------------" << endl;
            cout << "What was the total possible points for " << assignmentTypesList[i] << " " << j + 1 << ": "; 
            cin >> input; 
            totalPoints += input; // add on the input into totalPoints 

            cout << "What was the points earned for " << assignmentTypesList[i] << j << ": "; 
            cin >> input;
            actualPoints += input; // add on the input into actualPoints

            gradeInput = actualPoints / totalPoints; // calculate grade
            gradesByCatList.push_back(gradeInput);
        }
        weightedSum += gradesByCatList[i] * assignmentWeightsList[i]; 
        totalWeight += assignmentWeightsList[i];
    }

    cout << "\n\n\n==========CURRENT OVERALL GRADE PRECENTAGE==========" << endl;

    double finalGrade = weightedSum / totalWeight;
    
    cout << "Total Grade: " << finalGrade * 100 << "%" << endl; 

}

int main() {
    /* 
    ask user if they would like generate current grade (1) or potential grade (2). 
    if 1 is input, run currentGrade on main. 
    */ 
   currentGrade();

   return 0; 
}