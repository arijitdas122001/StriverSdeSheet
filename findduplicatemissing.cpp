vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long n=A.size();
    long long sn=(n*(n+1))/2;
    long long s2n=(n*(n+1)*(2*n+1))/6;
    long long sum=0,sum2=0;
    for(auto it:A){
       sum+=it;
       sum2+=(long long)it*(long long )it;
    }
    long long eq1=sum-sn;
    long long eq2=sum2-s2n;
    eq2=eq2/eq1;
    long long repeatnumber=(eq1+eq2)/2;
    long long missingnumber=repeatnumber-eq1;
    return {(int)repeatnumber,(int)missingnumber};
}
