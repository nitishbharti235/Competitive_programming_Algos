

      O(n) in precomputeation   query in O(1);


int fact[N], invfact[N];

int modinv(int k)
{
    return pow(k, MOD-2, MOD);
}

void precompute()
{
    fact[0]=fact[1]=1;
    for(int i=2;i<N;i++)
    {
        fact[i]=fact[i-1]*i;
        fact[i]%=MOD;
    }
    invfact[N-1]=modinv(fact[N-1]);
    for(int i=N-2;i>=0;i--)
    {
        invfact[i]=invfact[i+1]*(i+1);
        invfact[i]%=MOD;
    }
}

int nCr(int x, int y)
{
	int num=fact[x];
	num*=invfact[y];
	num%=MOD;
	num*=invfact[x-y];
	num%=MOD;
	return num;
}
