 class ProductOfNumbers {
public:
    vector<int>nums;
    ProductOfNumbers() {
        nums = {};
    }
    
    void add(int num) {
        nums.push_back(num);
    }
    
    int getProduct(int k) {
        int p = 1;
        int n = nums.size();
        for(int i=n-1; i>=n-k; i--){
            p *= nums[i];
        }
        return p;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */