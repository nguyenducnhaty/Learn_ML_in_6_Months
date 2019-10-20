<h1>Week 1: Object-Oriented Analysis and Design</h1>



<h2>Introduction to Software Design and Architecture</h2>


So, what is software design and architecture? How does it improve your software products? Consider this scenario. You join a project that's been in development for a while. You look at the code and become instantly overwhelmed. You can't tell what the purpose of the pieces are, things are unorganized, and design documentation is non-existent. You don't even know where to begin. These are all signs that the project was not well-designed from the outset. Or let's say that you are now working on a personal development project. When you began, you weren't quite sure what the functionalities would be, but you just started coding. It didn't matter that the code was unorganized because you were the only one working on it and you know how it works. You come up with a great new feature for your product, but in implementing it, you broke the program elsewhere. You should have designed it right. I'm guessing that you have experienced scenarios like these. They are quite common in the software industry, which shows you why software design and architecture is so beneficial.

<h3>Software Architect and Design</h3>

Typically, the software designer role would be responsible for outlining a software solution to a specific problem by designing the details of individual components and their responsibilities. A software architect role would be responsible for looking at the entire system and choosing appropriate frameworks, data storage, solutions and determining how components interact with each other. That brings us to the primary difference between software design and software architecture. In short, software design looks at the lower level aspects of a system, whereas software architecture tends to look at the bigger picture, the higher level aspects of a system. Think of this like designing a building. An architect focuses on the major structures and services, while an interior designer focuses on the smaller spaces within.


<h2>Object-Oriented Thinking</h2>


<h3>Object-Oriented Modeling</h3>

You may have heard the term Object-Oriented Modeling, you may have even applied it whether you knew it or not. So what is it? "When solving a problem, object-oriented modeling involves the practice of representing key concepts through objects in your software. Depending on the problem, many concepts, even instances of people, places or things become distinct objects in the software."

So why should you use objects to represent things in your code? It is a way of keeping your code organized, flexible and reusable. It keeps code organized by having related details and specific functions in distinct, easy to find places. This creates flexibility because you can easily change details in a modular way without affecting the rest of the code. You can also reuse code and keep your program simple.

With object-oriented thinking, you often think of everything as objects even living things. And all these objects are self-aware even inanimate things. Start viewing the world around you in terms of objects. It will help you out when you're called upon to design software using object-oriented Modeling.


<h2>Design in the Software Process</h2>


<h3>Software Requirements, Conceptual and Technical Designs</h3>

You can think of developing software as a process that takes a problem and produces a solution involving software. Normally, it's an iterative process, with each iteration taking a set of requirements through to a working and tested implementation and eventually building up a complete solution.

Many developers are eager to go straight into coding despite not fully understanding what to program in the first place. Evidence suggest that diving straight into implementation work is a leading cause of project failure. In a survey from The Standish Group, the most common causes of project failures are related to issues in requirements and design. For example, about 13% of respondents noted incomplete requirements impaired their projects. Unless you want your projects to fail, take your time to form requirements and create a design.

For the design phase, you will have to think like an architect, which means thinking about the structure and behavior of your software. To fo this you must elicit requirements from the client. Eliciting requirements involves actively probing a client's vision, by asking questions about issues that the client may not have considered. Besides identifying specific needs, you learn to ask about potential trade offs the client will need to make in the solution. With a clear idea of what you are trying to accomplish, you can pivot to Conceptual Design mock ups and eventually, Technical Design diagrams.

Once the client has answered all your questions regarding his vision, you now have an initial set of requirements allowing you to start thinking of possible designs. The design activity involves taking requirements and outlining a solution. This activity involves producing a conceptual design and then a technical design, which results in two corresponding kinds of artifacts, conceptual mockups and technical diagrams.

Conceptual mockups provide your initial thoughts for how the requirements will be satisfied. At this point, you focus on to identifying major components and connections and defer the technical details. Each component has a task it needs to perform, known as responsibility. These responsibilities are non technical, for example if you are building a house with a gym, bedroom and a kitchen the gym's responsibility is to provide the homeowner with space and power for fitness activities and equipment. Similarly, the kitchen's main responsibility is to provide space for storing kitchenware, appliances, food supplies, and power and water for meal preparation. As a main component, the house has the overall responsibility of providing enough power, water, and support for all the required components within it. Note, how we don't mention specifics about wiring and plumbing. These are technical details that cannot be fully addressed until the conceptual mockups are completely understood. For instance, determining the size of the electrical distribution panel for the house will require adding up the power requirements necessary to energize each of the rooms. I recommend finishing the conceptual design before moving on to forming the technical design. The clearer your conceptual design is, the better your technical designs will be.

