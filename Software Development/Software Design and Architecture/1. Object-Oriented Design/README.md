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






<h1>Week 3: Design Principles</h1>









<h1>Week 4: Capstone Challenge</h1>
