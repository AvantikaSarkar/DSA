//return the max & min from array

pair<long long, long long> getMinMax(long long a[], int n) {
    
    long long int min = INT_MAX,max = INT_MIN;
    for (int i =0; i<n ;i++){
        if(a[i]<min) min = a[i];
        if(a[i]>max) max = a[i];
    }
    return make_pair(min, max);
}