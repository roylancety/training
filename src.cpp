#include<iostream>
#include<fstream>
#include<cmath>}




int main()
{
    
    float dt  = 0.0;
    int  numSteps  = 0;
    double dx_dt;
    double x;
    double dx;
    double t;
    ifstream infile;
    infile.open("params.dat");
    infile >>  dt  >> numSteps;
    infile.close();


    float x = 0;
    float t = 1;
 

    for(int i = 0; i < numSteps; i++)
    {
          dx_dt = -3*x;
          dx = dx_dt * dt;
          x = x + dx;
          t = t + dt;
          cout << t << " " << x << endl;
    }	
 }
