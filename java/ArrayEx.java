//
// Array example
// - in Java, arrays are objects! 
//  - they are not objects in C/C++, just simple
//    collections of elements
// - you must create the array using new
//
public class ArrayEx 
{

public static void main(String args[])
{
   int[] myVals = new int[32];
   System.out.println("Array Examples");
   System.out.println("Array size = " + myVals.length);
   for (int i=0; i < myVals.length; i++) {
       System.out.println("vals["+i+"]="+myVals[i]);
   }
   return;
}

}
