#include <bits/stdc++.h>
#include <sys/types.h>
#include<sys/wait.h>
#include <unistd.h>
using namespace std;

int main(){
	// int first = fork();
	// int second = fork();
	// cout<<"1st one "<<first<<endl;
	// cout<<"second one "<<second<<endl;
	// cout<<"Hi "<<first<<endl;
	// cout<<"ho "<<second<<endl;
	int temp = fork();
	wait(NULL);
	if(temp!=0)
		return 0;
	else
		cout<<" c "<<temp<<endl;
	int t = fork();
	wait(NULL);
	if(t!=0)
		return 0;
	else
		cout<<" b "<<endl;
	int z = fork();
	wait(NULL);
	if(z!=0)
		return 0;
	else
		cout<<" a "<<endl;
}