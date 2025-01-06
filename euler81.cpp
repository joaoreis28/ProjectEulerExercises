#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MAX 81


vector <vector <int> > matrix;

int dp[MAX][MAX];





void readFile()
{
    ifstream arq("matrix.txt");

    if (!arq.is_open())
        cerr << "Erro ao abrir o arquivo: "  << endl;
    

    string linha;
    while(getline(arq, linha))
    {
       std::vector<int> row;
        std::stringstream ss(linha);
        std::string value;

        while (std::getline(ss, value, ','))
        
            row.push_back(std::stoi(value)); 
        

        matrix.push_back(row); 

    }


    arq.close();
}








int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    readFile();
    
    dp[0][0] = matrix[0][0];


    for (int i = 1; i < 80; ++i)
        dp[i][0] = dp[i-1][0] + matrix[i][0];
    

    
    for (int j = 1; j < 80; ++j) 
        dp[0][j] = dp[0][j-1] + matrix[0][j];
    

    
    for (int i = 1; i < 80; ++i) 
        for (int j = 1; j < 80; ++j) 
            dp[i][j] = matrix[i][j] + min(dp[i-1][j], dp[i][j-1]);
        
    

    cout << dp[79][79] << endl;

    return 0;
}