string reverseWord(string str){
    int end = str.length() - 1;
    int start = 0;
    while(start< end) {
        char temp = str[start];
        str[start] = str[end ];
        str[end] = temp;
        start++; end--;
    }
    return str;
}