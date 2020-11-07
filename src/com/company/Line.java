package com.company;

import java.util.ArrayList;

import java.util.Collections;
import java.util.Scanner;

public class Line {


    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<String> data = new ArrayList<>(n);
        for (int i = 0; i < n; i ++) {
             data.add(sc.next());
        }

        ArrayList<String> sorted = new ArrayList<>(data);
        Collections.sort(sorted);
        ArrayList<String> reverse = new ArrayList<>(sorted);
        Collections.reverse(reverse);
        if (data.equals(sorted)) {
            System.out.println("INCREASING");
        } else if (data.equals(reverse)) {
            System.out.println("DECREASING");
        } else {
            System.out.println("NEITHER");
        }
    }

}
