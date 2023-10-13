#include<iostream>

using namespace std;

int playQuiz(void);

int main(){
    
    
    cout<<"-----welcome to the Quiz-----"<<endl;
    cout<<"Please read the instructions before starting the quiz."<<endl;
    cout<<"There are 5 questions in the quiz."<<endl;
    cout<<"For each correct answer you'll get +5 points and -1 for each wrong answer."<<endl;
    cout<<"If you score full marks, you'll get 2 bonus questions."<<endl;
    cout<<endl;
    cout<<"To start the quiz, please  \"s\" "<<endl;

    int ans= playQuiz();
    cout<< " your score is "<< ans;

    
    
    return 0;
}

int playQuiz(void){

    char quizStart;
    cin>>quizStart;
    int score=0;
    char userBonusQRespnse;

    if(quizStart=='s' || quizStart=='S'){
        cout<<"Q1. Who is the author of the book \"Siddhartha\""<<endl;
        cout<< "a)Richard Powers  b)Hermann Hesse  c)Mogan Housel  d)I want to skip"<<endl;
        char option;
        cin>> option;
        if(option=='b' || option=='B'){
            cout<<"Correct answer"<<endl;
            score= score+5;
        }
        else if(option=='d' || option=='D'){
            score= score+0;
        }
        else{
            cout<<"Wrong answer"<<endl;
            score= score-1;
        }

        cout<<"Q2. Who was harry Potter Godfather?"<<endl;
        cout<< "a)Severus Snape  b)Albus Dumbledore  c)Sirius Black  d)I want to skip"<<endl;
        // char option;
        cin>> option;
        if(option=='c' || option=='C'){
            cout<<"Correct answer"<<endl;
            score= score+5;
        }
        else if(option=='d' || option=='D'){
            score= score+0;
        }
        else{
            cout<<"Wrong answer"<<endl;
            score= score-1;
        }

        cout<<"Q3. What artist has the most streams on Spotify?"<<endl;
        cout<< "a)Taylor Swift  b)Drake  c)The Weekend  d)I want to skip"<<endl;
        // char option;
        cin>> option;
        if(option=='b' || option=='B'){
            cout<<"Correct answer"<<endl;
            score= score+5;
        }
        else if(option=='d' || option=='D'){
            score= score+0;
        }
        else{
            cout<<"Wrong answer"<<endl;
            score= score-1;
        }

        cout<<"Q4. What sports car company manufactures the 911"<<endl;
        cout<< "a)Porche  b)Alpha Romeo  c)Ferrari  d)I want to skip"<<endl;
        // char option;
        cin>> option;
        if(option=='a' || option=='A'){
            cout<<"Correct answer"<<endl;
            score= score+5;
        }
        else if(option=='d' || option=='D'){
            score= score+0;
        }
        else{
            cout<<"Wrong answer"<<endl;
            score= score-1;
        }

        cout<<"Q5. In what country is the Chernobyl nuclear plant located?"<<endl;
        cout<< "a)Ukraine  b)Moldova  c)Uzbekistan  d)I want to skip"<<endl;
        // char option;
        cin>> option;
        if(option=='a' || option=='A'){
            cout<<"Correct answer"<<endl;
            score= score+5;
        }
        else if(option=='d' || option=='D'){
            score= score+0;
        }
        else{
            cout<<"Wrong answer"<<endl;
            score= score-1;
        }
        

    }
    else{
        cout<< "To start the quiz, please  \"s\". "<<endl;
    }

    // return score;

    if(score==25){
        cout<<" You will get bonus questions"<<endl;
        cout<<"Press y to play n to quit"<<endl;
        cin>>userBonusQRespnse;
        if(userBonusQRespnse=='y'|| userBonusQRespnse=='Y'){
            cout<<"Q6.Which planet has the most moons?"<<endl;
            cout<< "a)Jupiter  b)Saturn  c)Uranus  d)Mars"<<endl;
            char option;
            cin>> option;
            if(option=='b' || option=='B'){
            cout<<"Correct answer"<<endl;
            score= score+5;
             }

            else{
            cout<<"Wrong answer"<<endl;
            score= score-1;
            }
        }
        else{
            cout<< "Thank you for playing the quiz."<<endl;
        }
        
    }

    return score;


    
}