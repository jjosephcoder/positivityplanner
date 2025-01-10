#include <iostream> 
#include <string> 
#include <ctime>  
#include <fstream> 
#include <windows.h> 
#include <mmsystem.h>

#pragma comment(lib, "winmm.lib"); 

using namespace std;

int main() {
    
    system("COLOR 2"); 
     
    string str={""};
    string log={""};
       
    cout << "                  *************************************************" << endl;
    cout <<"                  **     WELCOME TO YOUR POSITIVITY TRACKER      **" << endl;
    cout <<"                  **        ENTER YOUR DAILY LOGS BELOW          **" << endl;
    cout <<"                  **        PREFIX EACH OF YOUR ENTRIES          **" << endl;
    cout <<"                  **        WITH THE FOLLOWING KEYWORDS:-        **" << endl;
    cout <<"                  **        POSITIVE NOTE:                       **" << endl;
    cout <<"                  **        GRATITUE NOTE:                       **" << endl;
    cout <<"                  **        KINDNESS NOTE:                       **" << endl;
    cout <<"                  **        ACCOMPLISHMENT NOTE:                 **" << endl;
    cout <<"                  **        REALISED GOAL:                       **" << endl;
    cout <<"                  **        REALISED DREAM:                      **" << endl;
    cout <<"                  **                                             **" << endl;
    cout <<"                  **     TO EXIT TYPE END AND HIT RETURN         **" << endl;
    cout <<"                  *************************************************" << endl;
    cout <<"\n\n\n";
    
    PlaySound(TEXT("C://Users//jonat//Desktop//Positivity Tracker 2025//LiftMeUp.wav"),NULL, SND_FILENAME| SND_ASYNC);
    
    time_t now = time(0);
    
    char* date_time = ctime(&now);
       
    while (str!="end") {
      cout << "PLEASE ENTER YOUR POSITIVE LOG:"; 
      getline(cin, str);
      
        for (auto& x : str) { 
            x = tolower(x); 
        } 
    
    log = log + str + '\n';
    cout << endl;
    }
    
    log.resize(log.length() - 4);
    

        for (auto& x : log) { 
        x = toupper(x); 
        } 
    
    system("CLS");
       
     
   ofstream of;
   fstream f;
   
    
    of.open("output.txt", ios::app);
    if (!of)
        cout << "No such file found";
    else {
        of << "POSITIVE LOG ENTRIES FOR: " << date_time;
        of << log << endl;;
        cout << endl;
        cout << "<<<<<ALL LOG ENTRIES SUCESSFULLY APPENDED TO THE OUTPUT.TXT FILE>>>>> \n";
        cout << endl;
        of.close();
        f.close();
    }
    
    //OUTPUT LOG FOR OUTPUT.TXT
    cout << "POSITIVE LOG ENTRIES FOR: " << date_time << endl; 
    cout << log;
    
    return 0;
      
}
    