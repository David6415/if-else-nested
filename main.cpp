#include <iostream>
using namespace std;

int main(){
    
    int frank_score {};
    int bill_score {};
    
    cout << "Let's compare two scores: Frank's and Bill's." << endl;
    
    cout << "Enter Frank's score: ";
    cin >> frank_score;
    
    cout << "Enter Bill's score: ";
    cin >> bill_score;
    
    if (frank_score != bill_score){
        if (frank_score > bill_score){
            cout << "Frank wins!!" << endl;
        } else {
            cout << "Bill wins!!" << endl;
        }
    } else {
        cout << "It's a tie!!" << endl;
    }

    return 0;
}

