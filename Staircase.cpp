//
// HackerRank
// Staircase
// Passed all testcases
//
// Created by Abuhena Rony
//
#include<bits/stdc++.h>

void staircase(int n) {
        for(int i=1; i<=n; i++)
    {
        for(int k=1; k<=n-i; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
