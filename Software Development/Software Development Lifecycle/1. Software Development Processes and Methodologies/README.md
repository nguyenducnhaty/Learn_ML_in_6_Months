<h1>Week 1: Software development processes : Part 1</h1>



<h2>Introduction</h2>


Software is intangible. We cannot see it, we cannot see when we have made mistakes; and it is hard to see for sure that it is not working, especially at the grand scale. Anything we do to help us see that it is working right, could be wrong itself. If the program is wrong and the tests are wrong, we do not even know there is a problem. That is what makes following engineering process so important.

We have a lot of what I call codified common sense. Of course I would do that. It makes sense, it is almost obvious. But even if you know you should do something, when you are dealing with a massive endeavor, you could still miss things. Not due to carelessness or negligence but just because it is impossible to keep everything in your cognitive model when dealing with something this complex and that is why it is so important to learn about the process and follow it. It gives you the road map to success.


<h3>What software development Looks Like?</h3>

When you're building a software, similar to building a house, you're looking at _requirements_ of what exactly you need to build. And during that time, you will do analysis of different options or you might do a prototype and show it to your customer to see if that is what they are looking for. And at the end of this phase, you have exactly what you're looking to build. Then comes the architects and the software developers. They're going to _design_ the system by looking into the different components that they need to build and how they're going to work together. Once the design is done, they're going to start _implementing_, and start doing _unit testing_. So, each of the sub-teams are going to start building their components and test it. Once all the components are ready, they're going to bring all of these components together, and do _integration testing_ or card verification. And, they will do _functional testing_. Finally, when the software is ready from the developer point of view, they're going to invite the user, and they will do a testing called, _UAT, User Acceptance Testing_, in which a user validates if this is what they are looking for or not. Once everything is done, then the software goes into production, which means the user is going to start using, and they might ask for some changes, or you may have to fix some defects, and so on. So, that's called the _operation and maintenance_. The model that we just reviewed is called, a __waterfall method__, where you go from phase to phase to phase. _Requirements_, _design_, _implementation_.

As industries started to use this method, they ran into several issues. For example, they found that it's very difficult to predict the requirements one year or two a year ahead, as the market changes, or sometimes it's just really difficult to predict what a user will like or not like. And, since the cycle is a year or two, it is possible that the developers or the architects misinterpreted the requirements. And so, that misinterpretation will go undetected all the way to design, implementation, and the verification. And similarly, the integration issues between the different components, go undetected for a year while the software is being developed. So, as these issues were coming up, other variants for waterfall started to evolve. Like a _V-model_, which focuses a lot on testing, or _Sashimi model_ or _RUP model_, that focuses a lot on overlapping different phases. And then, the _incremental model_, where you do the requirements in one shot, but then you do the design testing and deployment in increments. And then, there is the _Spiral model_, which is a very risk-driven approach.

<img src="../1. Software Development Processes and Methodologies/images/variants_of_waterfall.png">

As all of these variants were coming along, there was another thought process that were evolving in the software industry, called __Agile__, Agile is not a model, it's a mindset. There were a lot of top leaders in software industry, that were building the software very successfully. So, they came together to articulated what they were doing to make their projects successful, which came to be known as the _Agile Manifesto_ and _principles_.

As this manifesto and principles were crafted, there were models like _Scrum_, and _Kanban_, and _XP_, that helped implement and promote this mindset. Now it's not just these three, but many other models came into be. The basic idea behind all of these models was that instead of building this whole one year cycle, you build in short cycles. So, you define little, you build, you test, and you learn and you just keep doing this again and again. That way you can adjust to the market quickly and also you are learning from your users quickly.

So the change became a norm, because after every cycle you may have a change. And, software industry also has to learn how to respond to this change quickly and confidently and, the idea of _continuous integration_ was born, where as soon as the developer who is building the code commits to his code, it's integrated with all the other components of that software. And then, all the tests that verifies whether the system is running smoothly runs to make sure nothing else is broken in the system. This is called _automated testing_. All of the _deployment_ is automated as well so there is no manual errors, and this reduces the effort to deploy a code. And not only just these three, many other practices evolved. The safety net of automated testing helped developers respond quickly and confidently to the changes. This also led to a new partnership between the developers and the operations which that led to a culture of __DevOps__.


<h2>Requirements</h2>


<h3>Why do we need requirements?</h3>

What is a requirements? Well, it's really two different things. First, it's a _process_. The process by which we create our shared understanding of both the problem that exists and eventually the needs of our supposed solution which we want to build that will solve that problem. We create high level descriptions of all the concerns we hoped to address by our work with a primary goal of developing a document which can clearly describe the details of what the system will do versus what it won't do. Additionally, it's very important that we capture the what and not the how. We hope to determine what the behavior of the solution will be without making any premature decisions that might affect our ability to design the solution. The design solution will be decided but not at this stage.

On the other hand, the requirement specification is also the _product_ of that process. The requirement specification is the documentation that we produce from that process. This can be an informal understanding, it could be a statement of work, it could even be a formal software requirement specification, an SRS document. There are many reasons why this requirement specification process is important but the most widely cited reasons fall into two categories, engineering and economic. The engineering argument is pretty simple. Spending time up front saves time later. We make fewer mistakes, mistakes which often have far ranging impact. When we spend a significant percentage of our work timeline on this planning stage, we do much better.

<h3>Requirements vs Specification</h3>

There are two ways to document functionality in a software requirement specification document (SRS). The reason there are two ways to write these statements of what the system will do is that there are two audiences for that information.

The first audience is the _user or the client_. In many cases, the user isn't technical but we still need to provide some sort of information that explains what the system will do, so that the user is relatively assured that they get at the end what the client is paid for and it actually does what the user or client wanted them to do.

The second audience is the _developing team_. We also need to provide enough detail to allow the people making the solution know what the system should and shouldn't do.

Requirements and Specifications are closely related concepts in defining your solution. _Requirements are for the user_ and _Specifications are for the developer_. Write your requirements in the user language and write your specifications in the system language. Be sure that your specifications meet the requirements.

<h3>Non-functional Requirements</h3>

Non-functional requirements are requirements which don't specify what the system will do, but rather how the system will perform the behaviors. There many, many non-functional requirements for a system. Many of them revolve around process or quality attributes you're seeking to instill in a project.

Let's take a look at three classifications of non-functional requirements- Product, organization and external:
- _Product_ requirements which are non-functional talk about specific behavior. This is often in the form of protocol requirements, encodings, or encryption requirements, that sort of thing. They are requirements on the product itself.

- _Organizational_ requirements are those that are defined by the company. Company standards, your development team's code style requirements, even the development process itself like using SCRAM could be defined as something like this.

- _External_ constraints are a big factor, especially in regulated industries. When the FAA says you have to use this development process or meet these code coverage testing metrics you have to meet those regulations and if they change, you have to change. This is something you want to document early on in the process.

<h3>WRSPM</h3>

WRSPM reference model is something we call the _world machine model_.

<img src="../1. Software Development Processes and Methodologies/images/wrspm.png">

