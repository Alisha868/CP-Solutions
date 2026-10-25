import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int m1 = sc.nextInt();
        int m2 = sc.nextInt();
        int m3 = sc.nextInt();

        if (m1 > 90)
            System.out.println("A");
        else if (m1 > 70)
            System.out.println("B");
        else if (m1 >= 40)
            System.out.println("C");
        else
            System.out.println("F");

        if (m2 > 90)
            System.out.println("A");
        else if (m2 > 70)
            System.out.println("B");
        else if (m2 >= 40)
            System.out.println("C");
        else
            System.out.println("F");

        if (m3 > 90)
            System.out.println("A");
        else if (m3 > 70)
            System.out.println("B");
        else if (m3 >= 40)
            System.out.println("C");
        else
            System.out.println("F");

        sc.close();
    }
}