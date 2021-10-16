vector<vector<ll>> C(1006, vector<ll>(1006, 0));
void precompute_ncr()
{
    C[0][0]=1;
    for(int i=1;i<=1005;i++)
    {
        C[i][i]=C[i][0]=1;
        for(int j=1;j<=1005;j++)
        {
            C[i][j]=(C[i-1][j]+C[i-1][j-1])%MOD;
        }
    }
}