The environment is all the user visible elements of everything in the world, which includes some part of the system where that overlaps and that overlap is called the interface. So, our system interface is usually a user interface or UI or a GUI, a graphical user interface. Interface is the location of meeting between what the user can do and what the system can do or display to the user in order to capture input and provide output.

We have five different elements in this model:

- __W__ is the _world_. These are all the world assumptions, these are things that we know are true. Now, it doesn't get so complex as to say that gravity works. Of course, that's a world assumption but we are more specific about the world assumptions that have an impact on our system and on our problem domain. There are things that everyone takes for granted and they're one of the more difficult parts to capture.

- __R__ then is the _requirements_. This is what the user wants from the solution. Users, for example, want to withdraw money. That's what they want to do. They go and find an ATM to do that. The ATM is the solution.

- __S__ is the _specification_. The specification lies in that interface area. It's the interface between how the system will meet those requirements. This will be written in plain English. So it'll say things like, in order to withdraw money from the ATM you have to insert your card. You have to insert your PIN number. You have to select from checking or savings, you have to enter using a numerical pad, the amount to draw and it has to be in 20 increments for most ATM. Those are all things the user does not care about. The user wants to get money. The specification is how they do that, how the system meets that requirement.

- __P__ then is the _program_ and you'll notice that that's outside of the environment in the system. The program is what the software developers will write, the program that will meet the specifications to provide the user goal for the requirements. The program has all the code, underlying frameworks, anything like that that we would use from a software perspective.

- __M__ is the _machine_. It's the hardware specification, so it includes the roller for distributing money, the lockbox to make sure that one of the business requirements is that you don't just walk up and take all the money. It's the hardware behind the system.

So you have this world understanding, the requirements which sit within the environment that deal with the user requirements, the specification that defines how the two will meet, the program that meets that specification in order to meet the requirements, and the machine that it all runs on.

Within this then, we care about four variables. _EH_, _EV_, _SV_ and _SH_.
- _EH_ are the elements of the environment that are hidden from the system. It's the parts of the environment that the user wants. For example, the card that they insert is something that is typically outside of the system. You can't really read the card. What we want to make sure is that the user using the ATM has a card. We prove that by making them insert a card, reading the magnetic stripe and requiring the user to enter their PIN.

- _EV_ are the parts that are visible to the system in the environment. This is like the data that is generated when you read a mag strip on the card and the entered PIN number. The PIN number exists and is hidden from the system until it's entered in the system. The data that the user enters then is the visible part of the environment in that case. So the pin, once it's entered, would be environment information that's now visible to the system using the interface.

- _SV_ is the system elements that are visible in the environment. This includes things like the buttons, the information on the screen, the prompts asking them to enter the card, the prompt asking them to enter their PIN number, the stars that show up when you enter in the values that you end up getting for asterisks so that no one looking over your shoulder can read your pin. Those are all system elements that are visible to the user and you'll see that, again, it sits within that interface intersection. It's something that's in the interface.

- _SH_ is all the system data that is hidden from the environment. For example, the roller behind the scenes inside the machinery that the user can't see, the code, the data in the system are all examples of system data that is hidden from the environment.

The WRSPM model is a reference model for how we understand problems in the real world and it helps us to identify the difference between a requirement, the user domain information and the specification. The system domain, how we're going to solve that problem. And you've got to be really careful to separate the two and understand the two because there is a big difference between writing down or capturing the requirements and then making specifications that really do meet those requirements. Just because a system can do it, doesn't mean that it necessarily meets the requirements and having a good understanding of the entire WRSPM model helps you make sure that your specifications do in fact meet the requirements.


<h2>Architecture</h2>


<h3>Software Architecture: Definition</h3>

Below are three definitions of Software Architecture:
- _Software architecture is "the structure of the components of a program/system, their interrelationships, and principles and guidelines governing their design and evolution over time"_ - Garlan & Perry.

- _The software architecture of a program or computing system is the structure or structures of the system, which comprise software elements, the externally visible properties of those elements, and the relationships among them._ - Bass, Clements and Kazman.

- _Software architecture is the fundamental organization of a system, embodied in its components, their relationships to one another and the environment, and the principles governing its design and evolution._ - IEEE.

In software architecture what we really care about is partitioning large systems into smaller ones. And these smaller systems still individually and independently have business value. And that they can, supposedly, if they're linked properly, be integrated with one another and other existing systems very easily.

<h3>Software Architecture: Models</h3>

There's a variety of models that have become essentially go-to best practice models for a number of different common problems. These models are effectively best practiced solutions for commonly occurring problems at the enterprise level, for example:

- __Pipe and Filter__: This pattern can be used to structure systems which produce and process a stream of data. Each processing step is enclosed within a filter component. Data to be processed is passed through pipes. These pipes can be used for buffering or for synchronization purposes.

    Usage:
    - Compilers. The consecutive filters perform lexical analysis, parsing, semantic analysis, and code generation.
    - Workflows in bioinformatics.

    <img src="../1. Software Development Processes and Methodologies/images/pipers_and_filter.png">

- __Blackboard__: This pattern is useful for problems for which no deterministic solution strategies are known. The blackboard pattern consists of 3 main components.

    - _blackboard_ — a structured global memory containing objects from the solution space
    - _knowledge source_ — specialized modules with their own representation
    - _control component_ — selects, configures and executes modules.

    All the components have access to the blackboard. Components may produce new data objects that are added to the blackboard. Components look for particular kinds of data on the blackboard, and may find these by pattern matching with the existing knowledge source.

    Usage:
    - Speech recognition.
    - Vehicle identification and tracking.
    - Protein structure identification.
    - Sonar signals interpretation.

    <img src="../1. Software Development Processes and Methodologies/images/blackboard.png">


- __Layered__ : This pattern can be used to structure programs that can be decomposed into groups of subtasks, each of which is at a particular level of abstraction. Each layer provides services to the next higher layer.

    The most commonly found 4 layers of a general information system are as follows.
    - _Presentation layer_ (also known as UI layer)
    - _Application layer_ (also known as service layer)
    - _Business logic layer_ (also known as domain layer)
    - _Data access layer_ (also known as persistence layer)

    Usage:
    - General desktop applications.
    - E commerce web applications.

    <img src="../1. Software Development Processes and Methodologies/images/layer.png">

- __Client Server__: This pattern consists of two parties; a server and multiple clients. The server component will provide services to multiple client components. Clients request services from the server and the server provides relevant services to those clients. Furthermore, the server continues to listen to client requests.

    Usage:
    - Online applications such as email, document sharing and banking.

    <img src="../1. Software Development Processes and Methodologies/images/client_server.png">

- __Event Based__: This pattern primarily deals with events and has 4 major components; _event source_, _event listener_, _channel_ and _event bus_. Sources publish messages to particular channels on an event bus. Listeners subscribe to particular channels. Listeners are notified of messages that are published to a channel to which they have subscribed before.

    Usage:
    - Android development
    - Notification services

    <img width="60%" src="../1. Software Development Processes and Methodologies/images/event_based.png">

