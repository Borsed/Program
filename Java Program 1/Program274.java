// accept string from user and string covert character array
import java.util.*;

class Program274
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter string : ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();
        
        System.out.println("Data is : "+Arr);
    }
}