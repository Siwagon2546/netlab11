#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    ifstream numset;
    numset.open("score.txt");
    string txt;
    float sum,sumsqrt;
    int i =0;
    while(getline(numset,txt)){
        sum += atof(txt.c_str());
        sumsqrt += pow(atof(txt.c_str()),2);
        i++;

    }
    double mean = sum/i;
    double Sta = sqrt((sumsqrt/i)-pow(mean,2));
    cout << "Number of data = "<<i<<"\n";
    cout << setprecision(3);
    cout << "Mean = "<<mean<<"\n";
    cout << "Standard deviation = "<<Sta<<"\n";
}