Below is a summary of the model advantages and disadvantages.

<img src="../1. Software Development Processes and Methodologies/images/model_summary.png">

<h3>Software Architecture: Process</h3>

There's three major concerns when we start talking about design process.

1. __System Structuring__: refers to how the system is decomposed into several principal subsystems and communications between those subsystems are then identified. We're keying in particularly on things like the interfaces. As soon as we start to decompose or separate elements or components, large scale subsystems of our overall system, we have to start worrying about how they're going to continue to communicate now that we've separated them. This is particularly important when you're going to then parallelize the development work once you split them out giving one component to one development team, another component to another development team and yet more to further development teams. Having that interface as an agreed-upon contract is a very key component to making sure that it all works once it comes back together and the system structuring is part of that.

2. __Control Modeling__:  is how architectures create a model of the control relationships between the different parts of the system that's established. This is particularly true when we have these separate components dealing with the flow of control, not just the interfaces but the flow of control in communicating with each other, but how the software will work once it's running.

3. __Modular decomposition__: is how we identify those subsystem partitions. We are particularly looking at things like simplicity, maintainability, reliability, security, all those kinds of quality attributes but also, we're worried about things like resource management, who needs to go where and what teams are best suited to handle what kind of responsibilities.

_Subsystem_ vs _Modules_:
- Subsystems are independent system which could hold business value whereas modules by itself doesn't have business value.
- Subsystems can run completely independently, or, at the very least, can be developed entirely independently whereas modules are individual component of a subsystem which can't function as a standalone system or a standalone piece of the overall product.
- You have to gather and integrate multiple modules to make up a subsystem.

Another thing we care about at the architectural level is software quality attributes.
- Performance
- Reliability
- Testability
- Security
- Usability

Each of these tends to be something that's associated with architecture. It doesn't mean that it can't be associated with other stages in the process like requirements, design, or even implementation but it's something that we particularly focus on at the architectural stage.

Software architecture process concerns itself primarily with those three things.
- Estimation; estimating the work and total, deciding how much it's going to take, how long it's going to take, who's going to do it.
- Focusing on quality; how do we ensure things like reliability and performance especially at this architectural level since those are primarily hardware and developer-focused concerns.
- And then partitioning; actually dividing the work into subsystems or modules that can then be passed off on to the design stage because then, design stage goes into the actual building of the individual modules.



<h1>Week 2: Software Development Processes: Part 2</h1>



<h2>Design</h2>


<h3>Software Design: Introduction</h3>

In the V-model of software development, design comes into the process at the fourth stage, after architecture and before implementation. It sits between the enterprise level decisions in the subsystem designing and the development effort.

<img src="../1. Software Development Processes and Methodologies/images/v_model.png">

Software design is what we call the deliverable, design, the noun, is what we call the process to make that design. Design, the verb, is the creative process of transforming the problem into a solution. In our case, transforming a requirement specification into a detailed description of the software that's code-ready. The noun then is the documented description of that solution and the constraints and explanations used to arrive at it.

Architecture is primarily focused on overarching, cross-cutting concerns for our system especially in the context of the entire enterprise. Large scale decisions like, should we build or buy the software from another company? How is security going to be handled, by the server or by the application? Lots of enterprise and management focused decisions go into this too like apportioning resources and personnel, deciding if the current staff and hardware can handle the project itself, and what is it going to cost to get us there. Securing the internal funding for such endeavors is often looked at as an architectural concern.

__Stages of Design:__

- Problem Understanding: Should come from requirements and specification document.
- Identify one or more solutions
- Describe solution abstractions
- Repeat process for each identified abstraction until the design is expressed in primitive terms.

When we say solution abstractions, we essentially mean any documentation of the solution that is not technological. Mostly, that means anything that's not code or hardware. Graphical including mock-ups or wireframes, formal descriptions including unified modeling language or UML diagrams like class diagrams and sequence diagrams, and other descriptive notations should be used to capture your description of the solution that you intend to build or have built for you. What you are going to do is repeat for all abstractions, subsystem components etc. under the entire design and until the entire design is expressed in primitive terms.

Now, primitive terms is a bit subjective. What I want you to imagine is this, keep abstracting and designing until you are convinced that you can hand this design off to a developer team that you do not know and you are confident they will come back with a solution that's right. You are going to decide things like classes, methods, data types and you do all this without being technology-specific. You let the developers, those coding in C Sharp or Java or Python decide what kind of collection to use at the code level. Let them decide exactly how to sort. Those things are very language-specific and should be left to the developers. Those decisions do not need to be made at the design level. You should still be focused on what makes the overall solution work correctly, leaving all the language-specific optimization to the developer team. So, you are going to provide detail, which is implementation-ready but it does not include implementation detail. Developers follow your design. They work out the optimizations at the language level.

<img src="../1. Software Development Processes and Methodologies/images/stages_of_design_formal.png">

In _architecture and design_, we follow these six stages. The first three are architectural. The last three, design. After we decide on a system architecture, separate behavior responsibility into components, and determine how those components will interact through their interfaces, we set out to design the individual components. Each component is designed in isolation, the benefit of encapsulation and reliance on those interfaces we design. Once each component is fully designed in isolation, any data structures which are inherently complex, important, or shared between the classes, or even shared between components, are then designed for efficiency. The same goes for algorithms. When the algorithm is particularly complex, novel, or important to the successful fulfillment of the components' required behavior, you might see software designers rather, than the developers, writing pseudo code to ensure that the algorithm is properly built.

Software design is all about designing a solution, creating the deliverables and documentation necessary to allow the developing team to build something that meets the needs of the user or the client. The best people to do that is the designing team. This is a crucial step that moves from our natural language understanding to code-ready solutions.

<h3>Software Design: Modularity</h3>

When we talk about modularity, we're primarily talking about these four things:

1. __Coupling__: is the degree of interdependence between software modules; a measure of how closely connected two routines or modules are; the strength of the relationships between modules.

2. __Cohesion__: refers to the degree to which the elements inside a module belong together. In one sense, it is a measure of the strength of relationship between the methods and data of a class and some unifying purpose or concept served by that class. In another sense, it is a measure of the strength of relationship between the class's methods and data themselves. Coupling, cohesion are measures of how well modules work together and how well each individual module meets a certain single well-defined task and they tend to go together.

3. __Information Hiding__: describes our ability to abstract away information and knowledge in a way that allows us to complete complex work in parallel without having to know all the implementation details concerning how the task will be completed eventually.

4. __Data Encapsulation__: refers to the idea that we can contain constructs and concepts within a module, allowing us to much more easily understand and manipulate the concept when we're looking at it in relative isolation.

Software development is complex, attempting to hold the entire concept of a large scale program in your mind all at once is a fool's errand. We have no choice but to break the problem down into smaller parts. Which we might then be able to comprehend. To do that properly, we're going to focus on three concepts or aspects of modularity:

1. _Decomposability_: Essentially it's the ancient possibly Roman concept of divide and conquer. When the problem is too large and complex to get a proper handle on it, breaking it down into smaller parts until you can solve the smaller part is the way to go. Then you just solve all the smaller parts.

