class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        int size = flowerbed.size();

        for(int i = 0; i < size && n > 0; i++)
        {
            if(flowerbed[i] == 0)
            {
                bool leftEmpty = (i == 0) || (flowerbed[i - 1] == 0);
                bool rightEmpty = (i == size - 1) || (flowerbed[i + 1] == 0);

                // can't use this condition because of Segmentation fault (segfault)
                // bool leftEmpty =(flowerbed[i - 1] == 0) ||  (i == 0);
                // bool rightEmpty = (flowerbed[i + 1] == 0) || (i == size - 1);

                if(leftEmpty && rightEmpty)
                {
                    flowerbed[i] = 1;
                    n--;
                }
            }
        }

        return n == 0;
    }
};