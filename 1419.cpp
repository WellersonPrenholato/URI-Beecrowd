#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rounds;
    int i;

    while(scanf("%d", &rounds), rounds != 0)
    {
        int mark[rounds+1], leti[rounds+1];
        mark[rounds] = 0, leti[rounds] = 0;

        for(i = 0; i < rounds; i++)
            scanf("%d", &mark[i]);

        for(i =0; i < rounds; i++)
            scanf("%d", &leti[i]);

        int cntm =0, cntl =0, auxm, auxl,
            cauxm = 1, cauxl = 1;

        bool bonus = true;
        
        for(i = 0; i < rounds; i++)
        {
            cntm += mark[i];
            cntl += leti[i];
            auxm = mark[i];
            auxl = leti[i];
            if(bonus)
            {
                if(auxm == mark[i+1])
                    cauxm++;
                if(auxl == leti[i+1])
                    cauxl++;
                if(auxm != mark[i+1])
                    cauxm = 1;
                if(auxl != leti[i+1])
                    cauxl = 1;
                if(cauxm == 3 && cauxl == 3)
                    bonus = false;
                if(cauxm == 3 && cauxl < 3)
                {
                    cntm +=30;
                    bonus = false;
                }
                if(cauxl == 3 && cauxm < 3)
                {
                    cntl += 30;
                    bonus = false;
                }
            }
        }
        if(cntm > cntl)
            printf("M\n");
        if(cntl > cntm)
            printf("L\n");
        if(cntm == cntl)
            printf("T\n");
    }
    return 0;
}
