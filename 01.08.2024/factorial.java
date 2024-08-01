import java.util.Scanner;
class fac
{
    public static void main(String[] args)
{
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter a number: " );
        int n=sc.nextInt();
        System.out.println(n);
        int f=1;
        for(int i=1;i<=n;i++)
{
            f*=i;
        
}
        System.out.println("The factorial of "+n+" is "+f);
}
}
