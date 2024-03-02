#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <random>


int rand_number(){
    std::random_device rd;
    std::uniform_int_distribution<int> dist(0,365);
    return dist(rd);
    //return int, random dist (from a, to b);
}


int main(){

    for(int i=0; i<100; i++){
        std::cout << rand_number() << std::endl;
    }

}