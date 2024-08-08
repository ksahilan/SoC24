class Solution {
public:
    void VisitLog(vector<vector<int>>& rooms, set<int>& visited, int ind){
        visited.insert(ind);
        if(visited.size() == rooms.size()) return;
        for(int x: rooms[ind]){
            if(visited.count(x) == 0) VisitLog(rooms, visited, x);
        }
    }
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        set<int> Visited = {};
        VisitLog(rooms, Visited, 0);
        return (Visited.size() == rooms.size());
    }
};

// https://leetcode.com/problems/keys-and-rooms/description/?envType=study-plan-v2&envId=leetcode-75
