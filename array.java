import java.util.*;
public class array{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter no of elements: ");
        int n=sc.nextInt();
        int arr[]=new int[n];
        System.out.print("Enter elements: ");
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        
        }

        for(int i=0;i<arr.length;i++){
            System.out.println(arr[i]+" ");
        }

        arr[2]=76;


        System.out.print("Updated array: ");

        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }




    }
}