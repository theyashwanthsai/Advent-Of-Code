#include<bits/stdc++.h>
using namespace std;

void solve(string& line, long long & sum){
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
    int flag = 0;
    while(i < line.size()){
        if(isdigit(line[i]) && isdigit(line[i+1])){
            // cout<<line[i]<<line[i+1]<<" ";
            if(line[i+3] == 'b'){
                int n = line[i] - '0';
                int m = line[i+1] - '0';
                n = n*10 + m;
                if(n > 14){
                    cout<<n<<" ";
                    flag++;
                }
            }
            else if(line[i+3] == 'g'){
                int n = line[i] - '0';
                int m = line[i+1] - '0';
                n = n*10 + m;
                
                if(n > 13){
                    cout<<n<<" ";
                    flag++;
                }
            }
            else if(line[i+3] == 'r'){
                int n = line[i] - '0';
                int m = line[i+1] - '0';
                n = n*10 + m;
                if(n > 12){
                    cout<<n<<" ";
                    flag++;
                }
            }
        }
        i++;
    }
    if(flag == 0){
        sum = sum + id;
    }

}

int main(){
    string line;
    long long  sum = 0;
    ifstream ifs("day2.txt");
    while(getline(ifs, line)){
        solve(line, sum);
    }
    cout<<sum<<" ";

    ifs.close(); 
    return 0;
}