import java.util.Scanner;
public class Main{
    public static void main(String[] args) {
        Scanner a=new Scanner(System.in);
        String A=a.nextLine();
        String B=a.nextLine();

        for(int i=0;i<A.length();i++){
            if(A.charAt(i)==B.charAt(i)){
                System.out.print("0");
            }
            else if(A.charAt(i)!=B.charAt(i)){
                System.out.print("1");
            }
        }
        
    }
}