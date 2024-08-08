import java.util.*;
class Fibonacci
{  
    public static void main(String args[])  
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter number");
        int n=sc.nextInt();
        int a=0,b=1,c;    
        System.out.print(n1+" "+n2);    
        
        for(int i=2;i<n;i++)    
        {
            c=a+b;    
            System.out.print(" "+c);    
            a=b;    
            b=c;    
        }    
  
}}  
