class Solution {
    public int[][] onesMinusZeros(int[][] grid) {
        int r=grid.length;
        int c=grid[0].length;
        int row[]=new int[r];
        int col[]=new int[c];
        Arrays.fill(row,0);
        Arrays.fill(col,0);
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==1)
                {
                    row[i]++;
                    col[j]++;
                }
            }
        }
        int ans[][]=new int[r][c];
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                ans[i][j]=row[i]+col[j]-(r-row[i])-(c-col[j]);
            }
        }
        return ans;
    }
}