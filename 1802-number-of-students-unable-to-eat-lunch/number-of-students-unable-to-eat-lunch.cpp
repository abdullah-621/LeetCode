class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        
        // int i = 0;
        // int j = 0;

        // int student = students.size();
        // int count = 0;

        // while(count < student){
        //     if(students[i] == sandwiches[j]){

        //         j++;
        //         count = 0;
                
        //     }
        //     else{
        //         int back = students[i];
        //         students.push_back(back);
        //         count++;
        //     }
        //     i++;
        //     if(i >= students.size()) i = 0;
        // }

        // return student - j;

        queue<int>stu;
        stack<int>san;

        for(int i = 0; i < students.size(); i++){
            stu.push(students[i]);
        }
        for(int i = sandwiches.size() - 1; i >=0 ; i--){
            san.push(sandwiches[i]);
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