class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int count=0;
        for(int i=0;i<points.size();i++)
        {
            for(int j=i+1;j<points.size();j++)
            {
                int x1=points[i][0];
                int y1=points[i][1];
                int x2=points[j][0];
                int y2=points[j][1];
                if((y2>y1) && x1>=x2)
                {
                    swap(x1,x2);
                    swap(y1,y2);
                }
                if(y1>=y2)
                {
                    int flag=1;
                    for(int k=0;k<points.size();k++)
                    {
                        if(k==i || k==j)
                        {
                            continue;
                        }
                        int x3=points[k][0];
                        int y3=points[k][1];
                        if(x3>=x1 && x3<=x2 && y3>=y2 && y3<=y1)
                        {
                            flag=0;
                            break;
                        }
                    }
                    if(flag==1)
                        count++;
                }
            }
        }
        return count;
    }
};