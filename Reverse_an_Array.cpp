

vector<int> reverseArray(vector<int> a)
{
    int start = 0;
    int end = (a.size()-1);
    
    while (start < end)
    {
        int temp;
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
    return a;
}
