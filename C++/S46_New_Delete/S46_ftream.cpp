#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main() {
    //Declaring variables
    std::ifstream inFile; //Primo de cin
    std::ofstream outFile; //Primo de cout

    double test1 = 0.0;
    double test2 = 0.0;
    double test3 = 0.0;
    double test4 = 0.0;
    double test5 = 0.0;
    double average = 5.0;

    std::string first_name = "";
    std::string last_name = "";

    inFile.open("data.txt"); //Abrir este archivo

    //Check for errors
    if (inFile.fail()) {
        std::cerr << "Error Opening File" << std::endl;
        exit(1);
    }

    outFile.open("results.txt");

    outFile << std::fixed << std::showpoint;
    outFile << std::setprecision(2);

    std::cout << "Processing data" << std::endl;

    //get and process data
    inFile >> first_name >> last_name;
    outFile << "Studen name: " << first_name << " " << last_name << std::endl;

    inFile >> test1 >> test2 >> test3 >> test4 >> test5;
    outFile << "Test scores: " << test1 << std::setw(6) << test2 << std::setw(6) << test3 << std::setw(6) << test4 << std::setw(6) << test5 << std::endl;

    average = ((test1 + test2 + test3 + test4 + test5) / 5.0);

    outFile << "Average test score: " << average << std::endl;

    std::cout << "Data processed correctly" << std::endl;

    //closing the files -  disassociated from the storage area and are freed
    inFile.close();
    outFile.close();

    return 0;
}