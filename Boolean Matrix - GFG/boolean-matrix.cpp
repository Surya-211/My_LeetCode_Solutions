//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
       int col=0;
        int row=0;
        for(int i=0;i<matrix[0].size();i++)
        {
            if(matrix[0][i]==1)
            {
                row=1;
                break;
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            if(matrix[i][0]==1)
            {
                col=1;
                break;
            }
        }
        for(int i=1;i<matrix.size();i++)
        {
            for(int j=1;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==1)
                {
                    matrix[i][0]=1;
                    matrix[0][j]=1;
                }
            }
        }
        for(int i=1;i<matrix.size();i++)
        {
            for(int j=1;j<matrix[0].size();j++)
            {
                if(matrix[i][0]==1||matrix[0][j]==1)
                    matrix[i][j]=1;
            }
        }
        if(row==1)
        {
            for(int i=0;i<matrix[0].size();i++)
                matrix[0][i]=1;
        }
        if(col==1)
        {
            for(int i=0;i<matrix.size();i++)
                matrix[i][0]=1;
        }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.booleanMatrix(matrix);


        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}



// } Driver Code Ends