Continuing with the architectural example, you've wowed the homeowner with your conceptual design and, together, now have a shared vision for the dream home that will now be built. After the conceptual mockups are done, it is time to define the technical details of the solution. From the conceptual design, you know all the major components and connections and their associated responsibilities. Describing how these responsibilities are met is the goal of technical design. In a technical design, you start specifying the technical details of each component. This is done by splitting components into smaller and smaller components that are specific enough to be designed in detail. For example, the gym component will require further components like a floor. The floor will be responsible for supporting a lot of weight. Is our homeowner training to be an Olympic lifter. By breaking down components more and more into further components, each with specific responsibilities, you get down to a level where you can do a detailed design of a particular component, such as, describing how to reinforce the floor.

Technical diagrams express how to address specific issues like this. Compromises might arise when creating an acceptable solution. If components and connections and their responsibilities in your conceptual design prove impossible to achieve in the technical design. Or fail to meet the requirements, you will need to go back to your conceptual design and rework it. Once you come to a feasible design, you want to continuously check with your client that the conceptual mockups capture what they want. In the architectural example, such checks are important. Because you'd rather adjust the design on paper than demolish an actual wall later. The technical diagrams then become the basis for constructing the intended solution.

From a conceptual design, we move to making a technical design where, just like building design, you try to add a detail how those components, connections and responsibilities can be implemented. For example, we refine each component until it is specific enough to be designed in detail.

Components, when they are refined enough, turn into collections of functions, classes or other components. These pieces then represent a much simpler problem that the developers can individually implement. You can easily imagine that larger systems require more design time. With large systems, there are also more components, connections and responsibilities to keep track of. And since these components themselves will be big, they will be refined to many more components before the design can be detailed.

<h3>Expressing Requirements with User Stories</h3>

Once a requirement is elicited, it needs to be expressed in some form. One technique for expressing a requirement is called a __user story__. A user story is simply a requirement, often from the perspective of an end-user, which is stated in natural language. You may have seen Sam using one of these in the previous video. A user story looks like this:

*As a ______, I want to ______ so that ______.*

Put the user role into the first blank. This may be quite simple for software in which there is generally only one type of user, or a bit more complex in cases where the software may do different things for different people. Either way, this clarifies who wants to use this feature.

In the second blank, put the goal that the user role wants to achieve. This will lead to some feature that you want to implement.

After so that, put the reason why the user role wants this goal. Sometimes this clause is omitted if the benefits are clear and generally known.

After you fill in a user story, you can apply __object-oriented thinking__ to it to discover objects and possibly further requirements!

_For example:_

Imagine that you introduce the user story technique to your customer, and they give you the following sentence:

*As an __online shopper__, I want to add an __item__ to my __shopping cart__, so that I can purchase it.*

Usually, the nouns correspond to objects in your software. So in this example, you have identified three objects: first, the user role is associated with an object in the software (the online shopper). An item could be any product at the store, while a shopping cart is an object for tracking items for purchase.

Let's have another look at the sentence:

*As an online shopper, I want to __add__ an item to my shopping cart, so that I can __purchase__ it.*

Verbs can help you identify the requirements that your objects might have. In this example, add and purchase might be responsibilities of the shopping cart. Verbs may also help you identify connections between objects.

The last point is a bit more subtle: a user story can also help you discover __connections__ between objects. In this example, it is probably fairly obvious. One online shopper is typically associated with one shopping cart. The shopping cart should be capable of holding multiple items.

User stories are just one of many techniques that can be used to express requirements for a software system. They are simple to use and can allow you to apply object-oriented thinking and discover objects and further requirements.

<h3>Categories of Objects in Design</h3>

As you are breaking down objects, you may find that you will identify different kinds of objects. Many developers have noticed the same thing, and there are generally three categories of objects.

- __Entity objects__ are the most familiar, because they correspond to some real-world entity in the problem space. If you have an object representing a chair in your software, then this is an entity object. If you have an object representing a building or a customer, these are all entity objects. Generally, these objects will know attributes about themselves. They will also be able to modify themselves, and have some rules for how to do so.

When you are identifying objects to include in your software and breaking down those objects into smaller objects, you will initially get entity objects. The other categories of objects will come later, as you start to think about the technical design of the software.

