#include <bits/stdc++.h>
using namespace std;

int main(){
    //card
    vector<int> card(9);
    for(int i=0; i<9; i++){
        cin >> card.at(i);
    }
    
    //n, numbers
    int n, num;
    cin >> n;;
    //check
    for(int i=0; i<n; i++){
        cin >> num;
        for(int j=0; j<9; j++){
            if(num == card.at(j)){
                card.at(j) = 0;
            }
            
        }
    }
    string ans = "No";
    for(int i=0; i<3; i++){
        //line
        if(card.at(3*i)==card.at(3*i+1)&&card.at(3*i+1)==card.at(3*i+2)){
            ans = "Yes";
            break;
        }
        //column
        if(card.at(i)==card.at(i+3)&&card.at(i+3)==card.at(i+6)){
            ans = "Yes";
            break;
        }
        //cross
        if(card.at(0)==card.at(4)&&card.at(4)==card.at(8)){
            ans = "Yes";
            break;
        }
        if(card.at(2)==card.at(4)&&card.at(4)==card.at(6)){
            ans = "Yes";
            break;
        }
    }
    /*for(int i=0; i<9; i++){
        cout << card.at(i) << endl;
    }
    */
    cout << ans << endl;
}
