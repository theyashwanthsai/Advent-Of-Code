#include<bits/stdc++.h>
using namespace std;

void solve(string& s, int & sum){
    vector<int> a;
    int n = s.size();
    int i = 0;
    while(i < n){
        // one two three four five six seven eigth nine
        if(s[i] == 'o'){
            if(i+2 <= n+1){
                if(s[i+1] == 'n' && s[i+2] == 'e'){
                    a.push_back(1);
                }
            }
        }
        if(s[i] == 't'){
            if(i+4 <= n+1){
                if(s[i+1] == 'w' && s[i+2] == 'o'){
                    a.push_back(2);
                }
                else if(s[i+1] == 'h' && s[i+2] == 'r' && s[i+3] == 'e' && s[i+4] == 'e'){
                    a.push_back(3);
                }
            }

        }
        if(s[i] == 'f'){
            if(i+3 <= n+1){
                if(s[i+1] == 'o' && s[i+2] == 'u' && s[i+3] == 'r'){
                    a.push_back(4);
                }
                else if(s[i+1] == 'i' && s[i+2] == 'v' && s[i+3] == 'e'){
                    a.push_back(5);
                }
        }
        }
        if(s[i] == 's'){
            if(i+4 <= n+1){
                if(s[i+1] == 'i' && s[i+2] == 'x'){
                    a.push_back(6);
                }
                else if(s[i+1] == 'e' && s[i+2] == 'v' && s[i+3] == 'e' && s[i+4] == 'n'){
                    a.push_back(7);
                }
            }
        }
        if(s[i] == 'e'){
            if(i+4 <= n+1){
                if(s[i+1] == 'i' && s[i+2] == 'g' && s[i+3] == 'h' && s[i+4] == 't'){
                    a.push_back(8);
                }
            }
        }
        if(s[i] == 'n'){
            if(i+3 <= n+1){
                if(s[i+1] == 'i' && s[i+2] == 'n' && s[i+3] == 'e'){
                    a.push_back(9);
                }
            }
        }
        if(isdigit(s[i])){
            a.push_back(s[i] - '0');
        }
    i++;
}
    int k = 0;
    if(a.size() >= 2){
        k = a[0]*10 + a[a.size()-1];
    }
    else if (a.size() == 1){
        k = a[0]*10 + a[0];
    }
    sum = sum + k;


}

int main(){
    string line;
    int  sum = 0;
    ifstream ifs("day1.txt");
    while(getline(ifs, line)){
        solve(line, sum);
    }
    cout<<sum<<" ";

    ifs.close(); 
    return 0;
}