2. _Composability_: But then we have to put all those smaller parts back together and that's where composability comes into play. This is often not as simple as one would like.

3. _Ease of Understanding_: So we try to focus on ease of understanding by breaking down the components we hope to provide an ease of understanding, which will then hopefully lead to an ease of communication.

When it comes to _information hiding_, all we want is the ability to use something by understanding what it does but not necessarily how. This tends to work well until the understanding of what it does is strained. Take `Rand`. What does the function rand do? You might answer that it provides you with a random number but that's not quite right. For most purposes, it generates a random enough value for most uses, but in reality, rand is a pseudo random number generator. It's based off of a seeded value and isn't exactly random. So when you need true randomness, it doesn't quite fit the bill but it does work in many typical situations where true randomness isn't quite necessary.

Because of _data encapsulation_, protecting the data from unauthorized access and maintaining integrity is a key point. The developer of a module has the best idea of how and when the attributes should be modified, and then we try to allow them to maintain as much control as is possible. Nobody else is allowed to mess with that data. If it gets corrupted, it must have been done by the module, that's the intent. And data encapsulation makes designs more robust, by robust here, I mean that chances are that new additions aren't going to break the current design.

So when we talk about modularity, we're really talking about breaking down and reassembling all these components. So when it comes to _coupling, cohesion, information hiding,_ and _data encapsulation_, they are just qualities, different perspectives on what modularity really means.

<h3>Software Design: Coupling</h3>

__Measuring the strength of connection between sub system components:__

One of the key ideas of modularity is 'decomposability', separating complexity. One way we can control the change on a design is to enforce the separation. When the requirements are changed, may be half way through our process, we don't want that change to have massive impact across entirety of our system.

__Loose coupling allow for changes to be unlikely to propagate across components:__

By enforcing low coupling, what we're hoping to accomplish is that changes don't cross the boundaries of our modules. Ideally, when a requirement changes, and it will, the changes in our code should be contained within a single module, the module tasked with completing that function that's changed. When you produce effective low coupling, changes in one module shouldn't affect the other modules, or should do so as minimally as possible. That's our goal. We accomplish that goal by being attentive to the kinds of coupling we are using between our modules.

__Shared variables and control information lead to tight coupling:__

Even though the mantra is low coupling, high cohesion, we talk about the levels of coupling in terms of loose and tight coupling. Those terms make more sense in isolation. The worst, strongest, highest, forms of coupling are listed below.

Tight Coupling:

- _Content coupling_: happens when module _a_ directly relies on the local data members of module _b_, rather than relying on some access or a method.

- _Common coupling_: happens when module _a_ and module _b_ both rely on some global data, or global variable.

- _External coupling_: is a reliance on an externally imposed format, protocol, or interface. In some cases, this can't be avoided. But it does represent tight coupling, which means that changes here could affect a large number of modules, which is probably not ideal.

Medium Coupling:

- _Control coupling_: happens when a module can control the logical flow of another by passing in information on what to do or the order in which to do it, a what to do flag. Changing the process may then necessitate changes to any module which control that part of the process. That's not necessarily good.

- _Data structure_ coupling: occurs when two modules rely on the same composite data structure, especially if the parts the modules rely on are distinct. Changing the data structure could adversely affect the other module even when the parts of the data structure that were changed aren't necessarily those that were relied on by that other module.

__Loose coupling achieved by state decentralization and message passing:__

Loose Coupling:

- _Data couplings_: is when only parameters are shared. These includes elementary pieces of data like when you pass an integer to a function to compute the square root.

- _Message coupling_: is then the loosest type of coupling. It's primarily achieved through state decentralization and component communications, only accomplished either through parameters or message passing.

- _No coupling_: this is usually the trivial case and isn't really of that much interest to us.

<h3>Software Design: Cohesion</h3>

__Measures how well a module's components fit together:__

__Implements a single logical entity or function:__

__Represents a desirable design attribute:__

__Divides into various levels of strength:__

Cohesion is really how well everything within a module fits together, how it works towards a singular purpose. Now this is pretty subjective, in that the context in which you consider the singular purpose makes a big difference. For example, imagine you're building a game as a mobile application. Technically, everything you do is cohesive to the idea that you are building a game. Every line of code works towards that singular goal, from advertising to user accounts to micro-transactions to the game and the graphics themselves. But that's a very high level categorization. That's why we typically refer to cohesion using various levels of cohesion to better define what we mean when we say cohesion. So let's start with the weakest forms of cohesion.

Weakest Cohesion:

- _Coincidental cohesion_: is effectively the idea that parts of the module are together just because they are in the same file. If you just throw all the code into one file, technically it's cohesive in that it resides in the exact same file location. It's in the same class, for example, in object-oriented programming. But this is ultimately very, very weak cohesion. Its proximity to other code is the only relationship between it and the other. That's not good.

- _Temporal cohesion_: means that the code is activated at the same time, but that's it. That's really the only connection. Being in a module because you're both called at the start isn't a very Object Oriented way of looking at the solution.

- _Procedural cohesion_: is similarly time based and not very strong cohesion. Just because one comes after the other doesn't really tie them together, not necessarily. What if the process flow changes? Again, that's not good. They don't necessarily need to be cohesive in that way.

- _Logical association_: is the idea that components which perform similar functions are grouped. We're getting less weak, but it's still not good enough. The idea here is that at some level the components do similar, but separate or parallel things. That's not a good reason to combine them in a module. They are considered separate, though similar, for a reason. And so we should separate them.

Medium Cohesion:

- _Communicational cohesion_: means that all elements of the component operate on the same input or produce the same output. This is more than just doing a similar function. It's producing identical types of output or working from a singular input.

- _Sequential cohesion_: is the stronger form of procedural cohesion. Instead of merely following the other in time, sequential cohesion is achieved when one part of the component is the input to another part of the component. It's a direct handoff and a cohesive identity.

Strong Cohesion:

- _Object cohesion_: In object cohesion, we see that each operation in a module is provided to allow the object attributes to be modified or inspected. Every single operation in the module. Each part is specifically designed for purpose within the object itself, that's object cohesion.

- _Functional cohesion_: goes above and beyond sequential cohesion to assure that every part of the component is necessary for a well-defined function or behavior. So it's not just input to output, it's everything together is functionally cohesive.

I also want to make this note. Technically speaking, inheritance weakens cohesion. The idea is being able to have the full understanding of a concept in a single module. When you inherit, you by design don't have all the concepts in a single module when you're viewing the code base. You have to go look at the super class files as well. That does make it harder to find detail and goes against the principle of high cohesion. However, that is usually a very easy tradeoff, given the benefits available to us using inheritance.


<h2>Implementation</h2>


<h3>Deployment</h3>

Deployment is the end stage of active development for any piece of software and, realistically, it's less of a stage and more of a gate. It's an event in between the testing and maintenance stages after it's already in place, but that shouldn't minimize the importance of deployment, especially now, when you start seeing things like automated deployment become so important in our work.

