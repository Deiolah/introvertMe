#include <iostream>
using namespace std;


        int main()
        {
        //Step one, come up with the prompt

        //Step two, make an array

        string questions [] = { "1. When someone unexpectedly invites you to a big social event, your first thought is: ",
                                "2. You're at a party, and the music is blasting. Your inner voice says: ",
                                "3. When someone asks, 'Why are you so quiet?' you secretly think: ",
                                "4. Your ideal Friday night involves: ",
                                "5. It's your turn to give a presentation at work, and your inner thoughts scream: ",

                              };

        //Create another array to house the options, 4 columns
        string options[][4] =  { //The curly brace that starts the array of options (a 2-D Array)

                                {
                                    "A. 'Oh, yay! More people to meet!'",
                                    "B 'Let me check my schedule... Ah, sorry, I have plans to organize my sock drawer.'",
                                    "C. 'Is there a way to attend without actually attending?'",
                                    "D. 'Is it too late to move to a deserted island?'"
//Options for Question 1
                                },

                                {
                                   "A. 'Time to dance like no one's watching!'",
                                   "B. 'I wonder if they'll notice if I hide in the bathroom for a while?'",
                                    "C. 'Can I request some classical music? No? Okay, then.'",
                                    "D. 'If I pretend to be a potted plant, maybe no one will talk to me.'"
//Options for Question 2
                                },


                                {
                                   "A. 'I'm just observing and taking in all the wisdom around me.' ",
                                   "B. 'Why are you so loud? Can't we communicate telepathically?' ",
                                   "C. 'Shh... I'm actually planning to take over the world.' ",
                                   "D. 'If I say something, will you promise to stop asking questions?' "
//Options for Question 3
                                },


                                {

                                   "A. Partying until the sun comes up!",
                                   "B. Snuggled up at home with a good book or movie.",
                                   "C. A quiet dinner with a few close friends.",
                                   "D. Um, does sleeping count as an activity?"
//Options for Question 4
                                },

                                {
                                   "A. 'I was born for this! Bring on the spotlight!' ",
                                   "B. 'Maybe I can fake a sudden case of laryngitis.' ",
                                   "C. 'Can I just email everyone my presentation slides instead?' ",
                                   "D. 'Why did I choose a job that requires human interaction?' "
//Options for Question 5
                                },



        }; //The curly brace that encloses the array of options.


char answers [] = {
                   'C', //Answer1
                   'C', //Answer2
                   'D', //Answer3
                   'D', //Answer4
                   'B', //Answer5

                };


            int size = sizeof(questions)/sizeof(questions[0]);
            char guess;
            int score;

for (int i = 0; i < size; i++){

        cout << questions[i] << '\n';

        for (int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
        cout << options[i][j]<< '\n';
            }

        cin >> guess;
        guess = toupper(guess);

        if(guess == answers[i]){
            cout << "You guessed it!"<< endl;
            score++ ;
                                }

        else{
           cout << "So close,"<< '\n';
           cout << "Answer: " << answers[i]<<'\n';
            }

        };

cout << "*******";
cout << "Results";
cout << "********"<< '\n';

cout << "CORRECT GUESSES: " << score <<'\n';
cout << "Number of Questions: "<<size<<'\n';
cout << "SCORE: "<< (score/(double)size)*100 << "%";
        }
