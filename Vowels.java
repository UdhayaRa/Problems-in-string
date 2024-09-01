import java.util.Scanner;

public class Vowels {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a string ");
        String s = scanner.nextLine();


        s = s.toLowerCase();
        int count=0;
        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                count=1;
                System.out.print(ch + " ");
            }
        }
        if (count==0) {
            System.out.println("Vowels not found");
        }
    }
}