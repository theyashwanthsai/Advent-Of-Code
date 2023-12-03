#include<bits/stdc++.h>
using namespace std;

void solve(string& line, int& sum){
    int id = line[5] - '0';
    if(isdigit(line[6])){
        int h = line[6] - '0';
        id = id*10+h;
    }
    if(isdigit(line[7])){
        int h = line[7] - '0';
        id = id*10+h;
    }
    int i = 7;
    int bm = INT_MIN;
    int rm = INT_MIN;
    int gm = INT_MIN;
    while(i < line.size()){
        if(line[i] == 'b'){
            int j = i-2;
            int n = 0, p = 0;
            while(line[j] != ' '){
                n = n + (line[j] - '0')*(pow(10, p));
                p++;
                j--;
            }
            bm = max(bm, n);

        }
        if(line[i] == 'g'){
            int j = i-2;
            int n = 0, p = 0;
            while(line[j] != ' '){
                n = n + (line[j] - '0')*(pow(10, p));
                p++;
                j--;
            }
            gm = max(gm, n);

        }
        if(line[i] == 'r'){
            int j = i-2;
            int n = 0, p = 0;
            while(line[j] != ' '){
                n = n + (line[j] - '0')*(pow(10, p));
                p++;
                j--;
            }
            rm = max(rm, n);

        }
        i++;
    }
    sum = sum + (rm*bm*gm);
    

}

int main(){
    string line;
    int sum = 0;
    ifstream ifs("day2.txt");
    while(getline(ifs, line)){
        solve(line, sum);
    }
    cout<<sum<<" ";

    ifs.close(); 
    return 0;
}