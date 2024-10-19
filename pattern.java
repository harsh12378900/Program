
import java.util.Scanner;

public class pattern {
    public static void main(String[] args) {
        @SuppressWarnings({ "unused" })
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the value of a");
        int i, j;
        for (i = 5; i >=1; i--) {
            for (j = 1; j <=5; j++) {
                if(i>=j)
                {
                    System.out.print(j);
            }
            else{
              System.out.print(" ");  
            }
                
            }
        System.out.print("\n");
        }
    }

}

