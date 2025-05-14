class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {

        int n = students.size();

        queue<int>stu;
        stack<int>san;

        for(int i = 0; i < students.size(); i++){
            stu.push(students[i]);
            san.push(sandwiches[n - 1 - i]);
        }

        int count = 0;

        while(count < stu.size()){
            if(stu.front() == san.top()){
                stu.pop();
                san.pop();
                count = 0;
            }
            else{
                count++;
                int last = stu.front();
                stu.pop();
                stu.push(last);
            }
        }

        return stu.size();
    }
};