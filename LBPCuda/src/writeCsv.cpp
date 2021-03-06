#include <iostream>
#include <fstream>
//#include <experimental/filesystem>
#include "writeCsv.h"

//namespace fs = std::experimental::filesystem;


void writeCsv(int* histogram){
    std::remove("histogram.csv"); // delete file
    std::ofstream outputFile("histogram.csv");
    for (int i = 0; i < 256; i++ ){
    	outputFile << histogram[i] << "\n";
    }
    outputFile.close();
}

void writeTestResults(int* time, int size) {

    std::ofstream fileIterations("test_results.csv", std::ifstream::out);
    for (int i = 0; i < size; i++ ){
        fileIterations << time[i] << "\n";
    }
    fileIterations.close();

}
