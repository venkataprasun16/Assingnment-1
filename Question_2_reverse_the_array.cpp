void reverseArray(vector<int> &arr , int m) {
    int n=arr.size();
    int l=m+1;
    int r=n-1;
    while(l<r){
        int temp=arr[l];
        arr[l]=arr[r];
arr[r]=temp;
l++;
r--;
    }    	
}