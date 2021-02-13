//
//  Prog2Mult.cpp
//  week2JackieOcanaReview
//
//  Created by Jackie on 1/27/21.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cout<<"Jackie Ocaña – January 27th, 2021"<<endl;
    
    //declare and initialize N
    //this will be used to store the inputted number
    int N = 0;
    
    //user inputs number and is stored in N
    cout<<"Enter an integer: ";
    cin>>N;
    
    //N is cubed and monitor prints the cube of N
    N = N*N*N;
    cout<<"The cube is "<< N <<endl;
    return 0;
}