- __Boundary objects__ are objects which sit at the boundary between systems. This could be an object that deals with another software system - like an object that obtains information from the Internet. It could also be an object with the responsibility of showing information to the user and getting their input. If you program a user interface - the visual aspect of software - you are probably mostly working with boundary objects. Any object that deals with another system - a user, another software system, the Internet - can be considered a boundary object.

- __Control objects__ are objects which are responsible for coordination. You will discover control objects when you attempt to break down a large object, and find that it would be useful to have an object that controls the other objects. A great example is a Mediator: it simply coordinates the activities of many different objects so that they can stay loosely coupled.

At this point it may be difficult to see how these object types can help you. That is okay; breaking down objects in the best way takes real-world practice and experience. The most important thing to realize at this point is that your software will not solely consist of entity objects. Of course there will be objects for real-world items like tables and chairs or invoices and shopping carts, but there must also be objects for coordination and for interfacing with outside systems. They are a little bit harder to see, but no less essential, especially as you move from small projects to more complex software.


<h2>Design for Quality Attributes</h2>


<h3>Competing Qualities and Trade-offs</h3>

As you design software to satisfy requirements, you have to make many important decisions. Certain design decisions involve trade-offs in different quality attributes such as performance, convenience and security.

When designing software, it is important to consider how qualities can compete in a proposed solution under different situations and determine a suitable compromise. This is a constant balancing act for a software architect.

There's always a lot of competing concerns with software design and I think, obviously, from a product perspective, you have things like usability and performance. Obviously, those are are critical. Scalability is always important. Where the trade-offs really seem to be important is when it comes to security, code quality, time to market.

Architecture is you defining what are those quality attributes that you're chasing after. And you're going to deal with performance, you're going to deal with scalability, you're going to deal with maintainability, security, all that stuff.

Context is important to determine what choice of solution is right for the balance of qualities. For example, a home located in a low crime area will require different security needs from one located in a high crime area. For software, talking to its stakeholders will help you to understand the context. Sometimes choices made in your software designs can have unintended consequences. For example, an idea that seems to work fine for a relatively small amount of data may become impractical if there is a need to deal with a lot more data. It's good to get other perspectives on your technical designs for a more rounded implementation. These perspectives can be in the form of asking other developers for their opinion or having a design review session.

Besides design reviews, it is worthwhile to slow down while implementing a system and test it carefully. You can prototype alternative ideas and run tests to see what works best. If a design decision has unintended consequences, tests can help to catch them.

For software, there are functional requirements that describe what the system or application is expected to do. For example, a media app has a functional requirement of being able to download a full length movie. Naturally, a software design needs to outline a solution to meet such requirements correctly. So, a key quality to satisfy is simply correctness.

Besides functional requirements, there are also non-functional requirements that specify how well the system or application does what it does. Such requirements may describe how well the software runs in particular situations.

Beyond correctness, other qualities to satisfy include performance, resource usage and efficiency, in terms that can be measured from the running software. Both functional and non-functional requirements are important to satisfy. You'll need to discuss what is acceptable with the stakeholders.

Another kind of non-functional requirement concerns how well the code of the software can evolve. For example, parts of the implementation may have to support use in other similar software products. Also, the implementation may have to allow for future changes. So, other qualities to satisfy for the software can include re-usability, flexibility and maintainability.

There is a common trade-off between performance and maintainability. High performance code may be less clear and less modular making it less maintainable. Another trade-off is security and performance. The extra overhead for high security may reduce performance. Extra code for backward compatibility can worsen both performance and maintainability. Achieving the extremes in such competing qualities can, in a way, pit users against developers or users against other users. Generally, you have to strike a balance during design. You should ask how much performance, maintainability, security or backward compatibility is needed. Can you cut back on performance to gain more security? Can you drop some backward compatibility to have better performance?


<h2>Class Responsibility Collaborator (CRC)</h2>


<h3>Record, Organize, and Refine Components</h3>

When forming a software design we identify components, connections and responsibilities from some requirements when forming the conceptual design. This is where you give your initial thoughts on how you might satisfy the requirements. In the technical design, you learned how these components and connections are further refined to give them technical details. This makes them easier to implement.

Although identifying components, their responsibilities and connections, is a good first step in software design, we haven't yet demonstrated a way of representing them. This technique uses CRC cards where CRC stands for __Class, Responsibility, Collaborator__. Similar to how note cards help you organize your talking points, CRC cards help you to organize your components into classes, identify the responsibilities and determine how they will collaborate with each other.