The idea of planning for deployment is going to largely be determined by the project scope. But what's important about deployment is not only the planned steps of how you put this product into place. You have to think about some other things. The most important is which of those steps is most likely to have a problem?

When you're deploying make sure that the deployment area is prepared for that deployment. And even more important than that, you have to make sure that you plan for recovery in case your deployment fails and you have to rollback your software.

When you're talking about your deployment plan, there are different concerns you should think of:
- Physical Environment: means what machines are you going to use? How are you going to actually put this onto something?

- Hardware: where are you going to put the machines? Is there any difference between testing and production that you need to be aware about when you're doing the installs.

- Documentation: if you don't have documentation in many large-scale companies, you don't make a change in deployment. You don't make a change in production.

- Training: You should not put to your newest developers for production deployment. If you're deploying to production, make sure the developers know what they're doing. And if not, you need to make sure that they are trained properly before they go and do this.

- Database related activities: tend to be a little bit more of a pain than some of the other issues when you're doing this kind of thing. Working in the database isn't usually as easy as drop something here.

- 3rd party software.

- Software being deployed: You usually have to update a database and potentially its structure when you make changes to its production system, making sure that those database-related activities have also been fully flushed out, having a rollback plan is important.

Maybe, you should go so far as to say that these are your sections for your plan document.

<h3>Deployment: Rollback</h3>

Rollback is what happens when that deployment doesn't go as you intended. We have to have a plan for how we're going to reverse the actions we were making when it doesn't go the way we thought it was going to.

<h3>Deployment: Cutover Strategies</h3>

At the very bottom, the first cutover strategy you should consider is __cold back-up__, sometimes also called __cold storage__. This is the case where you really don't have anything ready, but you have potentially, for example, the physical hardware. You have a separate server ready to go.

One step up you have __Warm standby__ meaning that you actually have a running machine ready to go. So you already have it apportioned.

__Hot failover__ is the final cutover strategy. In a hot failover the machine or virtual machine is up ready and running. The systems themselves are up, ready, waiting for transactions but they just don't receive the information. This is different than load balancing. Load balancing says that you use a set of production servers that are all supposedly identical and you distribute load across all of them. A hot failover in its purest sense doesn't do that. It means that it's truly a system that data does not go to even though it could handle it at any moment.


<h2>Testing and Verification</h2>


<h3>Software Testing: Introduction</h3>

__Testing Definitions:__

- _The process of executing a program (or part of a program) with the intention of finding errors_. Myers, via Hymphrey

- _The purpose of testing is to find errors_

- _Testing is the process of trying to discover every conceivable fault or weakness in a work project_.

- _The process of searching for errors_.

The purpose of testing is to find problems, find problems in one way or another. Note that the first definition though, excludes the testing of documentation, which is definitely something that we do. We do a lot of testing that involves documentation and making sure the documentation, which will eventually lead to the program, is also correct.

Traditionally the _Oracle_ has been the developer, or the tester, who's running the tests who compares if the test data match the output. Now, as you may or may not know, humans aren't particularly reliable. So, what we're starting to see are things like Automated Oracles, which compare some known, or determined, or retrieved expected output to the actual output, the output that the software generated. The test data and the expected output make up test cases.

There's a distinct difference between _test data_ and _test cases_. The _test data_ is just the input to the program. A _test case_ has the data, the input and what you expect for each individual output. Because while humans have traditionally been the Oracle, we're going to have automated oracles in the future, which means that you need both. You need input and output, that way a computer can read all those pairs and run the test quickly.

<h3>Software Testing: Definitions</h3>

The most important words in software testing come as __Verification__ and __Validation__.

- _Verification_ is the process of calculating a system or component to determine whether the products...satisfy the conditions imposed...

When it comes to satisfying conditions imposed, what we mean by is that the conditions imposed on the system, by the developers as we try and transition from what the user wants, the requirements, into what the system does in order to meet those requirements. So those are the conditions imposed, whatever we have the system actually do.

- _Validation_ is the process of evaluating a system or component...to determine whether it satisfies specified requirements.

Validation then is whether it satisfies the specified requirements. Meaning the requirements that is specified as in told, explained by the users. So the requirements are not necessarily a written-down document that we would really like it to be, but it's what the user wants. So whether it satisfies what the user said they wanted, that's essentially what validation is.

Another definition of Verification and Validation:

- _Verification_ is checking a program against the most closely related design documents or specification.

- _Validation_ is checking the program against the published user or system requirements.

<h3>Software Testing: Strategies</h3>

__Incremental Testing: __

<img src="../1. Software Development Processes and Methodologies/images/incremental_testing.png">

_Incremental Testing_ is our first look at __Regression Testing__. You start with say, two modules A and B, and three test cases numbered one, two, three. When you're done testing A and B, you don't get rid of the tests, you keep them. When you then add Module C, you also add the test case, or cases used to test just Module C in isolation, the unit tests. You add that test to the test for Modules A and B then, you run them all. This way, you can determine if something has changed in the previously correct code based on something you added, as well as testing that the current modules still works as intended. You keep adding modules and their tests and re-running all the tests as you go. This technique of re-running older tests in a larger suite is called Regression Testing. That's a big part of Incremental Testing.

__Top-down Testing:__

<img src="../1. Software Development Processes and Methodologies/images/stub.png">

Now, when you're developing Top-down you have to develop something to stand in for the elements at lower levels that you haven't created yet. These are what we call __Stubs__. So, we have Level One Software, that's the software that we've been building. But the lower level software that it relies on, Level Two, in various different entities that we're going to rely on, for example, an object that I instantiate to do some task. Maybe there's three or four of those. Well, they haven't been built yet, but I still need to be able to do those tasks in order to make sure that my program works. So, one of the things that we can do is write a _Stub_. A _Stub_ is typically something that is maybe a single line, or a few lines of code that when called it essentially just returns a hard coded value that stands in for a real return value.

The same kind of thing can be done with what's called a __Mock__. And if you take software testing, for example, you'll see the differences between _Stubs_ and _Mocks_. A _Mock_ is something where you don't actually hard code something, you just say, was this method called, yes, you move on. So, when it comes to Stub or a Mock eventually, you will build out that Level Two software potentially and then, those levels, of course, rely on again underlying software potentially. So, you'd have to make Stubs for Level Three. So, as you move down you continue to build levels of software down and Stubs below those to continue your work down towards the underlying levels.

__Bottom Up Testing:__

<img src="../1. Software Development Processes and Methodologies/images/driver.png">

The opposite case then, is when you're developing from bottom-up. When you have the lower lying implementation's complete but you don't have the larger picture integration execution driver hence, __Drivers__. These _Drivers_ walk through the process of what possible calls to our lower level in this case Level Three, elements might be and makes reasonable calls to ensure that Level Three is operational. The issue with building good _Drivers_ is that it's sometimes hard to know the kinds of inputs and the order of inputs that would be necessary to properly use Level Three before having built Level Two software. But you do the best you can and again it's usually hard coded. You try and make your best assumption of what the most common, or most important orders of operations are going to be and make sure that all your Level Three operations is complete. Once those are done, you start building Level Two software. And of course, with Level Two software we need to build a level above that. So, you could have, for example, a Level One Driver that drives all Level Two software.

