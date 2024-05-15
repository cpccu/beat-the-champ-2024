import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
       Scanner a=new Scanner(System.in);
       String A=a.nextLine();
       int count=0;
       for(int i=1;i<A.length();i++){
        if(A.charAt(i)==A.charAt(i-1)){
            count++;
        }
       }
       if(count>=7){
        System.out.println("YES");
       }
       else{
        System.out.println("NO");
       }
    }
}
