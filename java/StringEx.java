//
// Simple String example
//
public class StringEx
{

public static void main(String[] args)
{
   // In Java, __ALL__ class variables are references
   // In Java, __ALL__ objects are created with new,
   //                  EXCEPT the line below
   String v = "Hello world";  // creates String object containing
                              // "Hello world" and makes v refer to it.
   System.out.println(v);
   v = new String("Goodbye"); // but can create Strings the usual way too
   System.out.println(v);
   // after the second String object is created and the reference
   // assigned to v, there is no longer any reference to the first
   // String object (Hello world). It is GARBAGE. Java has a built-in
   // garbage collector, and it will eventually reclaim the space and
   // destroy the object
}

}