A CRC card has three sections. The top of the card has the _class name_. On the left are the _responsibilities_ of the class, and on the right, you list _collaborators_. Collaborators are other classes that the class interacts with to fulfill its responsibilities. So, how can we use this while forming the conceptual design? To keep track of each candidate component and its responsibilities using a CRC card, you place a component's name in the class name section and the responsibilities in the responsibilities section. That's pretty straightforward so far. So, what about the connections? In the collaborators section, you list other components that your current component connects to or interacts with to fulfill its responsibilities.

<img src="../1. Object-Oriented Design/images/crc.png">

A CRC card can be as simple as a physical index card marked into three sections. They are cheap, editable and widely available. CRC cards are small on purpose, so you can't write much on them. This forces you to keep breaking down each component into smaller components and eventually, classes that are small enough to be individually described on index cards. A key advantage of using CRC cards is that it allows you to physically reorganize your design. You can move related cards together or situate cards to suggest relationships.



<h1>Week 2: Object-Oriented Modeling</h1>



<h2>Creating Models in Design</h2>


<h3>Models: Bridging Concepts and Solutions</h3>

You don't dive right into code when you are building complex software, there is a design step in between that iteratively deals with both the problem space and the solution space. You need conceptual design to break down the problem further and further into manageable pieces. You also need technical design to describe and refine the solution.

For many kinds of complex problems, it makes sense to think about the concepts using objects. This has led to the popularity of Object-Oriented Programming with object-oriented languages. But even here, you still don't go straight from the problem to writing the code. There's a conceptual design involving object-oriented analysis to identify the key objects in the problem. There's also technical design involving object-oriented design to further refine the details of the objects, including their attributes and behaviors.

The goal during software design is to construct and refine models of all the objects. Initially, the focus will be on the _entity objects_ from the problem space. As a solution in software arises, you introduce _control objects_ that receive events and coordinate actions. You also introduce _boundary objects_ that connect to services outside your system.

The models are often expressed in a visual notation called __Unified Modeling Language__ or __UML__. In Object-Oriented Modeling, you have different sorts of models or UML diagrams to focus on different software issues, like a structural model, to describe what the objects do and how they relate. It's like having a scale model of a building to understand the spatial relationships.


<h2>Four Design Principles</h2>


<h3>Abstraction</h3>

_Abstraction_ is the idea of simplifying a __concept__ in the problem domain to its essentials within some __context__. Abstraction allows you to better understand a concept by breaking it down into a simplified description that ignores unimportant details.

_Rule of Least Astonishment:_ the abstraction captures the essential attributes and behavior for a concept with no surprises and no definitions that fall beyond its scope. You don't want to surprise anyone trying to understand your abstraction with irrelevant characteristics.

In object oriented modeling, abstraction pertains most directly to the notion of a class. A class is like a template for instances of a concept. An object instantiated from a class then has the essential details to represent an instance of some concept.

<h3>Encapsulation</h3>

_Encapsulation_ forms a self-contained object by bundling the data and functions it requires to work, exposes an interface whereby other objects can access and use it, and restricts access to certain inside details.

Encapsulation involves three ideas:
1. _Bundle_ attribute values or data, and behaviors or functions, that manipulate those values together into a self-contained object.
2. _Expose_ certain data and functions of that object, which can be accessed from other objects.
3. _Restrict_ access to certain data and functions to only within that object.

You naturally bundle when you define a class for a type of object. Abstraction helps to determine what attributes and behaviors are relevant about a concept in some context. Encapsulation ensures that these characteristics are bundled together in the same class.

- Encapsulation helps with data integrity. You can define certain attributes and methods of a class to be restricted from outside to access.
- Encapsulation can secure sensitive information.
- Encapsulation achieves what is called, the Abstraction Barrier. Since the internal workings are not relevant to the outside world, this achieves an abstraction that effectively reduces complexity for the users of a class. This increases re-usability.

<h3>Decomposition</h3>

_Decomposition_ is taking a __whole__ thing and dividing it up into different parts. Or, on the flip side taking a bunch of separate __parts__ with different functionalities, and combining them together to form a whole. Decomposition allows you to further break down problems into pieces that are easier to understand and solve.

Important issues to understand are how the parts relate to the whole, such as:
-  _fixed_: over the lifetime of the whole object it will have exactly that much of the part object
- _dynamic number_: parts change in number over time.
- _lifetimes_: of the whole object, and the part objects, and how they could relate or not.
- _sharing_: whole things sharing parts that contain to other whole things.

<h3>Generalization</h3>

_Generalization_ helps us to reduce the amount of redundancy when solving problems. Methods are a way of applying the same behavior to a different set of data.

