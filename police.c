#include<stdio.h>
int main()
 {
    int n;
    //printf("Enter Number of Events:");
    scanf("%d", &n);
    int availableOfficers = 0;
    int untreatedCrimes = 0;
    int events[n];
    //printf("Enter the events:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&events[i]);
    }
    for (int i = 0; i < n; i++) 
    {
        if (events[i] == -1)
        {
            if (availableOfficers > 0) 
            {
                availableOfficers--;
            } 
            else 
            {
                untreatedCrimes++;
            }
        } 
        else
        {
            availableOfficers += events[i];
        }
    }
    //printf("Number of Untreated Crimes:");
    printf("%d \n", untreatedCrimes);
    
    return 0;
}