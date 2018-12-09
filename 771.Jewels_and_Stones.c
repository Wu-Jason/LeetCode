int numJewelsInStones(char* J, char* S)
{
	int hash[128] = {0};
	int len = strlen(S);
	int count = 0;
	for (int i=0; i<len; i++){
		hash[S[i]] += 1;
	}
	for (int i=0; i<strlen(J);i++){
		count += hash[J[i]];
	}
	return count;
}