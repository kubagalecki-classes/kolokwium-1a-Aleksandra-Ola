#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake
double obliczMake(vector<Tagliatelle>&v)
{
  double M;
  for(auto it=v.rbegin();it!=v.rend();++it)
  {
    M=M+i*it->ileMaki();
  }
  try
  {
    if(M>100)
    throw((int)1);
    if(M>50)
    throw((double)2);
    return M;
  }
}