Generalization can be achieved by classes through __inheritance__. In generalization we take repeated, common, or shared characteristics between two or more classes and factor them out into another class. Specifically, you can have two classes, a parent class and a child class. When a child class inherits from a parent class, the child class will have the attributes and behaviors of the parent class. There can be multiple child classes that inherit from a parent class, and they all will receive these common attributes and behaviors. The child classes can also have additional attributes and behaviors, which allow them to be more specialized in what they can do. In standard terminology, a parent class is known as a _superclass_ and a child class is called the _subclass_.

One of the advantages of doing this is that any changes to the code that is common to both subclasses, can be made in just a superclass. The second benefit is that we can easily add more subclasses to our system, without having to write out all the common attributes and behaviors for them.


<h2>Expressing Design Structure in Java & UML Class Diagrams</h2>


<h3>Abstraction in Java and UML</h3>

For software, developers use technical diagrams called UML Diagrams to express their designs. A UML Class Diagram, or just Class Diagram for short, allows you to represent your design in more detail than CRC cards can. Class Diagrams are much closer to the implementation and can easily be converted to classes in code.

Abstraction allows you to better understand a concept by breaking it down into a simplified description that ignores unimportant details. You can first apply abstraction at the design level using UML Class Diagrams then eventually convert the design into code.

For example, this is the Class Diagram representation of a food class.

<img src="../1. Object-Oriented Design/images/food_class.png">

Each class in the Class Diagram is represented by a box. Each box is divided in three sections much like a CRC card.
- The top part is the __Class Name__. This would be the same as the class name in your Java class.
- The middle part is the __Property section__. This would be equivalent to the member variables in your Java class and defines the attributes of the abstraction.
- Finally, the bottom part is the __Operations section__ which is equivalent to the methods in your Java class and defines the behaviors of the abstraction.

_Properties_, which are equivalent to Java's member variables, are mainly composed of the variable name and variable type.

_Variable_ types, much like in Java, can be classes or primitive types.

_Operations_, which are equivalent to Java's methods, are mainly composed of the operation name, parameter list and return type.

Now, if we compare the CRC card to our Class Diagram:

<img src="../1. Object-Oriented Design/images/crc_class_diagram.png">

You might notice how some of the responsibilities on the card turned into properties in the Class Diagram. Some, specifically isOnSale, became an operation.

Class Diagrams are very close to implementation, making the translation to Java very easy. Class name in Class Diagram turns into a class in Java. Properties in the Class Diagram turn into member variables. And finally, Operations turn into methods.

```java
public class Food {
    public String groceryID;
    public String name;
    public String manufacturer;
    public Date expiryDate;
    public Double price;

    public boolean isOnSale() {

    }
}
```

Consider the following code:

```java
public class ClickCounter {
    private int count;

    public ClickCounter() {
        count = 0;
    }

    public void click() {
        count++;
    }

    public void setClickCount(int clickCount) {
        count = clickCount;
    }

    public int getClickCount() {
        return count;
    }
}
```

Converting this code to Class Diagram is straightforward.

<img src="../1. Object-Oriented Design/images/java_to_diagram.png">

To convert this code to a Class Diagram, we identify ClickCounter as the class name since that's what the class is named in the code. We, then, set the member variable, count, as a property. This property has a type, int. Finally, the methods setClickCount and getClickCount become operations. setClickCount takes a parameter. getClickCount has a return value.

<h3>Encapsulation in Java and UML</h3>

Let's take a look at some notation in a UML class diagram that expresses encapsulation for a student class:

<img src="../1. Object-Oriented Design/images/uml_encapsulation.png">

The student class has its attributes hidden from public accessibility. This is denoted by the minus signs before GPA and degree program. These minus signs indicate that a method or attribute is private. Private attributes can only be accessed from within the class.

Outside this class instead of being able to directly manipulate the student's GPA attribute, you must set the GPA through a public method setGPA. By only allowing an object's data to be manipulated via a public method, you can control how and when that data is accessed. This control of data is like creating a gate. You only let access to data you allow.

__Getter Methods:__

Getter Methods are methods that retrieve data, and their names typically begin with get and end with the name of the attribute whose value you will be returning. Getters often retrieve a private piece of data.

__Setter Methods:__

Setter Methods change data, and their names typically begin with set and end with the name of the variable you wish to set. Setters are used to set a private attribute in a safe way.

Data integrity is why you have Getter and Setter Methods. In order to change a piece of data, you need to go through the correct channels. Data must be accessed in an approved way.

Let's take a look at the code that implements the above class with an additional method:

