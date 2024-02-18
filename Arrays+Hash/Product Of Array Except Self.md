```Cpp
vector<int> productExceptSelf(vector<int>& nums){
	int n = nums.size();
	vector<int> output(n, 1);
	int left = 1, right = 1;
	for(int i = 0; i < n; i++){
		output[i] *= left;
		output[n - i - 1] *= right;
		left *= nums[i];
		right *= nums[n - i - 1];
	}
	return output;
}
```

```cpp
vector<int> productExceptSelf(vector<int>& nums){
	int n = nums.size();
	vector<int> output(n, 1);
	int left = 1, right = 1;
	for(int i = 0; i < n; i++){
		output[i] *= left;
		output[n - i - 1] *= right;
		left *= nums[i];
		left *= nums[n - i - 1];
	}
	return output;
}

```

```cpp

vector<int> producExceptSelf(vector<int>&nums){
	int n = nums.size();
	vector<int> output(n, 1);
	int left = 1, right = 1;
	for (auto i = 0; i < n; i++){
		output[i] *= left;
		output[n - i - 1] *= right;
		left *= nums[i];
		left *= nums[n - i -1];
	}
	return output;
}

```