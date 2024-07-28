#include <iostream>
#include <string>
using namespace std;

int main(){

    for(int r = 0; r <= 1; r++){
        int arr[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
        string resp;
    

        cout << "    1    2    3 " << endl;
        cout << " a    |    |    " << endl;
        cout << "  --------------" << endl;
        cout << " b    |    |    " << endl;
        cout << "  --------------" << endl;
        cout << " c    |    |    " << endl;

   
        for(int i = 1; i <= 9; i++){
            int Pnum = 1;
            if (i%2 == 0){
                Pnum = 2;
            }

            string play1, play2, play3, play4, play5, play6, play7, play8, play9;

            cout << "Player " << Pnum << ": ";
            cin >> resp;
            cout << endl;

            if (resp == "a1" && arr[0][0] == 0){
                arr[0][0]=Pnum;
            }else if(resp == "a2" && arr[0][1] == 0){
                arr[0][1]=Pnum;
            }else if(resp == "a3" && arr[0][2] == 0){
                arr[0][2]=Pnum;
            }else if(resp == "b1" && arr[1][0] == 0){
                arr[1][0]=Pnum;
            }else if(resp == "b2" && arr[1][1] == 0){
                arr[1][1]=Pnum;
            }else if(resp == "b3" && arr[1][2] == 0){
                arr[1][2]=Pnum;
            }else if(resp == "c1" && arr[2][0] == 0){
                arr[2][0]=Pnum;
            }else if(resp == "c2" && arr[2][1] == 0){
                arr[2][1]=Pnum;
            }else if(resp == "c3" && arr[2][2] == 0){
                arr[2][2]=Pnum;
            }else {
                cout << "Not a Valid Response" << endl;
                i = i - 1;
            }

            if (arr[0][0] == 1){
                play1 = "x";
            }else if(arr[0][0] == 2){
                play1 = "o";
            }else if(arr[0][0] == 0){
                play1 = " ";
            }
            if (arr[0][1] == 1){
                play2 = "x";
            }else if(arr[0][1] == 2){
                play2 = "o";
            }else if(arr[0][1] == 0){
                play2 = " ";
            }
            if (arr[0][2] == 1){
                play3 = "x";
            }else if(arr[0][2] == 2){
                play3 = "o";
            }else if(arr[0][2] == 0){
                play3 = " ";
            }
            if (arr[1][0] == 1){
                play4 = "x";
            }else if(arr[1][0] == 2){
                play4 = "o";
            }else if(arr[1][0] == 0){
                play4 = " ";
            }
            if (arr[1][1] == 1){
                play5 = "x";
            }else if(arr[1][1] == 2){
                play5 = "o";
            }else if(arr[1][1] == 0){
                play5 = " ";
            }
            if (arr[1][2] == 1){
                play6 = "x";
            }else if(arr[1][2] == 2){
                play6 = "o";
            }else if(arr[1][2] == 0){
                play6 = " ";
            }
            if (arr[2][0] == 1){
                play7 = "x";
            }else if(arr[2][0] == 2){
                play7 = "o";
            }else if(arr[2][0] == 0){
                play7 = " ";
            }
            if (arr[2][1] == 1){
                play8 = "x";
            }else if(arr[2][1] == 2){
                play8 = "o";
            }else if(arr[2][1] == 0){
                play8 = " ";
            }
            if (arr[2][2] == 1){
                play9 = "x";
            }else if(arr[2][2] == 2){
                play9 = "o";
            }else if(arr[2][2] == 0){
                play9 = " ";
            }

            cout << "    1    2    3 " << endl;
            cout << " a  "<< play1 <<"  |  "<< play2 <<"  |  "<< play3 <<"  " << endl;
            cout << "  --------------" << endl;
            cout << " b  "<< play4 <<"  |  "<< play5 <<"  |  "<< play6 <<"  " << endl;
            cout << "  --------------" << endl;
            cout << " c  "<< play7 <<"  |  "<< play8 <<"  |  "<< play9 <<"  " << endl;

            if (play4 != " " && play4 == play5 && play4 == play6){
                if (play4 == "x"){
                    cout << "Congrats player 1, you win!";
                } else if (play4 == "o"){
                    cout << "Congrats player 2, you win!";
                }
                i = 9;
            }
            if (play2 != " " && play2 == play5 && play2 == play8){
                if (play2 == "x"){
                    cout << "Congrats player 1, you win!";
                } else if (play2 == "o"){
                    cout << "Congrats player 2, you win!";
                }
                i = 9;
            }
            if (play1 != " " && play1 == play2 && play1 == play3){
                if (play1 == "x"){
                    cout << "Congrats player 1, you win!";
                } else if (play1 == "o"){
                    cout << "Congrats player 2, you win!";
                }
                i = 9;
            }
            if (play1 != " " && play1 == play5 && play1 == play9){
                if (play1 == "x"){
                    cout << "Congrats player 1, you win!";
                } else if (play1 == "o"){
                    cout << "Congrats player 2, you win!";
                }
                i = 9;
            }
            if (play7 != " " && play7 == play4 && play7 == play1){
                if (play7 == "x"){
                    cout << "Congrats player 1, you win!" << endl;
                } else if (play7 == "o"){
                    cout << "Congrats player 2, you win!" << endl;
                }
                i = 9;
            }
            if (play3 != " " && play3 == play5 && play3 == play7){
                if (play3 == "x"){
                    cout << "Congrats player 1, you win!";
                } else if (play3 == "o"){
                    cout << "Congrats player 2, you win!";
                }
                i = 9;
            }
            if (play3 != " " && play3 == play6 && play3 == play9){
                if (play3 == "x"){
                    cout << "Congrats player 1, you win!";
                } else if (play3 == "o"){
                    cout << "Congrats player 2, you win!";
                }
                i = 9;
            }
            if (play7 != " " && play7 == play8 && play7 == play9){
                if (play7 == "x"){
                    cout << "Congrats player 1, you win!";
                } else if (play7 == "o"){
                    cout << "Congrats player 2, you win!";
                }
                i = 9;
            }
        }
        string play;
        for(int a = 1; a <= 1; a++){
            cout << endl << "Would you like to play again? (yes or no)" << endl;
            cin >> play;
            if (play == "yes"){
                r--;
            } else if(play == "no"){
                r = r + 2;
            } else {
                cout << "Not a valid response" << endl;
                a--;
            }
        }
    
    }

    return 0;
}