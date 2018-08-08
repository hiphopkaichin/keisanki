
#include <stdio.h> 
#include <stdbool.h>  

#define MAXN 110 
#define MAXSTR 100010 

int min(int a, int b){ 
	return a < b ? a : b; 
} 

int len[MAXN] = {1,1}; 
 

char pattern[MAXSTR]; 
int pLen; 

unsigned long long int dp[MAXN]; 

	

int overlapping(int n){
	int N; 	
	int curr = 0, i, ret = 0;
	int fail[MAXSTR];
	
	char prefix[MAXSTR] = {true, false, true},suffix[2][MAXSTR],pattern[MAXSTR]; 

	if (len[n-1] + len[n-2] < pLen) return 0; 

	for (i = MAXSTR - min(pLen - 1, len[n-1]); i < MAXSTR; i++){ 
		while (pattern[curr + 1] != suffix[(n-1)%2][i] && curr != 0) 
			curr = fail[curr]; 

		if (pattern[curr + 1] == suffix[(n-1)%2][i]) 
			curr++; 

		if (curr == pLen) ret++; 
	} 
	for (i = 0; i < min(pLen-1, len[n-2]); i++){ 
		while (pattern[curr + 1] != prefix[i] && curr != 0) 
			curr = fail[curr]; 

		if (pattern[curr + 1] == prefix[i]) 
			curr++; 
		if (curr == pLen) ret++; 
	} 
	return ret; 
}


int main(void){ 
	int N; 
	int i, j, n, k, _case = 1,fail[MAXSTR]; 
	char c;
	char prefix[MAXSTR] = {true, false, true},suffix[2][MAXSTR]; 

	for (i = 2; i < MAXN; i++) 
		len[i] = min(len[i-1] + len[i-2], MAXSTR); 
	
	for (i = 4, j = 3; i < MAXN && j < MAXSTR; i++) 
		for (k = 0; k < len[i-2]; k++) 
			if (j < MAXSTR) 
				prefix[j++] = prefix[k]; 

	for (j = MAXSTR - len[24], k = 0; j < MAXSTR; j++, k++) 
		suffix[0][j] = prefix[k]; 

	for (j = 0, k = len[23] - (MAXSTR - len[24]); k < len[23]; k++) 
		suffix[0][j] = prefix[k]; 

	for (j = MAXSTR - len[23], k = 0; j < MAXSTR; j++, k++) 
		suffix[1][j] = prefix[k]; 
	
	for (j = MAXSTR - len[23] - len[22], k = 0; k < len[22]; j++, k++) 
		suffix[1][j] = prefix[k]; 

	for (j = MAXSTR - len[23] - len[22] - len[21], k = 0; k < len[21]; j++, k++) 
		suffix[1][j] = prefix[k]; 

	for (j = 0, k = len[20] - (MAXSTR - len[23] - len[22] - len[21]); k < len[20]; k++) 
		suffix[0][j] = prefix[k]; 

	while (scanf("%d\n", &N) != EOF){ 
		for (pLen = 0, c = getchar(); c == '0' || c == '1'; pLen++, c = getchar()) 
			pattern[pLen+1] = c == '1'; 
		pattern[pLen+1] = 2; 
		
		for (n = 1; n <= pLen; n++){ 
			fail[n] = fail[n-1]; 

			while (fail[n] != 0 && pattern[fail[n]+1] != pattern[n]) 
			{
				fail[n] = fail[fail[n]]; 

				if (pattern[fail[n]+1] == pattern[n]) 
					fail[n]++; 

				if (fail[n] == n) 
					fail[n] = 0; 
			}
		}

		dp[0] = dp[1] = dp[2] = 0; 

		if (pLen == 1) 
			dp[2] = dp[pattern[1]] = 1; 
		else if (pLen == 2 && pattern[1] == 1 && pattern[2] == 0) 
			dp[2] = 1; 

		for (i = 3; i <= N; i++) 
			dp[i] = dp[i-1] + dp[i-2] + overlapping(i); 


		printf("%lld\n", dp[N]); 
	} 

	return 0;
}
