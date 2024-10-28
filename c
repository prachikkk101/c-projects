#include<iostream>
#include<string>
using namespace std;
int main(){
    int finalresult = 0;
    char playagain;
    int playQuiz(void);
    finalresult = playQuiz();
    cout<<"your score is" <<" "<<finalresult;
    if(finalresult>=8){
        cout<<"you are qualified"<<endl;
        cout<<"Do you want to play again? Yes or No"<<endl;
        cin>>playagain;
        if(playagain=='y'||playagain=='Y'){
            playQuiz();

        }
        else{
            cout<<"ThankYou for playing Quiz"<<endl;
        }

    }
    else{
        cout<<" "<<"Try again"<<endl;
        cout<<"Do you want to play again? yes or no"<<endl;
        cin>>playagain;
        if(playagain=='y'||playagain=='Y'){
            playQuiz();

        }
        else{
            cout<<"ThankYou for playing Quiz"<<endl;
        }
    }
}

int playQuiz(){
    char c;
    char option;
    char a;
    char b;
    char d;
    int score;
    cout<<"------------Welcome to Quiz game------------"<<endl;
    cout<<"-----Please follow the instructions--------"<<endl;
    cout<<"Step1 : Quiz contains total 10 questions"<<endl;
    cout<<"step 2 : You willgiven 1 marks for each right ans"<<endl;
    cout<<"Step 3 : There will be no negative marking"<<endl;
    cout<<"Step 4 : please prese s to start the Quiz"<<endl;
    cout<<"Step 5 : Please select option a,b,c,d"<<endl;
    cout<<"Step 5 : if your score is greater than or equal to 8 you will pass"<<endl;
    cin>>c;
    if(c=='s' || c=='S'){
        cout<<"Q1. solve the expressions (2+2)?"<<endl;
        cout<<"(a) 4 (b) 5 (c) 6 (d) 7 "<<endl;
        cin>>option;
        if(option== 'a' || option=='A'){
             score = score+1;
            
        }
        else {
             score = score+0;
        }
        
        cout<<"Q2. solve the expressions (2*2)?"<<endl;
        cout<<"(a) 4 (b) 5 (c) 6 (d) 7 "<<endl;
        cin>>option;
        if(option== a  || option=='A'){
            score = score+1;
        }
        else {
            score = score+0;
        }
       
        cout<<"Q3. solve the expressions (8-2)?"<<endl;
        cout<<"(a) 4 (b) 5 (c) 6 (d) 7 "<<endl;
        cin>>option;
        if(option== 'c'  || option=='C'){
            score = score+1;
        }
        else {
            score = score+0;
            
        }
        cout<<"Q4. solve the expressions (2+10)?"<<endl;
        cout<<"(a) 4 (b) 5 (c) 6 (d) 12 "<<endl;
        cin>>option;
        if(option== 'd'  || option=='D'){
            score = score+1;
        }
        else{
            score = score+0;
        }
      
        cout<<"Q5. solve the expressions (2*22)?"<<endl;
        cout<<"(a) 4 (b) 5 (c) 44 (d) 7 "<<endl;
        cin>>option;
        if(option== 'c'  || option=='C'){
            score = score+1;
        }
        else {
            score = score+0;
        }
     
         cout<<"Q6. solve the expressions (2-2)?"<<endl;
        cout<<"(a) 0 (b) 5 (c) 6 (d) 7 "<<endl;
        cin>>option;
        if(option== 'a'  || option=='A'){
            score = score+1;
        }
        else {
            score = score+0;
        }
        
        cout<<"Q7. solve the expressions (33+33)?"<<endl;
        cout<<"(a) 66 (b) 5 (c) 6 (d) 7 "<<endl;
        cin>>option;
        if(option== 'a'  || option=='A'){
            score = score+1;
        }
        else {
            score = score+0;
        }
      
        cout<<"Q8. solve the expressions (2+5)?"<<endl;
        cout<<"(a) 4 (b) 5 (c) 6 (d) 7 "<<endl;
        cin>>option;
        if(option== 'd'  || option=='A'){
            score = score+1;
        }
        else {
            score = score+0;
        }
    
        cout<<"Q9. solve the expressions (2+11)?"<<endl;
        cout<<"(a) 13 (b) 5 (c) 6 (d) 7 "<<endl;
        cin>>option;
        if(option== 'a' || option=='A'){
            score = score+1;
        }
        else {
            score = score+0;
        }
     
        cout<<"Q10. solve the expressions (2+4)?"<<endl;
        cout<<"(a) 4 (b) 5 (c) 6 (d) 7 "<<endl;
        cin>>option;
        if(option== 'a' || option=='A'){
            score = score+1;
        }
        else {
            score = score+0;
        }
       

    }
    else{
        cout<<"You have entered wrong  character ; enter s"<<endl;
        playQuiz();
        cin>>c;

    }
    return score;
    return 0;
}
