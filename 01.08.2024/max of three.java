import java.util.Scanner;
class max{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter a number 1: ");
        int a=sc.nextInt();
        System.out.println(a);
        System.out.print("Enter a number 2: ");
        int b=sc.nextInt();
        System.out.println(b);
        System.out.print("Enter a number 3: ");
        int c=sc.nextInt();
        System.out.println(c);
        
        if(a>b && a>c){
            System.out.println(a +" is larger");
        }else if(b>a && b>c){
            System.out.println(b +" is larger");
        }else{
            System.out.println(c +" is larger");
        }   
    }      
}
