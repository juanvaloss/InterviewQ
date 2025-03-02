# include <iostream>
# include <vector>
# include <unordered_map>
using namespace std;

class Solution {
    public :
        vector <int> twoSum (vector <int>& nums, int target) {
            // Map que funciona como key y value (1er int = key, 2do int = value)
            unordered_map <int, int> targetPairs;

            // Ciclo para pasar por todos los números del arreglo 'nums'
            for (int i = 0; i < nums.size(); i ++) {
                
                // Variable que representará cada numero del arreglo
                int num = nums[i];

                // si se encuentra el número cuya suma con num = target, y estye no sea el final del arreglo:
                if (targetPairs.find(target - num) != targetPairs.end()) {
                    // devuelve el índice de los 2 números
                    return {i, targetPairs[target - num]};
                }
                // Si no encuentra nada ingresa 'num' en el índice 'i' de targetPairs
                targetPairs[num] = i;
            }
            return {};
        }
};