```java
public class Student{
    private float gpa;
    private String degreeProgram;

    public float getGPA() {
        return gpa;
    }

    public void setGPA(float newGPA) {
        gpa = newGPA;
    }

    public String getDegreeProgram() {
        return degreeProgram;
    }

    public void setDegreeProgram(String newDegreeProgram) {
        if (gpa > 2.7) {
            degreeProgram = newDegreeProgram;
        }
    }
}
```

In this code attributes that are private cannot be accessed from anywhere other than from inside the class. This hides them from anything outside of the class. The only way you can manipulate the hidden data is by writing public functions that allow access to it. If you look at the `setDegreeProgram` method, this is an example of doing more with the getters and setters where you are using them to change private attribute values instead of just purely returning them.

<h3>Decomposition in Java and UML</h3>

There are three types of relationships found in decomposition:
- association
- aggregation
- composition

They define the interaction between the whole and the parts.

__Association__:

Association is "some" relationship. This means that there is a loose relationship between two objects. These objects may interact with each other for some time.

Association relationship using UML class diagram notation:

<img src="../1. Object-Oriented Design/images/uml_association.png">

This UML examines the relationship between person and airline. The straight line between two UML objects denotes that the relationship between them is an association. You can see that there is a `0..*` found on both sides of the relationship. This means a person object is associated with zero or more airline objects. And an airline object is associated with zero or more person objects.

Association relationship in code:

```java
public class Student{
    public void play(Sport sport) {

    }
}
```

In this code excerpt, the student is passed a sport object to play. The student does not possess the sport beyond playing it. The relationship is between two completely separate objects. A student can play any number of sports. And any number of students can play a sport.

The two objects interact with each other without belonging to one another. Overall, association is a loose partnership between two objects that exist completely independently. They have numbers that are not tied to each other.

__Aggregation__:

Aggregation is a "has-a" relationship where a whole has parts that belong to it. There may be sharing of parts among the wholes in this relationship. The "has-a" relationship from the whole to the parts is considered weak. What this means is although parts can belong to the wholes, they can also exist independently.

Aggregation relationship using UML class diagram notation:

<img src="../1. Object-Oriented Design/images/uml_aggregation.png">

This UML class diagram describes the relationship between airliner and crew. It says that for an airliner object, it has zero or more crew members. Also, a crew member object can be had by zero or more airline objects. The empty diamond denotes which object is considered the whole and not the part in the relationship. This empty diamond is the symbol for aggregation.

Aggregation relationship in code:

```java
public class Airliner {
    private ArrayList<CrewMember> crew;

    public Airliner() {
        crew = new ArrayList<CrewMember>();
    }

    public void add(CrewMember crewMember) {

    }
}
```

In the airliner class, there is a list of crew members. The list of crew members is initialized to be empty. And a public method allows new crew members to be added. The airliner has a crew. This means that an airliner can have zero or more crew members.

__Composition__:

Composition is an exclusive containment of parts, otherwise known as a _strong_ has-a relationship. What this means is that the whole cannot exist without its parts. If loses any of its parts, the whole ceases to exist. If the whole is destroyed, then all of its parts are destroyed too. Usually, you can only access the parts through its whole. Contained parts are exclusive to the whole.

Composition relationship using UML class diagram notation:

<img src="../1. Object-Oriented Design/images/uml_composition.png">

This UML class diagram describes the relationship between a house and a room, that a house object has one or more room objects. The filled in diamond next to the house means that the house is the whole in the relationship. If the diamond is filled in, it means that has-a relationship is strong. The two related objects cannot exist without each other. The filled diamond denotes the relationship is composition.

Composition relationship in code:

```java
public class Human {
    private Brain brain;

    public Human() {
        brain = new Brain();
    }
}
```

In this example, the brain is created at the same time that the human object is. The brain does not need to be instantiated anywhere else, nor does it need to be passed into the human object on creation. The brain is automatically created with the human. The two parts, human and brain, are tightly dependent with one not being able to exist without the other.

Composition is the most dependent of the decomposition relationships. It forms a relationship that only exists as long as each object exists. Decomposition is simply about whole objects containing part objects. Depending on your design, you can relate wholes to parts in different increasingly tighter ways. You can use association, a very loose interaction between two completely independent objects. An aggregation, one whole has a part, but both can live independently. And finally, in composition, the whole cannot exist without its parts and vice versa.

<h3>Generalization with Inheritance in Java and UML</h3>

Showing inheritance is very simple in a UML class diagram. You simply connect two classes with a solid lined arrow.

<img src="../1. Object-Oriented Design/images/uml_inheritance.png">

