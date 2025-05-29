class Solution {
public:
    int MovesCount(vector<int>& seats, vector<int>& students) {
    const int MAX_POS = 101; // ধরে নিচ্ছি position গুলো 0 to 100 এর মধ্যে

    vector<int> seatCount(MAX_POS, 0);
    vector<int> studentCount(MAX_POS, 0);

    // Count frequency of each seat and student position
    for (int s : seats) seatCount[s]++;
    for (int s : students) studentCount[s]++;

    int moves = 0;
    int i = 0, j = 0;

    while (i < MAX_POS && j < MAX_POS) {
        // Find next available seat
        while (i < MAX_POS && seatCount[i] == 0) i++;
        // Find next available student
        while (j < MAX_POS && studentCount[j] == 0) j++;

        if (i < MAX_POS && j < MAX_POS) {
            int count = min(seatCount[i], studentCount[j]);
            moves += abs(i - j) * count;
            seatCount[i] -= count;
            studentCount[j] -= count;
        }
    }

    return moves;
}
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        // sort(seats.begin(), seats.end());
        // sort(students.begin(), students.end());

        // int moves = 0;

        // for(int i = 0 ; i < students.size(); i++){
        //     moves += abs(students[i] - seats[i]);
        // }
        int moves = MovesCount(seats,students);

        return moves;
    }
};