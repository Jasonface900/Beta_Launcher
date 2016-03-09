//The include commands, otherwise won't run duh
#include <iostream>
#include <string>
#include <signal.h>
//#include <windows.h>
//#include <mmsystem.h>

using namespace std; //so I don’t have to use the std:: command all the damn time.

int main()
{
//variable calling
  string name, feeling, here_for;
//variable setting
  int crash   = 0;
  string beta = "beta";
  string Beta = "Beta";
  string BETA = "BETA";
  string good = "good";
  string Good = "Good";
  string GOOD = "GOOD";
  string well = "well";
  string Well = "well";
  string WELL = "WELL";
  string fine = "fine";
  string Fine = "Fine";
  string FINE = "FINE";
  string mad  = "mad";
  string Mad  = "Mad";
  string MAD  = "MAD";
  string meh  = "meh";
  string Meh  = "Meh";
  string MEH  = "MEH";
  string bad  = "bad";
  string Bad  = "Bad";
  string BAD  = "BAD";
/*dear god all the strings! IT HURTS
runtime code begins here.*/
  cout << "Hello BETA tester! \n";
  cout << "What's your chosen NAME? \n :";
  getline (cin, name); //gets name
  cout << "Hey, " << name << ", how are you?  \n(Limit of 4 chars :P) \n :";
  getline (cin, feeling); //gets how you feel
  if (feeling == good or feeling == Good or feeling == GOOD or feeling == well or feeling == Well or feeling == WELL or feeling == fine or feeling == Fine or feeling == FINE) {
      cout << "That's good then.";
      cin.get();
      cout << "What are you here for? \n(Also limit of 4 chars) \n :";
      getline (cin, here_for);
      if (here_for == beta or here_for == Beta or here_for == BETA){
          cout << "Oh, that's right.";
          cin.get();
          cout << "Yeah, I know you're here for that BETA.";
          cin.get();
          cout << "Who says I have to give the BETA to you?";
          cin.get();
      }else if(here_for <= 2){
    	  cout << "Then why the hell are you here?";
    	  cin.get();
      }else {
          cout << "Whatever, I don't have " << here_for << ".";
          cin.get();
      }
  }else if(feeling == mad or feeling == Mad or feeling == MAD){
      cout << "Why are you so angry?";
      cin.get();
      cout << "I didn't do anything..";
      cin.get();
      do{
        cout << "YOUR COMPUTER WILL BURN!!!" << endl;
        crash = crash + 1;
    }while( crash < 20 );
  //    PlaySound("C:\\Users\\Jasonface\\Desktop\\burn.wav", NULL, SND_FILENAME); //This will play a burning sound, still work in progress
      cin.get();
      raise(SIGSEGV);
  }else if(feeling == meh or feeling == Meh){
      cout << "I'm feeling pretty meh also.";
      cin.get();
      cout << "Well, what's wrong with you? :";
      cin.get();
      cout << "Yeah, I know how it is. \nSame thing happened to me.";
      cin.get();
      cout << "We should probably go back to what we were doing now.";
      cin.get();
  }else if(feeling == bad or feeling == Bad){
      cout << "Looks like you're gonna have a bad time...\n";
      cin.get();
      cout << "Nah, I'm just messing with you!";
      cin.get();
      cout << "You won't feel better talking to \nme though,because I'm a program.";
      cin.get();
  }else if(feeling.length() < 2) {
      cout << "You don't type much, do you?";
      cin.get();
      cout << "You should really get out there more.";
      cin.get();
      cout << "I know I'm a computer program, \nbut I know more than you.";
  }else if(feeling.length() > 4 and feeling.length() < 8) {
      cout << "I TOLD YOU NO MORE THAN 4 LETTERS MAN!";
      cin.get();
      cout << "ERRx2123 program 'BETA.EXE' has crashed. \nAbort? Y/N :";
      cin.get();
      raise(SIGSEGV);
  }else if(feeling.length() >= 8) {
      cout << "Whoa man, I said I want your feelings, \nnot an essay!";
      cin.get();
  }else { //this is if there's an unexpected response.
      cout << "Wow, my programmer was too lazy to \nprogram a RESPONSE to " << feeling << ".\nWay to go man...";
      cin.get();
      cout << "Whelp, I'm broken now. Congratulations.";
      cin.get();
      cout << "What are you looking for? Some extra DIALOGUE?";
      cin.get();
      cout << "You arn't going to find anything " << name << ", \nthis is all there is.";
      cin.get();
  }
  cout << "Well, my NAME's...";
  cin.get();
  cout << "Wait.";
  cin.get();
  cout << "Why do you need to know my NAME?";
}
