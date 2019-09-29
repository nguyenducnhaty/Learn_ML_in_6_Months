<h1>Crash Course in Java</h1>

The Software Design and Architecture needs me to have a basic understanding of Java so we will be going through a Java Crash Course. Notes are from [Java Tutorial for Beginners [2019] by Programming with Mosh](https://www.youtube.com/watch?v=eIrMbAQSU34).

<h2>Anatomy of a Java Program</h2>

- The smallest building block in Java programs are functions. Example function:

```java
// ReturnType indicates the return type of the function and if it doesn't return anything, you can have void
ReturnType Name() {

}
```

Every Java program should have atleast one function, that is `main`, _main_ is the entry point to our programs whenever we execute a Java program the main function gets called and the code inside this gets executed. Now these functions don't exist on their own, they should always belong to a __class__ so a class in a container for one one or more related functions. Basically we use these classes to organize our code. Every Java should have atleast one main class called `main`.

```java
class Main {
    void main() {

    }
}
```

The functions inside a class is called a _method_. In Java, all these classes and methods should have an access modifier, an access modifier is a special keyword that determines if other classes and methods in this program can access these classes and methods. We have various access modifiers like _public_, _private_ and so on. Most of the time we use the public access modifier so we put that infront of our class and method declarations.

```java
public class Main {
    public void main() {

    }
}
```

This is the basic structure of the Java program. In Java, we name our classes in `PascalNamingConvention` and our methods in `camelNamingConvention`.

<h3>How Java Code Gets Executed</h3>

Now, let's see what happens under the hood the moment a Java program gets executed. There are basically two steps involved here, _compilation_ and _execution_. In the compilation step the Java compiler is used to compile our code into a different format called Java bytecode.

<img src="../Java Basics/images/compiler.png">

This compiler comes with the Java Development Kit. If you go to java.com/download, you can download Java or more accurately Java runtime environment for various operating systems. This Java runtime environment has a software component called Java Virtual Machine or JVM. This JVM takes our Java bytecode and translate it to the native code for the underlying operating system.

<img src="../Java Basics/images/jvm.png">

So if you are on Windows machine this Java Virtual Machine converts our Java bytecode into the native code that windows can understand. This architecture is the why Java applications are portable and platform independent. We can write a Java program on a Windows machine and execute it on Linux, Mac or any other operating system that have a Java runtime environment.

<h2>Java Editions</h2>

<img src="../Java Basics/images/editions.png">

- Java Standard Edition is the core Java Platform. This is where we will be writing our code.

-The Java Enterprise Edition is used for building very large scale and distributed systems. It's build on top of Java Standard Edition and provides additional libraries for building fault tolerant distributed multi-tiered software.

- We have Java Micro Edition which is a subset of Java Standard Edition designed for mobile devices so it has libraries specific to mobile devices.

- Finally we have Java Card which is used in smart cards.

<h2>Types</h2>

<h3>Variables and Constants</h3>

We use variables to temporarily store data in computer's memory. For example:

```java
public class Main {

    public static void main(String[] args) {
        // Let's say you want to store age:
        int myAge = 25;
        System.out.println(myAge);

        // After initializing we can change the variable value:
        myAge = 27;
        System.out.println(myAge);

        // We can also copy the value of one variable into another:
        int herAge = myAge
        System.out.println(herAge);
    }
}
```

<h3>Primitive and Reference Types</h3>

Basically we have two categories of types:
1. Primitive: for storing simple values
2. Reference: for storing complex objects

<img src="../Java Basics/images/primitives.png">

Let's look at an example, earlier we used an integer for storing someone's age but as you can see above integers take four bytes and allow us to store values up to two billion and we don't need four bytes of memory to store someone's age, all we need is one byte because with 1 byte we can store values up to 127:

```java
public class Main {

    public static void main(String[] args) {
        // Let's say you want to store age:
        byte myAge = 27;
        System.out.println(myAge);

        // Let's define an integer called view counts to store views of you tube videos:
        // In Java if you are using a big number, we can use _ to separate every three digits to make it more readable
        int viewsCount = 123_456_789;

        // With integers we can store values up to 2 billion so if you try to store 3 billion, you will get a
        // compilation error from your code editor so we store it in long and your editor will still throw an error
        // because it thinks it is still an integer so what you can do is add an `L` at the end of the number like so:
        long newViewsCount = 3_123_456_789L;

        // Let's store 10.99 as double but obviously since you don't need that much memory to store this,
        // we will store it with float. But you will still get a compilation error because by default Java sees
        // these numbers with decimal point as double so similar to what we did for long, we add `F` at the end:
        float price = 10.99F;

        // Let's store a character, remember that char stores one character where string stores multiple
        char letter = 'A';

        // Let's define a boolean:
        boolean isEligible = false;
    }
}
```

We looked at primitive types to store simple values like numbers, boolean values or single characters. In contrast we use reference types to store complex objects like data objects or mail messages. In Java we have 8 primitive types that you have seen before, all the other types are references. For example:

```java
// Since we will be using Date from a different package we will have to import it:
import  java.util.Date;

public class Main {
    public static void main(String[] args) {
        byte age = 27

        // Declaring and initializing a reference type is slightly different from primitive type.
        // One of the differences between primitive and reference types is we will use the `new` operator to
        // allocate memory for the variable now. For Primitive types Java runtime environment will deal with memory
        // allocation but when dealing with reference types we should always allocate memory.
        // Now we don't have to release this memory, Java runtime environment will automatically take care of that.
        Date now = new Date();
        // Defined here is an instance of the Date class so this class is defined template or blueprint
        // for creating new object or new instances. FOr example, we can have a class called human and we can have
        // objects like John Bob Mary and so on. So an object is an instance of a class.
        // Now this objects or this classes have members that we can access using the dot operator.
        now.getTime();
        // This is another difference between the primitive types. The primitive types don't have members.

        System.out.println(now);
    }
}

```

Again, the difference between the primitive and different types is that you can use primitive types for storing simple values and reference types for storing complex objects. But there is a very important difference between these two categories of types in terms of memory management. For example:

```java
public class Main {
    public static void main(String[] args) {
        byte x = 1;
        byte y = x;
        System.out.println(y);

        // Updating the values:
        x = 2;
        System.out.println(y); // returns 1
    }
}
```

You will see that the value of the _y_ doesn't change because _x_ and _y_ are stored in two different memory locations so they are completely independent of each other so when you change the value of _x_, it doesn't affect the value of _y_.

<img src="../Java Basics/images/primitive_memory.png">

But in the case of Reference types this is not the case. For example:

```java
import java.awt.*;

public class Main {
    public static void main(String[] args) {
        Point point1 = new Point(x:1, y:1);
        Point point2 = point1;
        System.out.println(point2);

        // Updating the values:
        point1.x = 2;
        System.out.println(point2); // returns 2
    }
}
```

Now, when Java runtime environment executes its going to allocate some memory to store the _Point object_ and let's say the address of the memory location is `100`. Then it's going to allocate a separate part of the memory and it's going to attach this label to that memory location _point1_. In that memory location it's going to store the address of our point object. So this is the critical difference between primitive and reference types. When we declare a primitive variable like a byte the value that we assigned to that variable will be stored in that memory location but when we use a reference type like this _point_ class our variable is going to hold the address of the point object in memory, not the actual point object.

<img src="../Java Basics/images/reference_point.png">

Now when we copy the variable _point1_ to variable _point2_, we copy the address or the reference to the point object in memory, that is why we refer to these types as reference types because they don't store the actual values, they store a reference to an object somewhere in the memory.

<img src="../Java Basics/images/reference_point_example.png">

So in this example, _point1_ and _point2_ are referencing the exact same _Point object_ in memory. We only have one point object so these two variables are not independent of each other and referencing the same object. That means if I update this point object through either of these variables the changes will be visible to the other variable.

<h3>Strings</h3>




<h3>Casting</h3>

<h3>Numbers, Strings and Arrays</h3>

<h3>Read Input</h3>