A simple inheritance in a UML diagram would have this layout.

<img src="../1. Object-Oriented Design/images/uml_inheritance_example.png">

Below is an example of a UML diagram for the Animal Superclass and a Dog subclass:

<img src="../1. Object-Oriented Design/images/inheritance_example.png">

The hash symbol is used to communicate that the animals attributes are protected.

In Java, a protected attribute or method can only be accessed by:
- The encapsulating class itself
- All subclasses
- All classes within the same package

The code for the UML class diagram is given below:

```java
public abstract class Animal {
    protected int numberOfLegs;
    protected int numberOfTails;
    protected String name;

    public Animal(String petName, int legs, int tails) {
        this.name = petName;
        this.numberOfLegs = legs;
        this.numberOfTails = tails;
    }

    public void walk() {}
    public void run() {}
    public void eat() {}
}
```

Since an animal is a generalization of specific species, we do not want to be able to create an animal object on its own. We use the keyword _abstract_ to declare that this class cannot be instantiated. That means that we cannot create an animal object. The Animal class will be the superclass for our dogs subclass, any class that inherits from the Animal class will have its attributes and behaviors.

```java
public class Dog extends Animal{
    public Dog(String name, int legs, int tails) {
        super(name, legs, tails);
    }

    public void playFetch() {}
}
```

As you would expect, we do not need to declare any of the attributes and behaviors that the dog class inherits from the Animal class. We declare inheritance in Java using the keyword _extends_.

You instantiate objects from a class by using _constructors_. With inheritance, if you want an instance of a subclass, you need to give the superclass a chance to prepare the attributes for the object appropriately. Classes can have _implicit constructors_ or _explicit constructors_.

In the Animal class implementation below, we have an implicit constructor, since we have not written our own constructor. All attributes are assigned zero or null, when using the default constructor.

```java
public abstract class Animal {
    protected int numberOfLegs;

    public void walk() {}
}
```

In the Animal class implementation below, we have an explicit constructor that will let us instantiate an animal with however many legs we want. Explicit constructors, are used so that we can assign values to attributes during instantiation.

```java
public abstract class Animal {
    protected int numberOfLegs;

    public Animal(int legs) {
        this.numberOfLegs = legs;
    }
}
```

A subclass's constructor must call its superclass's constructor, if the superclass has an explicit constructor. This is because explicit constructors of the superclass must be referenced by the subclass. Otherwise the superclass attributes would not be appropriately initialized. For example:

```java
public abstract class Animal {
    protected int numberOfLegs;

    public Animal(int legs) {
        this.numberOfLegs = legs;
    }
}

public class Dog extends Animal{
    public Dog(int legs) {
        super(legs);
    }
}
```

In order to access the superclass's attributes, methods and constructors, the subclass uses the keyword called Super. Subclasses can override the methods of its superclass, meaning that a subclass can provide its own implementation for an inherited superclass's method. For example below the dog class overrides the animal class's walk method:

```java
public abstract class Animal {
    protected int numberOfLegs;

    public void walk() {
        System.out.println("Animal is walking");
    }
}

public class Dog extends Animal{
    public void walk() {
        System.out.println("I'd rather lay on the couch");
    }
}
```

The inheritance that we have been looking at is called _implementation inheritance_. For Java, only single implementation inheritance is allowed. While a superclass can have multiple subclasses. A subclass can only inherit from one superclass.

Note, that a subclass itself can be a superclass to another class. Inheritance can trickle down through as many classes as you want.

<h3>Generalization with Interfaces in Java and UML</h3>

A class denotes a type for its objects. The type signifies what these objects can do through public methods. For example, instances of a dog class are dog typed objects, and these objects do dog things.

In modeling a problem, we may want to express subtyping relationships between two types. For example, we can have dog type as a subtype of animal type. This means a dog object is not only dog typed, it is also animal typed. So a dog object behaves not only like a dog, it should also behave like an animal.

A JAVA _interface_ also denotes a type. Unlike a class, however, an interface only declares method signatures, and no constructors, attributes, or method bodies. It specifies the expected behaviors in the method signatures, but does not provide any implementation details.

In JAVA, an interface is also used for subtyping. If a dog class implements an I animal interface, then a dog object behaves not only like a dog, but it is also expected to behave like an animal by providing all the method bodies for the method signatures listed in the interface. Just like with inheritance, the dog is an animal. However, the difference is that the dog class needs to provide the implementation details for what it means to be an animal. So, an interface is like a contract to be fulfilled by implementing classes.

