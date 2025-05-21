class Solution {
public:
    string interpret(string command) {
        
        string s = "";

        for(int i = 0; i < command.size(); i++){
            if(command[i] == 'G'){
                s += "G";
            }
            else if(command[i] == '(' && command[i + 1] == ')'){
                s += "o";
                i+= 1;
            }
            else if(command[i] == '(' && command[i + 1] =='a' && command[i + 2] == 'l' && command[i + 3] == ')'){
                s += "al";
                i+= 3;
            }
        }

        return s;
    }
};


// string interpret(string s) {
//         unordered_map<string, string> d = 
//         {
//             { "(al)" , "al"},
//             { "()" , "o" }, 
//             { "G" , "G" },
//         };
//         string tmp = "", res = "";
//         for(char c: s){
//             tmp+=c;
//             if(d.find(tmp)!=d.end()){
//                 res += d[tmp];
//                 tmp = "" ;
//             }
//         }
//         return res;
//     }