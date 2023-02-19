// accept string from user and count number of character
import java.util.*;

class Program268
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Please enter your full name : ");
        String str = sobj.nextLine();

        System.out.println("Number of character are "+str.length());
    }
}