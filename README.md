MVC-Model
=========
This Project is Developed in Visual Studio 2013 Version12, Windows 8

Please make following changes in Visual Studio after cloning the repository

Project->Properties->Configuration Properties -> Linker->System->Subsystem->Windows(/Subsystem-Windows)
Project->Properties->Configuration Properties -> Linker-> Advanced -> Entry Point-> Main


MyForm.cpp has the Main function

Issue with the APP:
I have tested the app extensively with different sets of data emphasising the app functionalty.
I observed the following issue till now
The space provided in the app, where we can edit the file manually accepts only numbers and comma in <number,number> format and for all combinations App fails and we need to select the file again. It doest accept white spaces too.


