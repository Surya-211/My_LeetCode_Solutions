/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        queue<int>q;
        int total=0;
        q.push(id);
        while(!q.empty())
        {
            int f=q.front();
            q.pop();
            for(int i=0;i<employees.size();i++)
            {
                Employee* e=employees[i];
                if(e->id==f)
                {
                    total+=e->importance;
                    vector<int>v=e->subordinates;
                    for(int j=0;j<v.size();j++)
                        q.push(v[j]);
                }
            }
        }    
        return total;
        
    }
};