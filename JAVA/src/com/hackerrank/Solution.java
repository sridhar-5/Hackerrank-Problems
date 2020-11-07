package com.hackerrank;

import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []args){
        Scanner in = new Scanner(System.in);
        int no_of_queries = in.nextInt();
        int i,a,b,n;
        int sum = 0;
        int j;
        for(i=0;i<no_of_queries;i++) {
            sum = 0;

            in.nextLine();
            a = in.nextInt();
            b = in.nextInt();
            n = in.nextInt();
            for (j = 0; j < n; j++) {
                sum = (int) (sum + b*Math.pow(2, j));
                System.out.print((sum+a) + " ");
            }
            System.out.print("\n");
        }

    }
}