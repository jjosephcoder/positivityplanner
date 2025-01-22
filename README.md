Positivity Planner

This is one of my first Modern C++ projects. 

The program prompts the user to add journal entries with options of some defined prefixes as illustrated below: -

*************************************************" 
**     WELCOME TO YOUR POSITIVITY TRACKER      **" 
**        ENTER YOUR DAILY LOGS BELOW          **" 
**        PREFIX EACH OF YOUR ENTRIES          **" 
**        WITH THE FOLLOWING KEYWORDS:-        **" 
**        POSITIVE NOTE:                       **" 
**        GRATITUE NOTE:                       **" 
**        KINDNESS NOTE:                       **" 
**        ACCOMPLISHMENT NOTE:                 **" 
**        REALISED GOAL:                       **" 
**        REALISED DREAM:                      **" 
**                                             **" 
**     TO EXIT TYPE END AND HIT RETURN         **" 
*************************************************"

The entries are then output to a text file using the date and time stamp from the local Windows operating system.


The source code utilizes the Windows Media Library available by importing the winmm libraries which I have included in the Project Resources folder as this was difficult to find.

If you are using the Code Lite IDE to compile this program then you will need to configure the Linker "Libraries Search Path" to include the path of where you extract the library files too for example:
C:\mmlib Then in the Libraries field below enter: - winmm, click on apply and ok. Now you can use the required windows header include files that are commented as such in the main.cpp file.

Configuring The Windows Sounds To Play The compiler will use the Windows libraries in order to play the wav files for this project, they point at a specific file 
location in the main.cpp as per below:- PlaySound(TEXT("C://yourfilepath"),NULL, SND_FILENAME| SND_ASYNC), ammend the main.cpp to reflect your loaction if you want 
to play sound in the program, otherwise the standard windows no file found sound will play momentatrily as the program executes.
