import java.util.*;

class AgeInvalidException extends Exception
{
     AgeInvalidException(String str)
     {
       super(str);
     }
}
class UserDefine
{
     public static void main(String ard[])
     {
          Scanner sobj = new Scanner(System.in);
          System.out.println("Enter your age : ");
          int iAge = sobj.nextInt();

          try
          {
            if(iAge < 15)   
            {
               throw new AgeInvalidException("Your name is less than 15");               

            }
            else
            {
               System.out.println("Age is Valid");
            }
          }
          catch(AgeInvalidException obj)
          {
               System.out.println(obj);
          }
     }
}