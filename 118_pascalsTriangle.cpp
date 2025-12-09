vector<vector<int>> result(4); 

for (int i = 0; i < 4; ++i) {
    result[i].resize(i + 1);  
    result[i][0] = 1;
    result[i][i] = 1;
    for (int j = 1; j < i; ++j)
        result[i][j] = result[i-1][j-1] + result[i-1][j];
}