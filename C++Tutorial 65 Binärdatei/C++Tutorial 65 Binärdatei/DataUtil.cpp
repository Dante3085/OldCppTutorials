#include <iostream>
#include <string>
#include <fstream>

namespace file {

	//Writes into file. Goes to next line after each input. Parameters: Openflag type, filepath, content.
	void writeSmth(std::string openFlag, std::string filepath ,std::string content) {
		if (openFlag == "trunc") {
			std::ofstream file; //Use to create and write into files.
			file.open(filepath, std::ios::trunc); //Open preexisting file or create one by doing this. "std::ios::trunc" overrides the preexisting file.
			file << content << std::endl;
			file.close();
		}

		if (openFlag == "app") {
			std::ofstream file; //Use to create and write into files.
			file.open(filepath, std::ios::app); //"std::ios::app" 
			file << content << std::endl;
			file.close();
		}

		if (openFlag == "ate") {
			std::ofstream file; //Use to create and write into files.
			file.open(filepath, std::ios::ate); //"std::ios::ate"
			file << content << std::endl;
			file.close();
		}

		if (openFlag != "trunc" && openFlag != "app" && openFlag != "ate") {
			std::cerr << "Please type in a valid Openflag! " << "'" << openFlag << "'" << " is not valid. " << "These are you'r options: 'trunc' 'app' 'ate' . . ." << std::endl;
		}
	}

	//Reads content of a file.
	void readSmth(std::string filepath) {

		std::ifstream file;			//Use to read files.
		std::string fileMemory;		//Use generic string to save content of file that is being read.

		file.open(filepath);		//Use to open a file. Insert filepath in brackets.

		if (file.is_open()) {		//Checks if file has been successfully opened.
			while (std::getline(file, fileMemory)) {
				std::cout << fileMemory << std::endl;
			}
			file.close();
		}
		else {
			std::cerr << "FILE_NOT_FOUND!" << std::endl;
		}
	}
}