In both inheritance and interfaces, you achieve consistency between the dog type and the animal type so that a dog object is usable anywhere in your program when you are dealing with an animal type.

Unlike inheritance, interfaces are not a generalization of a set of classes. It is important to understand that interfaces are not classes. They are used to describe behaviors. All that an interface contains are method signatures. In JAVA, we use the key word _interface_ to indicate that we are creating one. Standard JAVA naming convention places the letter _I_ before an actual name to indicate an interface. For example

```java
public interface IAnimal {
    public void move();
    public void speak();
    public void eat();
}
```

In the example above, notice that we never implement or describe how these behaviors are performed. We only show that an animal has these behaviors. Another thing you might have noticed is that the interface does not encapsulate any of the attributes of an animal. This is because attributes are not behaviors.

Now that we have an interface, we need to declare that we are going to fulfill the contract as described in the interface. The keyword in JAVA for this action is _implements_.

```java
public class Dog implements IAnimal {
    // Attributes of a dog can go here

    public void move() {};
    public void speak() {};
    public void eat() {};
}
```

Our dog class has declared that it will implement or describe the behaviors that are in the interface. When you do this, you must have all the method signatures explicitly declared and implemented in the class. This means that we must the move, speak, and eat methods in this class.

The three advantages that an interface:
- Interfaces can be implemented by multiple classes just like subclass inheritance.
- Classes can decide how to perform the behaviors described in an interface.
- A class can implement multiple interfaces, this is one of the advantages inheritance doesn't have.

Interfaces are drawn in a similar way that classes are drawn in UMLs. Interfaces are explicitly noted in UML class diagrams using guillemets `(<< >>)`, or French quotes, to surround the words interface.

<img src="../1. Object-Oriented Design/images/uml_interface.png">

This indicates that the class implements the interface. The standard way to draw interfaces on your UML class diagrams is to have the arrow pointing upward. This means that the interface is always toward the top, and the classes that implement them are always toward the bottom.

Like abstract classes, which are classes that cannot be instantiated, interfaces are a means in which you can implement __polymorphism__. In object oriented languages, polymorphism is when two classes have the same description of a behavior, but the implementations of the behavior may be different.

This can be seen when we compare a cat and a dog. How would you describe how each of these animals speak? Well, to simply put it, a cat meows and a dog barks. The description of the behavior is the same, both animals can speak. But the actual behavior implementation itself is different. This is known as _polymorphism_.

It is simple to achieve in JAVA using an interface. We create our interface the same way as we did before.

```java
public interface IAnimal {
    public void move();
    public void speak();
    public void eat();
}
```

The Cat and Dog class both implement the IAnimal interface, but they each have their own versions of the speak behavior, like shown below:

```java
public class Dog implements IAnimal {
    public void speak() {
        System.out.println("Bark!");
    }
}

public class Cat implements IAnimal {
    public void speak() {
        System.out.println("Meow!");
    }
}
```

Just like with class inheritance, interfaces can inherit from other interfaces. And just like with class inheritance, interface inheritance should not be abused. This means that you should not be extending interfaces if you are simply trying to create a larger interface. Interface A should only inherit from interface B if the behaviors in interface A can fully be used as a substitution for interface B.

__Multiple inheritance__

This is when a subclass has two or more super classes. While this is possible to do with other object oriented languages, like C++, JAVA doesn't support Multiple Inheritance. This is because inheriting from two or more superclasses can cause Data Ambiguity. When your subclass inherits from two or more superclasses that have attributes with the same name or behaviors with the same method signature, how do you distinguish between them? Since JAVA cannot tell which one you would be referencing, it does not allow for multiple inheritance so that data ambiguity is not an issue.

Interfaces do not run into this issue. In JAVA, a class can implement as many interfaces as we want. This is because of the nature of interfaces. Since they are only contracts and do not enforce a specific way to complete these contracts, overlapping method signatures are not a problem.

```java
public interface IPublicSpeaking {
    public void givePresentation();
    public void speak();
}

public interface IPrivateConversation {
    public void lowerVoiceVolume();
    public void speak();
}

public class Person implements IPublicSpeaking, IPrivateConversation {
    public void speak() {
        System.out.println("This is fine");
}
}
```

A single implementation for multiple interfaces with overlapping contracts is acceptable. There is no ambiguity here because the Person class only has one definition of a speak method, and it is the same implementation for both interfaces.

<img src="../1. Object-Oriented Design/images/class_interface.png">



<h1>Week 3: Design Principles</h1>









<h1>Week 4: Capstone Challenge</h1>
