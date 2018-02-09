//Sasha Stramel
//COSC 2030 Spring 2018
//Lab1
//02-11-2017


using namespace std;
#include<iostream>
#include<fstream>
#include<string>


int main()
{
    ifstream infile;
    string file;
    int count(0);
    double Number1= 0;
    double Number2= 0;
    double LastNum1= 0;
    double LastNum2= 0;
    
    cout << "Please input a file name: ";
    
    getline(cin, file);
    infile.open(file);
    if (infile.fail())
    {
        do
        {
            cout << "Error, can not open file, please try again." << endl;
            cout << "Please input a file name: ";
            getline(cin, file);
            infile.open(file);
        }
        while ((!infile.fail()));
    }
    
    while (!infile.eof())
    {
        
        if (count == 0)
        {
            infile >> number1
            
            Number2= number1
        }
        else if (count == 1)
        {
            infile >> number1
            
            LastNum1=LastNum2
            
            LastNum2= y;
        }
        else if (count > 1)
        {
            LastNum1=LastNum2
            
            infile >>LastNum2
        }
        
        count++;
    }
    cout << "Count: " << count << endl;
    
    cout << "First Two Numbers: " << Number2<< " " << Number1<< endl;
    
    cout << "Last Two Numbers: " << LastNum1<< " " << LastNum2<< endl;
    

    
    infile.close();
    
    return 0;
}
