#include <bits/stdc++.h>
#include <sys/types.h>
#include<sys/wait.h>
#include <unistd.h>
using namespace std;

int main(){
	string hel = "Hello World";
	for(int i=0;i<hel.length();i++){
		int temp = fork();
		wait(NULL);
		if(temp>0)
			return 0;
		else{
			cout<<hel[i]<<flush;
		}
	}
}