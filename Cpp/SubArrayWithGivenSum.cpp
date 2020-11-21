#include<vector>

using namespace std;

//Index Starts From 1 Not Zero
//Both Ends Included

int main() {
	int TestCases;
	std::cin>>TestCases;
	
	for(int Curr=0;Curr<TestCases;Curr++)
	{
	    bool SubArrayExists = false;
	    
	    int ArraySize=0;
	    int SumToEquate=0;
	    
	    std::vector<int> Array;
	    
	    std::cin>>ArraySize;
	    std::cin>>SumToEquate;
	    
	    for(int i=0;i<ArraySize;i++)
	    {
	        int Temp;
	        std::cin>>Temp;
	        
	        Array.emplace_back(Temp);
	    }
	    
	    int StartIndex=0;
	    int EndIndex=0;
	    for(int i=0;i<Array.size();i++)
	    {
	        int Sum=0;
	        StartIndex=i;
	        for(int j=i;j<Array.size();j++)
	        {
	            Sum = Sum+Array[j];
	            
	            if(Sum>SumToEquate)
	                break;
	            if(Sum == SumToEquate)
	            {
	                SubArrayExists = true;
	                EndIndex = j;
	                break;
	            }
	        }
	        if(SubArrayExists)
	            break;
	    }
	    if(SubArrayExists)
	    std::cout<<StartIndex+1<<" "<<EndIndex+1<<std::endl;
	    else
	    std::cout<<-1<<std::endl;
	}
	
}