__Back to Back Testing:__

<img src="../1. Software Development Processes and Methodologies/images/back_to_back.png">

_Back to Back Testing_ is one way that we make use of earlier iterations of a program as an effective automated Oracle. This is particularly useful for expanding test data without necessarily including expected output or if you don't already have automated tests from before. The idea is that the program worked before, at least we think it did. For all the things that worked before, you run test data for that working behaviors through both the old version and the new version. The outputs then, since it worked before should continue to work, the output should be the same. So, we can just do a direct comparison of the output. Alternatively, anything that developers have modified hopefully to fix something, or add some feature you run the test data through both iterations again to make sure that they are different. It still takes some manual inspection to show that the change in the changed result is what you actually wanted to change and that it changed in the right way. But at least it's a start, especially, when you're working from scratch you don't have any automated tests from the beginning.

__Test Scaffolding:__

So, we have this overall idea of Test Scaffolding. The goal is setting up an environment for executing your tests. So, we have the Driver. The Driver initializes non-local variables, initializes parameters and activates units under test. Then, your Stubs will use templates of modules not actual working modules usually, that's why it's a Stub. Templates of the modules used by the unit including the functions called and templates of any other entity, or data structure that is used within the unit, that is the Program Unit. The Oracle then, is at the end which verifies the correspondence between produced and expected results. Again, often times the Oracle is us just a human, you run it, you make sure that what happened is what you expected. But there are increasingly automated Oracles that we are using in things like the Star unit, JUnit, PI unit testing frameworks that we can use to automatically verify that our Stub, Driver, and Program Unit have operated properly.

<img src="../1. Software Development Processes and Methodologies/images/tradeoffs.png">

<h3>Software Testing: Perspectives</h3>

__Black Box and White Box Testing:__

- Black Box Testing:
    - Designed without knowledge of program's internal structure.
    - Based on functional requirements.

- White Box Testing:
    - Examines the internal design od the program.
    - Requires detailed knowledge of its structure.

__Stages of Testing:__

- _Unit Testing:_ we're talking about testing of individual components. This usually means as individual method or potentially one class within the solution.

- _Module Testing:_ is a set of units that come together as a collection or dependent components. This is the first form of integration testing. How we test when things come together.

- _Sub System Testing:_ is testing a collections of modules integrated into subsystems. This testing is primarily concerned with ensuring that the interfaces between the subsystems and components, between the module's components. Often divided between developing teams, meet the specifications they were given.

- _System Testing:_ is testing the complete system prior to delivery and making sure that the whole system is working and it gets back to some things we talked about before with security, performance, usability, that kind of thing.

- _Acceptance Testing:_ is sometimes called alpha testing, beta testing and in fact, it is true that in deployment, once it's actually delivered to users, even though we don't call it an alpha or beta, when the users use it, find bugs and report them back to us somehow, that's still a form of testing.



<h1>Week 3: Software Development Models: Traditional Models</h1>



<h2>Waterfall Models</h2>


<h3>Software Development Models</h3>

__Predictive versus Adaptive:__

_Predictive_ means that you have a pretty good understanding of the requirements of the software or the product that you are building. So once the requirements are defined completely, then the team goes through the design implementation and testing phase of the process and then finally produces the product that the client is looking for.

In _adaptive models_, the client or the customer generally has an idea of what they want to build, but they are not 100% sure what they want to build. So in this case, they start with an idea. The team that is working on it build something like a really small version of it or like a low fidelity version of it. And then they show it to the customer or the actual users using it. Then they build the next version based on the feedback and start morphing the product into something else. And so in the end you might end up getting something different than you were originally thinking, but what you get is what users need.

<img src="../1. Software Development Processes and Methodologies/images/predictive_vs_adaptive.png">

Most of the models are not always 100% predictive or not always 100% adaptive. They are sometimes somewhere in between and depends on how much you allow change during the process.

__Incremental versus Iterative:__

In an _incremental model_, you have a fairly good idea of what you want to build, but instead of building it in one shot, like in the predictive model, you build in increments. This model will be useful if your organization can benefit from some of the intermediate products or if they are going to change the later increments based on the feedback from the previous increments.

In the _iterative model_ you don't have a clear idea, but you have some idea. You sometimes are actually replacing what you've built with something different. So the difference between incremental and iterative is that, in iterative model you are building on top of the existing product and in iterative model you're just breaking the product in smaller pieces and there are enhancements that are happening during the process as well.

The incremental model can go predictive as well as adaptive. If you take the feedback from each of your increments and change your future increments, then it becomes a little bit adaptive model. Whereas if you don't take the feedback from each of your increments and just keep building one increment and then another increment, then it’s more like a predictive model.

<img src="../1. Software Development Processes and Methodologies/images/incremental_vs_iterative.png">

<h3>Waterfall Model</h3>

In the waterfall method what we do is we put all of the software engineering processes one after the another in a logical sequence.

<img src="../1. Software Development Processes and Methodologies/images/waterfall_model.png">

But what if something goes wrong, or let's say you are doing the implementation and you found out that, this is not what we need? To fix that problem we sometimes add a feedback loop from each of the phase to the previous phase, which means that if you find something wrong in the implementation phase, you will go back to the design phase, if the problem was in the design phase, or you can go into the requirement phase if the problem was in the requirement phase.

Now, one thing you might notice is that the later you find a problem in your model, the more costly it's going to be. So, you may have heard of the cost of change curve, which basically shows, how cost exponentially increases when you find bugs in later stages of development.

<img src="../1. Software Development Processes and Methodologies/images/Change_Cost.jpg">

So to find problems early on, we make some assumptions.
- We _know the requirements very well and they won't change_. If the requirements change during later in the phase, it will be costly to go back and then repeat our steps. And so for this model to be successful, we need to make sure that the requirements are solid.

- _The team has experienced building similar software._

- _The translation from the requirement to the product is going to be perfect_, which means that the designers or the people who are coding understood the requirements really well.

<img src="../1. Software Development Processes and Methodologies/images/waterfall_model_summary.png">

<h3>V-Model</h3>

The V-model looks very similar to the waterfall method, but it's just bent into a shape of a V. But if you look closely, the left side of the model is about project definition or the product definition, where it's getting finer and finer. So from the concept, you go to the requirement, and to the design, and to the implementation. And then the right side is showing all the validation steps that are corresponding to the steps on the left. So for example, the verification and validation is corresponding to the requirement phase. So in the V-model, when you are doing your requirements, you start talking about your verification and validation, what it basically means is that you're introducing the testing activities related to the testing phase earlier in the model.

<img src="../1. Software Development Processes and Methodologies/images/v_model.png">

If you see that on the y-axis, it's increasing in the abstraction when you go from bottom to the top. And then if you go from the left to right, it kind of shows the project completion.

