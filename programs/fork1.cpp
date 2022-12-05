#include <iostream>
#include <sys/types.h>
#include <unistd.h>

using namespace std;

int main()
{
    int pid1 = fork();
    int pid2 = fork();
    // if(pid1 > 0){
    //   cout << "Parent Process: " << getpid() << " PID: " << pid1 << endl;
    // }else{
    //   cout << "Child Process: " << getpid() << " PID: " << pid1 << endl;
    // }

    // if(pid1 == 0 && pid2 == 0)
    //   int pid3 = fork();

    cout << "Hello -- PID: " << getpid() << "\tPID1: " << pid1 << "        PID2: " << pid2 << endl;
}