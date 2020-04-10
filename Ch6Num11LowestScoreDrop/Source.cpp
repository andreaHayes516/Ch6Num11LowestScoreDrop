/************************************************
** Author: Andrea Hayes
** Date: April 10th, 2020
** Purpose: Drop the lowest test score and average the rest
** Input: test scores, average, functions-score, average, lowest
** Processing: Find average and drop lowest score 
** Output: Average of 4 highest scores
*************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

void getScore(int&);                              // Function headers 
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);
int main() {

    int score1,score2, score3, score4, score5, lowest;  // Variables

    getScore(score1);    // Call functions
    getScore(score2);
    getScore(score3);
    getScore(score4);
    getScore(score5);
    calcAverage(score1, score2, score3, score4, score5);
    return 0;
}

void getScore(int &score)  // Function to get test scores.
{
    do { 
        cout << "Enter a test score: ";
        cin >> score;
        if (score < 0 || score > 100)
        {
            cout << "Score is invlaid." << endl;
        }
    } while (score < 0 || score > 100);
    
}

void calcAverage(int score1, int score2, int score3, int score4, int score5) // Function to calculate average
{
    int lowest;
    double avg;
    lowest = findLowest(score1, score2, score3, score4, score5);  // Call lowest score function
    avg = ((score1 + score2 + score3 + score4 + score5)-lowest)/4.0;
    cout << fixed << setprecision(2);
    cout << "Average score with lowest score dropped: " << avg;
}

int findLowest(int score1, int score2, int score3, int score4, int score5) // Function to determine lowest score
{
    int lowest;
    lowest = score1;
    if (score2 < lowest)
        lowest = score2;
    if (score3 < lowest)
        lowest = score3;
    if (score4 < lowest)
        lowest = score4;
    if (score5 < lowest)
        lowest = score5;
    return lowest;
}