import java.util.*;

class Collections2
{
     public static void main(String arg[])
     {
          LinkedList <String>lobj = new LinkedList<String>();

          lobj.add("pooja");
          lobj.add("Pooja");
          lobj.add("Rohan");
          lobj.add("Sneha");
          lobj.add("neha");

          System.out.println("Elements of Linked list are : "+lobj);

          lobj.addFirst("Dhanu");
          System.out.println("Elements of Linked list are : "+lobj);

          lobj.addLast("Sona");
          System.out.println("Elements of Linked list are : "+lobj);

          Iterator iobj = lobj.iterator();
          System.out.println("Data using iterator is : ");
          while(iobj.hasNext())
          {
               System.out.println(iobj.next());
          }

          if(lobj.contains())
          {
               System.out.println("");
               
          }
          else
          {
               System.out.println("");

          }
          lobj.remove();
          System.out.println("Elements of Linked list are : "+lobj);

          lobj.remove();
          System.out.println("Elements of Linked list are : "+lobj);

          lobj.remove(1);
          System.out.println("Elements of Linked list are : "+lobj);

          lobj.remove(0);
          System.out.println("Elements of Linked list are : "+lobj);

          lobj.removeLast();
          System.out.println("Elements of Linked list are : "+lobj);

          System.out.println("Number of elements are : "+lobj.size());


          lobj.clear();
          System.out.println("Elements of Linked list are : "+lobj);


     }
}