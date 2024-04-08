class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int szero = 0;
        int sone = 0;
        for(int student : students) {
            if(student == 0) {
                szero++;
            } else {
                sone++;
            }
        }
        
        for(int sandwich : sandwiches) {
            if(sandwich == 0 && szero > 0) {
                szero--;
            } else if(sandwich == 1 && sone > 0) {
                sone--;
            } else {
                break; 
            }
        }
        
        return szero + sone;   
    }
};