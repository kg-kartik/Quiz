#include<iostream.h>
#include<fstream.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

class player{
    private:
        char nick[31];
        int score;
    public:
        void end_game(int s1) {
            score = s1;
            cout<<"\n\nPlease enter your name : ";
            cin>>nick;
            cout<<nick<<"'s current score was : "<<score<<endl;
        }
        void fetch_game() {
            cout<<nick<<"\t"<<score<<"\n";
        }
};

void check_life(int arg_lives){
    if(arg_lives == 0){
        cout<<"\n\nYou dont have any lives left. Better luck next time. \n";
        exit(0);
    }
}
int main(){
    int lc;
    ofstream qpp;
    ifstream qpp2;
    ofstream qpp3;
    init:
    clrscr();
    cout<<"\n\n";
    cout<<"  .g8\"\"8q.   `7MMF'   `7MF'  `7MMF'  MMM\"\"\"AMV\n";                    
    cout<<".dP'    `YM.   MM       M      MM    M'   AMV\n";                     
    cout<<"dM'      `MM   MM       M      MM    '   AMV         M           M\n";     
    cout<<"MM        MM   MM       M      MM       AMV          M           M\n";     
    cout<<"MM.      ,MP   MM       M      MM      AMV   ,   mmmmMmmmm   mmmmMmmmm\n"; 
    cout<<"`Mb.    ,dP'   YM.     ,M      MM     AMV   ,M       M           M\n";     
    cout<<"  `\"bmmd\"'      `bmmmmd\"'    .JMML.  AMVmmmmMM       M           M\n";     
    cout<<"        MMb\n";
    cout<<"           `bood'\n";
    cout<<"Menu - Press any key to perform corresponding action\n";
    cout<<"1. Begin the quiz\n";
    cout<<"2. View the stats.\n";
    cout<<"3. Reset the stats\n";
    cout<<"4. About and exit\n\n";
    //char choice = getch();
    char choice;
    cout<<"Please enter an option : ";
    cin>>choice;
    char selected;
    int score=2;
    int lives = 3;
    switch(choice) {
        case '1': /* Starts the quiz */
            //system("cls");
            player bot; //declaring object of the class
            clrscr();
            cout<<"Get ready!";
            //getch();
            cout<<"\n\nLives left : ";
            for(lc=0; lc<lives; ++lc)
                {
                    cout<<" x";
                }
            cout<<"\n\n";
            cout<<"1. Which of the following is not a 'programming language'?\n";
            cout<<"a. Java \tb. JavaScript\nc. HTML \td. C#";
            //selected = getch();
            init1:
            cout<<"\n\nEnter the answer : "; cin>>selected;
            switch(selected) {
                case 'a': 
                case 'A': 
                    cout<<"\n Wrong answer. Java is no doubt an awesome an OOP language.";
                    lives--;
                    break;
                case 'b': 
                case 'B': //
                    cout<<"\n Wrong answer. JavaScript is an amazing language, indeed.";
                    lives--;
                    break;
                case 'c': 
                case 'C': //
                    cout<<"\nBINGO! CORRECT ANSWER!\nHTML is not a programming language. \nOn the planet Earth lies a big herd of people who consider it a programming language.\n";
                    break;
                case 'd': 
                case 'D': //
                    cout<<"\nWrong pick, C# (see-sharp) is a programming language.";
                    lives--;
                    break;
                default: //
                    cout<<"Error, invalid input. please enter the valid input.";
                    goto init1;
            }
            cout<<"\n\nLives left : ";
            for(lc=0; lc<lives; ++lc)
            {
                    cout<<" x";
            }
            cout<<"\n\n2. On which of the following is MacOS based?\n";
            cout<<"a. Unix \tb. Linux\nc. None \td. Darwin";
            //selected = getch();
            init2:
            cout<<"\n\nEnter the answer : "; cin>>selected;
            switch(selected) {
                case 'a': 
                case 'A': //
                    cout<<"\n Wrong answer. Darwin is the right answer.";
                    lives--;
                    break;
                case 'b': 
                case 'B': //
                    cout<<"\n Wrong answer. Darwin is the right answer.";
                    lives--;
                    break;
                case 'c': 
                case 'C': //
                    cout<<"\n Wrong answer. Darwin is the right answer.\n";
                    lives--;
                    break;
                case 'd': 
                case 'D': //
                    cout<<"\n Correct answer! Darwin was released by Apple inc.";
                    break;
                default: //
                    //selected = getch();
                    cout<<"Error, invalid input. please enter the valid input.";
                    goto init2;
                    
            }
            cout<<"\n\nLives left : ";
            for(lc=0; lc<lives; ++lc)
            {
                cout<<" x";
            }
            cout<<"\n\n3. Which of the following is a version control system made by Torvalds Linus?\n";
            cout<<"a. SVN \tb. Git\nc. Perforce \td. Plastic SCM";
            init3:
            cout<<"\n\nEnter the answer : "; cin>>selected;
            switch(selected) {
                case 'a': 
                case 'A': //
                    cout<<"\n Wrong answer. Git is the right answer.";
                    lives--;
                    break;
                case 'b': 
                case 'B': //
                    cout<<"\n Correct answer! Git-scm is made by Torvalds linus.";
                    break;
                case 'c': 
                case 'C': //
                    cout<<"\n Wrong answer. Git is the right answer.\n";
                    lives--;
                    break;
                case 'd': 
                case 'D': //
                    cout<<"\n Wrong answer. Git is the right answer.";
                    lives--;
                    break;
                default: //
                    //selected = getch();
                    cout<<"Error, invalid input. please enter the valid input.";
                    goto init3;  
            }
            check_life(lives);
            cout<<"\n\nLives left : ";
            for(lc=0; lc<lives; ++lc){
                cout<<" x";
            }

            cout<<"\n\n4. Which of the following JS frameworks is widely used to publish desktop applications? \n";
            cout<<"a. Angular \tb. React\nc. Vue \td. Electron";
            //selected = getch();
            init4:
            cout<<"\n\nEnter the answer : "; cin>>selected;
            switch(selected) {
                case 'a': 
                case 'A': //
                    cout<<"\n Nope. Electron is the right answer.";
                    lives--;
                    break;
                case 'b': 
                case 'B': //
                    cout<<"\n Wrong pick! Electron is the right answer. ";
                    lives--;
                    break;
                case 'c': 
                case 'C': //
                    cout<<"\n Nope. Electron is the right answer.";
                    lives--;
                    break;
                case 'd': 
                case 'D': //
                    cout<<"\n Electron is used to make desktop apps very easily.";
                    break;
                default: //
                    //selected = getch();
                    cout<<"Error, invalid input. please enter the valid input.";
                   goto init4; 
            }
            check_life(lives);
            cout<<"\n\nLives left : ";
            for(int lc=0; lc<lives; ++lc)
            {
                cout<<" x";
            }
            cout<<"\n\n5. Which of the following is NOT a Content Management System(CMS)? \n";
            cout<<"a. Drupal \tb. WordPress\nc. Magento \td. Nginx";
            //selected = getch();
            init5:
            cout<<"\n\nEnter the answer : "; cin>>selected;
            switch(selected) {
                case 'a': 
                case 'A': //
                    cout<<"\n Wrong answer. Nginx is the right answer.";
                    break;
                case 'b': 
                case 'B': //
                    cout<<"\n Wrong answer. Nginx is the right answer";
                    break;
                case 'c': 
                case 'C': //
                    cout<<"\n Wrong answer. Nginx is the right answer.\n";
                    break;
                case 'd': 
                case 'D': //
                    cout<<"\n Correct answer. Nginx is not a CMS. It is a fast server platform.";
                    break;
                default: //
                    //selected = getch();
                    cout<<"Error, invalid input";
                    goto init5;
                            
            }
            score += lives;
            bot.end_game(score);
            qpp.open("quizbot.dat", ios::binary | ios::app);
            qpp.write((char *)&bot, sizeof(bot));
            qpp.close();
            break;
        
        case '2': /* Presents Quiz++ stats */
            cout<<"USERNAME\tSCORE\n\n";
            qpp2.open("quizbot.dat", ios::binary);
            if(!qpp2){
                cout<<"Cannot open the file.";
                goto init;
            }
            while(qpp2.read((char *)&bot, sizeof(bot))){
                bot.fetch_game();
            }
           

            qpp2.close();
            break;
        
        case '3': /* Resets the stats by clearing the file used */

            remove("quizbot.dat");
            goto init;
        
        case '4': /* About the software/code and author */
            cout<<"\n\nCode by : Kartik Goel\n";
            cout<<"For: Computer Science project submission\n";
            break;
        default: /* Does absolutely nothing but redirects back to menu*/
            goto init;
    }
    //getch();
    return 0;
}
