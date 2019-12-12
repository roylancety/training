#include<iostream>
#include<fstream>
#include<cmath>

using namespace std;

int main()
{
   // float x;
   // float t;
    float dt  = 0.0;
    int  numSteps  = 0;
    double dx_dt;
    double dx;
    ifstream infile;
    infile.open("params.dat");
    infile >>  dt  >> numSteps;
    infile.close();


    float x = 1;
    float t = 0;
 

    for(int i = 0; i < numSteps; i++)
    {
          dx_dt = -3*x;
         // dx = dx_dt * dt;
          x =(1- 3*dt)*x;
          t = t + dt;
          cout << t << " " << x << endl;
    }	
 }
