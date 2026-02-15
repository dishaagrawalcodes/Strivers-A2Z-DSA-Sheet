class Solution {
public:
    string addBinary(string a, string b) {
        int n =a.size();
        int m =b.size();
        int a1=stoi(a);
        int b1=stoi(b);
        int fvalue=0;
            for(int i=n-1;i>=0;i--){
                int digit=a1%10;
                fvalue+=digit*pow(2,i);
                a1=a1-digit;
            }
        int svalue=0;
            for(int i=m-1;i>=0;i--){
                int digit=b1%10;
                svalue+=digit*pow(2,i);
                b1-=digit;
            }
        
        int ans=fvalue+svalue;
        return to_string(ans);
    }
};
