
/*
 Author: Berdimyrat Mammedov
 Student Id: 885701426  
 Description:
 
 A particular talent competition has 5 judges, each of whom awards a score between 0 and
 10 to each performer. Fractional scores, such as 8.3, are allowed. A performer’s ﬁnal score
 is determined by dropping the highest and lowest score received, then averaging the 3
 remaining scores. Write a program that uses these rules to calculate and display a
 contestant’s score. It should include the following functions:
 • void getJudgeData() should ask the user for a judge’s score, store it in a reference
 parameter variable, and validate it. This function should be called by main once for each
 of the 5 judges.
 • double calcScore() should calculate and return the average of the 3 scores that
 remain after dropping the highest and lowest scores the performer received. This
 function should be called just once by main and should be passed the 5 scores.
 Two additional functions, described below, should be called by calcScore, which uses the
 returned information to determine which of the scores to drop.
 • double findLowest() should find and return the lowest of the 5 scores passed to it.
 • double findHighest() should find and return the highest of the 5 scores passed to it.
 */
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

void getJudgeData();
double calcScore(double arg1, double arg2, double arg3, double arg4, double arg5);

void display();
double score1=0.0;
double score2=0.0;
double score3=0.0;
double score4=0.0;
double score5=0.0;
// Main Function
int main () {
    
    getJudgeData();
    calcScore(score1, score2, score3, score4, score5);
    display();
    
    return 0;
    
    
}

// Get scores from Judge and validate
void getJudgeData() {
    cout<<"Type scores between 0 and 10"<<endl;
    cout<<"Type score for judge 1"<<endl;
    cin>>score1;
    while (score1>10 || score1<0) {
        cout<<"Type scores must be between 0 and 10"<<endl;
        cout<<"Type score for judge 1 again"<<endl;
        cin>>score1;
    }
    cout<<"Type score for judge 2"<<endl;
    cin>>score2;
    while (score2>10 || score2<0) {
        cout<<"Type scores must be between 0 and 10"<<endl;
        cout<<"Type score for judge 2 again"<<endl;
        cin>>score2;
    }
    cout<<"Type score for judge 3"<<endl;
    cin>>score3;
    while (score3>10 || score3<0) {
        cout<<"Type scores must be between 0 and 10"<<endl;
        cout<<"Type score for judge 3 again"<<endl;
        cin>>score3;
    }
    cout<<"Type score for judge 4"<<endl;
    cin>>score4;
    while (score4>10 || score4<0) {
        cout<<"Type scores must be between 0 and 10"<<endl;
        cout<<"Type score for judge 4 again"<<endl;
        cin>>score4;
    }
    cout<<"Type score for judge 5"<<endl;
    cin>>score5;
    while (score5>10 || score5<0) {
        cout<<"Type scores must be between 0 and 10"<<endl;
        cout<<"Type score for judge 5 again"<<endl;
        cin>>score5;
    }
    
}


//Find Lowest function

double findLowest (double score1, double score2, double score3, double score4, double score5)
{
    return min({score1, score2, score3, score4, score5});
}

//Find Highest funciton
double findHighest (double score1, double score2, double score3, double score4, double score5)
{
    return max({score1, score2, score3, score4, score5});
}

//Calculate function removing highest and lowest score

double calcScore(double score1, double score2, double score3, double score4, double score5) {
    
    return ((score1+score2+score3+score4+score5)-(findLowest(score1, score2, score3, score4, score5)+findHighest(score1, score2, score3, score4, score5)))/3;
    
    return 0;
}
// displaying function for proper display:
void display() {
    cout<< fixed<<showpoint<<setprecision(2);
    cout<<"The average score for participant is : \n";
    
    cout<<calcScore(score1, score2, score3, score4, score5)<<endl;
    
}



