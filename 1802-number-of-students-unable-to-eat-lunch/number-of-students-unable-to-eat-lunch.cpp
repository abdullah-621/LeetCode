class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {

        // int n = students.size();

        // queue<int>stu;
        // stack<int>san;

        // for(int i = 0; i < students.size(); i++){
        //     stu.push(students[i]);
        //     san.push(sandwiches[n - 1 - i]);
        // }

        // int count = 0;

        // while(count < stu.size()){
        //     if(stu.front() == san.top()){
        //         stu.pop();
        //         san.pop();
        //         count = 0;
        //     }
        //     else{
        //         count++;
        //         int last = stu.front();
        //         stu.pop();
        //         stu.push(last);
        //     }
        // }

        // return stu.size();

        int zeros = 0;
        int ones = 0;

        for(int i = 0; i < students.size(); i++){
            if(students[i] == 0) zeros++;
            else ones++;
        }

        for(int i = 0 ; i < sandwiches.size(); i++){
            if(sandwiches[i] == 0 && zeros != 0){
                zeros--;
            } 
            else if(sandwiches[i] == 1 && ones != 0){
                ones--;
            } 
            else{
                return zeros + ones;
            }
        }

        return zeros + ones;
    }
};