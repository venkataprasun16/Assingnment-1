void pushZerosAtEnd(vector<int> &arr) 
{
    int count = 0;
    for (int i = 0;i<arr.size();) {
        if (arr[i] == 0) {
            count++;
            arr.erase(arr.begin() + i); 
        } else {
            i++; 
        }
    }
    for (int i=0;i<count;i++) {
        arr.push_back(0);
    }
}

