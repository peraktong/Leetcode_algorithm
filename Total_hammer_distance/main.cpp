#include <iostream>


int total_hammer_distance(std::vector<int> & array);


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}


int total_hammer_distance(std::vector<int> & array)

{
  long long int result=0;

    int ones[31];

    for(int i=0;i <31 ;i++)
    {ones[i]=0;}

    for(vector<int>iterator:: it=array.begin(); it!=array.end();++it)
    {

        if((1 << i) & *it)
            ones[i]+=1;
    }

    for(int i=0;i<31;i++)
    {
        result+=ones[i]*(array.size()-ones[i]);
    }



  return result;

};