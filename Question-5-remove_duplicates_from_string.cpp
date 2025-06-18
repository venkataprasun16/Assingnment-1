string removeDuplicates(string str, int n)
{
    int i = 0;
    while (i < str.length()) {
        for(int j=i+1;j<str.length(); ){
            if(str[j]==str[i]){
                str.erase(str.begin()+j);
            }
            else{
                j++;
            } 
        }
        
        i++;
    }
    return str;
}
