// string count number of word (control before and after white space count)

import java.util.*;

class Program486
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string");
        String str = sobj.nextLine();

        String newstr = str.trim();

        String Arr[] = newstr.split(" ");

        System.out.println("Number of words are : "+Arr.length);
    }
}