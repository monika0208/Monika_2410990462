import java.util.*;
public class q2 {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter a number: ");
        int a=sc.nextInt();
        if(a<=0){
            System.out.println("Invalid number");
            return;
        }
        
        for(int i=1;i<=10;i++){
            System.out.println(a+" X "+i+ " = " + a*i);
        }
    }
    
}
