int missingNumber(vector<int>& array, int n) {
        // Your code goes here
  long long sum = ((n) * (n + 1)) / 2; // Use long long to avoid overflow
        for (int i = 0; i < n - 1; i++) {
            sum -= array[i];
            
        }
        return sum;
    }
