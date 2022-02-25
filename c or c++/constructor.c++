#include <iostream>
using namespace std;

class constructordemo{
    public:
    constructordemo(){
    cout<<"This is from a constructor";    
    }
};

int main()
{
    constructordemo obj;
    return 0;
}