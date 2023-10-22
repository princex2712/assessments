// • Write a program to demonstrate a Rock Paper Scissor Game.
// • Display the Menu using appropriate codes.
// • For Menu kinds of Programming , use the core logic of Loops/conditional statements.
// • You need to strictly follow the syntaxes’s of that logic which you are using.
// • Write the necessary comments for better understanding to you as well as to the
// faculty.
// Project Requirements :
// • Invoke the particular Method/Function through object , in which you are writing your
// logic.
// • Use this function :
// • srand(time(0));
// • (rand()%3)+1; -> Generating for random no.s from computer’s end.
// • Use library header files i.e #include<stdlib.h> and #include<ctime> for above logic if
// necessary.
// • Add the necessary comments for better understanding of code.
#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;

//  Creating class for Game
class Game{
public:

//  Initialize the variables
    string name;
    int maxRound,computerChoice,usrWins=0,comWins=0;

//  Creating Constructor to store the value
    Game(string nm, int mxRnd){
        name = nm;
        maxRound = mxRnd;
    }

//  Creating function for Game and logic of Game
    void cmpChoice(int chc){
        computerChoice = (rand()%3)+1;;
        cout<<"Computers Choice: "<<computerChoice<<endl;
        
        if(chc == 1){
            if(computerChoice==1){
                cout<<"**Draw**"<<endl;
            }else if(computerChoice==2){
                cout<<"**Computer Wins**"<<endl;
                comWins++;
            }else{
                cout<<"**"<<name<<" Wins**"<<endl;
                usrWins++;
            }
        }else if(chc == 2){
            if(computerChoice==2){
                cout<<"**Draw**"<<endl;
            }else if(computerChoice==3){
                cout<<"**Computer Wins**"<<endl;
                comWins++;
            }else{
                cout<<"**"<<name<<" Wins**"<<endl;
                usrWins++;
            }
        }else if(chc == 3){
            if(computerChoice==3){
                cout<<"**Draw**"<<endl;
            }else if(computerChoice==1){
                cout<<"**Computer Wins**"<<endl;
                comWins++;
            }else{
                cout<<"**"<<name<<" Wins**"<<endl;
                usrWins++;
            }
        }else{
            cout<<"\nPlease Enter Valid Input From 1 to 3"<<endl;
        } 
    }

    
};
int main(){

//  Inisialize variable
    string userName;
    int maxRound,choice,round=1;

//  Taking Input
    cout<<"\n*****************"<<endl;
    cout<<"      NAME   "<<endl;
    cout<<"*****************\nEnter Your name: ";
    cin>>userName;

    cout<<"\nHow Many Rounds You Want To Play? :";
    cin>>maxRound;

//  creating class object and passing values 
    Game g(userName,maxRound);

//  Loop on the based on userInput
    for(int i=1;i<=maxRound;i++){
        cout<<"\n-->Round-"<<round<<"<--"<<endl;
        cout<<"*-"<<userName<<"'s Score: "<<g.usrWins<<endl;
        cout<<"*-Computer's Score: "<<g.comWins<<endl;
        cout<<"\n1)Rock\n\n2)Paper\n\n3)Scissor\n\nEnter Your Choice "<<userName<<": ";
        cin>>choice;
        g.cmpChoice(choice);
        round++;
    }

//  Declaring winner based on class values
    if(g.usrWins==g.comWins){
        cout<<"***Match Draw***"<<endl;
    }else if(g.usrWins>g.comWins){
        cout<<"***"<<userName<<" Wins***"<<endl;
    }else{
        cout<<"\n***Computer Wins***"<<endl;
    }
    return 0;
}