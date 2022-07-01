// Your  C++ Program

#include <iostream>
using namespace std;
int main()
{
    cout << " ";
    return 0;
}

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i = 0, j = 0;
        
        while( i<m && j<n) {
            if(nums1[i] < nums2[j]){
                nums1[i++] = nums1[i++];
            }
            else{
                nums1[i++] = nums2[j++];
            }
        }

        
        //copy kardo second array k remaining element ko
        while(j<n) {
            nums1[i++] = nums2[j++];
        }
    }

    
};






int i = 0, j = 0;
        
        while( i<m && j<n) {
            if(nums1[i] < nums2[j]){
                nums1[i] = nums1[i];
                i+=1;
            }
            else if(nums1[i] > nums2[j])
            {
               nums1[i] = nums2[j];
                
                i+=1;
            }
            else
            {
                nums1[i] = nums2[j];
                    j+=1;
                
            }
        }

        
        //copy kardo second array k remaining element ko
        while(j<n) {
            nums1[i] = nums2[j];
            i+=1;
            j+=1;
        }
    }
