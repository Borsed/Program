// string count number of word (control all white space count)(check program)

import java.util.*;

class Program487
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string");
        String str = sobj.nextLine();

        String data = str.replaceAll("\\s+"," "); // control all white space

        String newstr = str.trim();  // control after and befor white spaces

        String Arr[] = newstr.split(" ");

        System.out.println("Number of words are : "+Arr.length);
    }
}