If you look at it from the predictive and the adaptive scale, I would say that the V-model is very much a predictive model. Because it doesn't allow any kind of feedback or doesn't allow any kind of changes during the phases. It just allows you to introduce the verification earlier in the process.

<img src="../1. Software Development Processes and Methodologies/images/v_model_summary.png">

<h3>Sashimi Model</h3>

In Sashimi Model the idea is that we allow to overlap the different phases of software development life cycle. For example, while you're working on the requirements, instead of waiting for the requirement phase to complete, you will start with your design while the requirements are being created.

<img src="../1. Software Development Processes and Methodologies/images/sashimi_model.png">

The primary idea behind this phase is that the next phase doesn't have to wait for the previous phase to start.

You can also overlap your phase so much so that sometimes you can have even more than one phase be overlapping.

In the predictive and the adaptive scale, it's not 100% predictive because while you're working on the requirements and if you started designing and if you learn something, you can still fix your requirement. So, there is a scope of adaptability as you're working in it. So, it's a little bit going towards adaptive, but still it's primarily a predictive model.

<img src="../1. Software Development Processes and Methodologies/images/sashimi_model_summary.png">


<h2>Incremental Models</h2>


In incremental model instead of building the whole application in one shot, you build in increments. You can still use waterfall steps but only in that increment.

<img src="../1. Software Development Processes and Methodologies/images/incremental_waterfall.png">

You can also overlap the models and use different models for each of the implements. Like V-model for the second increment phase or Sashimi model for the third increment phase. In terms of predictive and adaptive scale, it depends on how much overlap you have and how much feedback you apply from one increment to another.

<img src="../1. Software Development Processes and Methodologies/images/incremental_waterfall_summary.png">

<img src="../1. Software Development Processes and Methodologies/images/incremental_model_variation_1.png">

<img src="../1. Software Development Processes and Methodologies/images/incremental_model_variation_2.png">


<h2>Iterative Models</h2>


<h3>Unified Process and its Variants</h3>

<img src="../1. Software Development Processes and Methodologies/images/unified_process.png">

__Inception Phase:__
- Establish Business case and Scope
- Feasibility study
- Build vs Buy
- Preliminary Schedule and Cost

__Elaboration:__
- Capture requirements
- Address known risks
- Validate the system architecture
    - Executable architecture baseline: build the core components of the system which demonstrate that the system will work
- Credible Construction Estimate

__Construction:__
- Software is built
- Multiple iteration- each results in a release
- Iterative and incremental

__Transition:__
- Deployment
- Get feedback and refine
- System conversion and user training

__Characteristics of this Model:__

1. It is a framework. It incorporates other methods/models: for example, during the Construction phase, you could be using Agile, you could be using Sashimi model, you could be using incremental model or whatnot. Similarly, during Elaboration you can use any of the models. So, it's a framework and not really a defined process.

2. Any step may involve different kinds of work (requirements, design, etc) but relative effort and emphasis might be different.

3. Architecture Centric.

4. Use case centric: means when we do the Elaboration, or when we talk about what needs to be built, we consider a user into the picture and ask what the user wants to do from the system. Then for each of these use cases you define what's the trigger point, and what does the use case looks like, what are the exceptions, what are the extensions, what are the variations of that use case. So, what that does is that you look at the system, not just from a system perspective, but from a user perspective which gives you a holistic view of the system.

5. Focus on risk mitigation: One of the goal of the Elaboration phase is to identify and resolve or mitigate risk. So, that's one of the key idea behind this framework.

<img src="../1. Software Development Processes and Methodologies/images/unified_process_summary.png">

__Unified Process Variants:__

- Rational Unified Process- 9 Disciplines, 6 Best Practices + Tools
- Enterprise Unified Process
- Open UP - lighter version
- Agile UP - Lighter version, Agile focused

<h3>Spiral Model</h3>

<img src="../1. Software Development Processes and Methodologies/images/spiral_model.png">

It's a cyclic process but each of those cycle actually has four basic steps. So you determine the objectives as your first step, like what do you want to achieve in that particular cycle. Then you identify and resolve risks, and then you double up based on what you need for your objectives. And then you plan for next iteration.

- 1st Step: Determine Objective:
    - Define Objectives
    - Define Constraints
    - Define Alternatives

- 2nd Step: Identify and Resolve Risk:
    - Identify Risks
    - Resolve what you can

- 3rd Step: Development and Test:
    - Work done to meet objectives (feasibility study, design, development, integration, etc)

- 4th Step: Plan for the next iteration:
    - Review work done and commitment for next iteration

How do you track progress in a Spiral Project? You can track progress through milestones
- __Life Cycle Objective:__ sufficient definition of a technical and management approach
- __Life Cycle Architecture:__ sufficient definition of the preferred approach and significant risks eliminated or mitigated.
- __Initial Operational Capability:__ sufficient preparation of the software site, users, operators and maintainers.

__Characteristics of this model:__

- Risk Driven Model: identify and resolve risk is primary step of this process.
- Effort and Detail Driven by Risk: meaning you don't need to go through a rigorous requirements documents or a very detailed document. You just do enough so that the goal or objective is achieved. So, again, how much is the risk based on that you put effort in terms of resolving the risk as well as in the development and the test stage.
- Process model generator. Incorporates other models: you use other models wherever appropriate to execute.

<img src="../1. Software Development Processes and Methodologies/images/spiral_model_summary.png">


<h2>Applying traditional software development models</h2>


<h3>Phase Gates / Stage Gates</h3>

This is a concept that you will see in the organization if they are primarily doing waterfall models. This concept allows organization to give opportunity for leaders or the organization to see the middle of the project to see if we want to continue or if you want to pivot.

<img src="../1. Software Development Processes and Methodologies/images/gates.png">

Let's say this was the kind of software development process. So once you apply the _stage gates_, or sometimes called _phase gates_ into different places of the software development process they give the organization the ability to validate what they are attempting to do aligns with their strategic point of view or not and if it isn't aligned, then you drop the idea.

__What do you check at Gate Check?__

- Check quality of execution of previous step
- Business case still makes sense?
- If yes, does the action plan for the next step reasonable and sound?

<img src="../1. Software Development Processes and Methodologies/images/gate_structure.png">

__Examples of Gate in different models:__

<img src="../1. Software Development Processes and Methodologies/images/waterfall_gate.png">

<img src="../1. Software Development Processes and Methodologies/images/incremental_gate.png">

<img src="../1. Software Development Processes and Methodologies/images/gate_summary.png">



<h1>Week 4: Software Development Models: Agile and Lean</h1>



<h2>Agile Fundamentals</h2>


<h3>Why Agile?</h3>

If you look at the waterfall method, it logically makes sense. You define what you want to build, and then you design how you're going to build it, then you build it, then you validate it, and then you deploy, and users use it. So what were some of the challenges that software industry was facing that let to the emergence?

- The first challenge was in the verification phase where you put all the components together and you try to find out whether the system is working as expected. They were seeing a lot of unexpected issues during that phase. This was because software systems are very complex, and to predict how different components are going to interact with each other and how they're going to behave is very difficult. And since these defects were found very late in the process, it was very expensive to fix.

