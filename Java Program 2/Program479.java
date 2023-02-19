// string small character count(loop change)

import java.util.*;

class Program479
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        System.out.println(str.length());
        System.out.println(Arr.length);

        int Count = 0;

        for(char ch : Arr)  // for each loop
        {
            if((ch >= 'a') && (ch <= 'z'))
            {
                Count++;
            }
        }
        System.out.println("small character are : "+Count);
    }
}