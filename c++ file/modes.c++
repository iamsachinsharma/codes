#include<iostream>
#include <fstream>
 using namespace std;
const char* filename = "Binary";

int main(){
    
    float height[4]={12.8,14.5,20.8,12.3};
    ofstream outfile;
    outfile.open(filename);

    outfile.write((char *) &height, sizeof(height));
    outfile.close();
    
    for(int i=0; i<4; i++)
    height[i]=0;

    ifstream infile;
    infile.open(filename);
    
    infile.read((char*) &height,sizeof(height));

    for(int i=0; i<4; i++)
    {
        cout.setf(ios::showpoint);
        cout<<height[i];
    }

    infile.close();

    return 0;
}