- The second challenge is that after the software is developed and deployed, the users and clients were unhappy, this was not what they were expecting, or this is not what they need. This was because predicting requirements, or predicting user needs is very difficult.

- The third challenge could be the market shift. So when we were writing the requirements, the needs were correctly identified, that this is what the user need. But by the time we had done development, the market has shifted and the user doesn't need this anymore. And so the problem is not that we are discovering these problems, but the problem is we are discovering these problems very late, which makes them really difficult to fix, or very expensive to fix.

Due to these challenges, several teams and companies were trying different methods and to have a clear definition, 17 individuals came up with the manifesto for agile software development. It consists of four values and 12 principles. They didn't define a new model or a process, they defined a mindset, an agile mindset, that help teams build better software.

<h3>Agile Manifesto and Principles</h3>

__The four values of the Agile Manifesto:__

<img src="../1. Software Development Processes and Methodologies/images/agile_values.png">

There is value in the items on the right, but we value the items on the left more.

__The Twelve Principles of Agile Manifesto:__

<img src="../1. Software Development Processes and Methodologies/images/agile_principles_a.png">

<img src="../1. Software Development Processes and Methodologies/images/agile_principles_b.png">

<img src="../1. Software Development Processes and Methodologies/images/agile_solving_waterfall.png">

<img src="../1. Software Development Processes and Methodologies/images/agile_challenges.png">


<h2>Agile Frameworks</h2>


Agile is a mindset, so the question is how do you actually apply these mindsets on a software development process? Well, the good news is that there are lots of frameworks that are available that you can use to apply these Agile mindsets for your team or for your project. But there is no silver bullet. So you have to customize this framework to meet the needs of your team your project or your organization. And the key to customization is to make sure that you stay true to the principles and the value of Agile and not get bogged down by the rituals or practices of a specific framework.

<img src="../1. Software Development Processes and Methodologies/images/agile_frameworks.png">

- __Scrum__: is by far the most popular of all the frameworks. It is based on a one to four-week cycle where you take part of your project and you define, develop, and you test your software, so your product is developed incrementally.

- __Kanban__: which is based on a continuous flow model where you basically try to optimize your existing software development process.

- __Scrumban__: is a combination of Scrum and Kanban where you use Scrum as your primary framework and then you use Kanban to optimize your flow within your sprint.

- __XP__: is similar to Scrum so it has most of the practices of Scrum but it also defines some engineering practices which are very crucial for an Agile team. Then there is also the hybrid of a Scrum and XP.

- __Lean Startup__: helps you if you have lot of unpredictable market or industry and you want to really prove your solution before you implement it.

And there are many more.

<h3>Scrum</h3>

<img src="../1. Software Development Processes and Methodologies/images/scrum_framework.png">

There are three roles that are defined in Scrum.

1. _Product owner_ defines what needs to be done by talking to the executives, the team, the stakeholders, clients, and users. and in what order.

    He will create something called a _product backlog_ which is basically a list of user story which are prioritized and defines what needs to be done. Now the product backlog is very different than a typical requirements document. It's basically at very high level and it can change over time.

    Once the team is ready to sprint, they get together for a meeting called _Sprint Planning Meeting_, where the whole team gets together and they pick the top stories that they can work on in the existing sprint. The product owner reviews those stories with the team and helps answer any questions or clarifies anything that is not clear. Then the team gets together again and do a tasking out of the stories, which means, like what exactly we need to do to build the software.

2. _Scrum master_ who helps the team stay true to the Scrum values and principles. You will also notice that Scrum master helps facilitate most of the meetings in the team during the sprints. If there is any road blocks, then he'll be the one who will drive the resolution of some of these road blocks.

    There are two other meetings that happen at the end of the sprint. The first one is called a _Sprint Review_, where the whole team gets together With the stakeholders, with the client and demonstrate the work that they have done and get the feedback.

    The second meeting that happens at the end of the sprint is called a _Sprint Retrospective_, where they talk about process and not about the product. So they talk about what went well in the last sprint, what didn't go well in the last sprint and how we can do better.

3. _The team_ that is self organizing and they do most of the building of the software.

    To keep track of the sprint, like are we going to achieve our goal for the sprint, the team uses something called a burnddown or a burndup chart, which shows the amount of work left or the days of the sprint.

    <img src="../1. Software Development Processes and Methodologies/images/agile_framework_with_scrum.png">

<h3>Kanban</h3>

Kanban is a practice that was borrowed from Toyotas' production system which basically, helps team optimize their software development process.

<img src="../1. Software Development Processes and Methodologies/images/kanban.png">

In Scrum, we work in one to four weeks iterations. So In the first iteration, let's say one to four weeks, we will take part of the product, we'll define it, design it, build it, and test it and then there will be some product that will come out of it. And then we will just continue that cycle until we are done and the product changes over time. Now, Kanban doesn't prescribe any of these fixed iterations or any new practices. It's just a set of properties and principles that help optimize software development process as long as that process is a continuous flow.

By continuous flow, we mean things from the backlogs are moving through this software development pipeline and its finished product is coming out at the other end of the pipeline. So, for example, the first item gets done, then another item, then a couple items. This is also an adapter process, where as things are getting completed, we can get feedback from the customer and feed it into the backlog but at the end, we get the whole product. So Kanban basically optimizes the software development pipeline by a set of principles and properties.

The Four Kanban Properties:

- _Visualize your workflow_: To visualize the workflow, you basically create a visual board. It can be an electronic or it could be a physical board. And you move all your columns, or all your states, or all your steps of your process into one column. And then in some columns, you will see doing and done.

    <img src="../1. Software Development Processes and Methodologies/images/kanban_board.png">

- _Limit work in progress_: So what you do is for each of your state, you define what's the maximum number of items that can stay in that state.

- _Manage the flow_: But its not always possible to stay within the WIP (Work In Progress) limit, if it is a temporary issue then it is fine but if it will happen again, we need to address it, this is where the third property comes in.

- _Make Process Policies Explicit_: Now, this board will work good only if team members are moving the card from one state to another state consistently. But everyone may have different understanding of the policies of when to move or not, this is where the fourth property comes in.

<img src="../1. Software Development Processes and Methodologies/images/kanban_properties.png">

<h3>Lean Startup</h3>

The basic idea behind this approach is, how can you learn faster about your market or your user need? A lot of software development models out there mostly focus on the delivery of the software. This model actually focuses a lot on understanding or fast learning about real user need.

Lean startup model or lean startup concept was made popular by Eric Ries with his book "The Lean Startup" and primarily it was geared towards the startup companies. But now, it has been used by a lot of industry, at least the concept is very popular in the software industry.

<img src="../1. Software Development Processes and Methodologies/images/lean_startup.png">

<img src="../1. Software Development Processes and Methodologies/images/lean_startup_summary.png">

<h3>Agile and Lean Summary</h3>

<img src="../1. Software Development Processes and Methodologies/images/agile_lean_summary.png">
