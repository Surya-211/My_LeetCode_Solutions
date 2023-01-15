class Solution {
    public boolean isValidSudoku(char[][] board) {
        HashSet<String> s=new HashSet<String>();
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    String num="";
                    num+=board[i][j];
                    int b=(i/3)*3+j/3;
                    if(!s.add("row"+i+num)||!s.add("col"+j+num)||!s.add("box"+b+num))
                        return false;
                }
            }
        }
        return true;
    }
}