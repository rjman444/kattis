package com.company;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class Mjehuric {
    public static void Bubble(ArrayList<Integer> data) {
        ArrayList<Integer> result = new ArrayList<>(Arrays.asList(1, 2, 3, 4, 5));

        while (!data.equals(result)) {
            for (int i = 0; i < 4; i++){
                if (data.get(i) > data.get(i + 1)) {
                    int temp = data.get(i);
                    data.set(i, data.get(i + 1));
                    data.set(i+1, temp);
                    System.out.println(data.toString().replace("[", "").replace("]","").replace(",", " ").trim());
                }

                if (data.equals(result)) {
                    break;
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> data = new ArrayList<>(5);
        for (int i = 0; i < 5; i ++) {
             data.add(sc.nextInt());
        }
        Bubble(data);
    }

}
