//Accept n number and return and perform addition of n number
import java.util.*;

class Program263
{
    public static void main(String arg[])
    {
        int Arr[] = {10,20,30,40,50};
        int iSum = 0;
        for(int i = 0; i < Arr.length; i++)
        {
            iSum = iSum + Arr[i];
        }
        System.out.println("Addition is : "+iSum);
    }
}