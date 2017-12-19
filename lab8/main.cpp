/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: tmiller
 *
 * Created on December 5, 2017, 2:07 PM
 */

#include <cstdlib>
#include <string>
#include <iostream>
#include <exception>
#include <stdexcept>

using namespace std;

class MatrixA
{
public:
    
    MatrixA(int n1, int n2, int n3, int n4)
    {
        v[0][0] = n1;
        v[0][1] = n2;
        v[1][0] = n3;
        v[1][1] = n4;
    }
    
    
    void print(ostream &os) const  //print function
    {
        os << v[0][0] << " " << v[0][1] << endl;
        os << v[1][0] << " " << v[1][1] << endl;
        os << "------------------" << endl;
    }
    
    void add(const int& rhs){ //rhs means right hand side
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j<2; j++)
            {
               v[i][j] += rhs; 
            }
        }
    }
    
    void operator+(const int& rhs)
    {
        add(rhs);
    }
    
    void add(MatrixA& m) //method to add two matrixs
    {
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j<2; j++)
            {
               v[i][j] += m.v[i][j]; 
            }
        }
    }
   
    
    
private:
    int v[2][2];
};

class MatrixB
{
public:
    
    MatrixB(int n1, int n2, int n3, int n4)
    {
        v[0][0] = n1;
        v[0][1] = n2;
        v[1][0] = n3;
        v[1][1] = n4;
    }
    
    
    void print(ostream &os) const  //print function
    {
        os << v[0][0] << " " << v[0][1] << endl;
        os << v[1][0] << " " << v[1][1] << endl;
        os << "------------------" << endl;
    }
    
    void add(const int& rhs){ //rhs means right hand side
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j<2; j++)
            {
               v[i][j] += rhs; 
            }
        }
    }
    
    void operator+(const int& rhs)
    {
        add(rhs);
    }
    
        void add(MatrixB& n) //method to add two matrixs
        {
            for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j<2; j++)
            {
               v[i][j] += n.v[i][j]; 
            }
        }
    }
    
    
private:
    int v[2][2];
}; 

int main(void) {
    
    MatrixA m(1,1,1,1);
    m.print(cout);
    MatrixB n(3,3,3,3);
    n.print(cout);
    
    m.add(1);
    m.print(cout);
    
    m.add(-1);
    m.print(cout);
    
    
    

    return 0; 
    
    
}

