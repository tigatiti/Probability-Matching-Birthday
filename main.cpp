// Randomlyy Generate a number between 1-365 (birthday) and export to a csv file, 
//to test the birthday statistics hypothesis problem

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <random>
#include <fstream>
#include <algorithm>
#include <vector> 

//NEED TO DO: Sort, find duplicate

int rand_number(){
    std::random_device rd;
    std::uniform_int_distribution<int> dist(0,365);
    return dist(rd);
    //return int, random dist (from a, to b);
}


int main(){
    
    std::ofstream myFile;
    myFile.open("result.csv");

    std::vector<int> bdVector;

    for(int i=0; i<20; i++){
        int x = rand_number();
        myFile << x << std::endl; //out put to an csv file
        bdVector.push_back(x);
    }   



}