<h1>Week 1: Software development processes : Part 1</h1>



<h2>Introduction</h2>

Why should anybody learn about software development process and methodology? Well, that is the big question. Software Engineering is one of our most complex things that humans have ever done, and that includes all other types of engineering. Civil Engineering is hard. Civil Engineering in software is harder. Think about building the Hoover Dam. It is an incredible thing. It is an incredible amount of work. But if they got half way through building it, and they saw a huge crack in the concrete, they would be able to identify and fix that. And if it was completely done and water were flowing straight through the middle, people would know it is not working. The thing about software is that, it is intangible. We cannot see it, we cannot see when we have made mistakes; and it is hard to see for sure that it is not working right, especially at the grand scale. And just to make it a little bit harder. Anything we do to help us see that it is working right, could be wrong itself. If the program is wrong and the tests are wrong, we do not even know there is a problem. That is what makes following engineering process so important. We have a lot of what I call codified common sense. Of course I would do that. It makes sense, it is almost obvious. But even if you know you should do something, when you are dealing with such a massive endeavor, you could still miss things. Not due to carelessness or negligence but just because it is impossible to keep everything in your cognitive model when dealing with something this complex. And that is why it is so important to learn about the process and follow it. It gives you the roadmap to success. You will not use everything we teach you every time. You may not follow any of the software development life cycles as we present them, ever. What you as a software engineer will do, is take these templates, these plans, these processes, and make engineering decisions necessary to adapt them to your needs, to your project's constraints.

<h3>What software development Looks Like?</h3>

When you're building a software, similar to building a house, you're looking at requirements or you're looking at what exactly you need to build. And during that time, you will do analysis of different options or you might do a prototype and show it to your customer, and just say, "Is this what you're looking for?" But at the end of this phase, you have exactly what you're looking to build. Then comes the architects and the software developers. They're going to design the system, they're going to architect the system, and say, what are the different components that they need to build? And how they're going to work together? Once the design is done, they're going to start coding, and start doing unit testing. So, each of the sub-teams are going to start building their components and test it. Once all the components are ready, they're going to bring all of these components together, and do integration testing or card verification. And, they will do functional testing. And when the software is ready from the developer point of view, then they're going to invite the user, and they will do a testing called, UAT, User Acceptance Testing, in which a user says, "Yup, this is what I was looking for." or "No, this is not what I was looking for." And then, once everything is done, then the software goes into production, which means the user is going to start using, and they might ask for some changes, or you may have to fix some defects, and so on. So, that's called the operation and maintenance. So, as you can see, it's quite similar to building a house. The model that we just reviewed is called, a waterfall method, where you go from phase to phase to phase. Requirements, design, implementation.

As industries started to use this method, they ran into several issues. For example, they found that it's very difficult to predict the requirements one year or two a year ahead, as the market changes, or sometimes it's just really difficult to predict what a user will like or not like. And, since the cycle is a year or two year, it is possible that the developers or the architects misinterpreted the requirements. And so, that misinterpretation will go undetected all the way to design, implementation, and the verification. And similarly, the integration issues between the different components, go undetected for a year while the software is being developed. So, as these issues were coming up, other variants for waterfall started to evolve. Like a V-model, which focuses a lot on testing. Or Sashimi model or RUP model, that focuses a lot on overlapping different phases. And then, the incremental model, where you do the requirements in one shot, but then you do the design testing and deployment in increments. And then, there is the Spiral model, which is a very risk-driven approach.

<img src="../1. Software Development Processes and Methodologies/images/variants_of_waterfall.png">

As all of these variants were coming along, there was another thought process that were evolving in the software industry, called Agile. So, Agile is not a model. It's a mindset. There were a lot of top leaders in software industry, that were building the software very successfully. And so, they came together and said, "What is it that we are doing that is making us successful?" And they articulated what we call now the Agile Manifesto and principles. And, as this manifesto and principles were crafted, there were models like Scrum, and Kanban, and XP, that helped implement this mindset, that promote this mindset. And so, you can see it's not just these three, but many other models came into be. The basic idea behind all of this model, was that instead of building this whole one year cycle, you build in short cycles. So, you define little, you build, you test, and you learn. And then again, you just keep doing this. That way you can adjust to the market quickly. And then, you are learning from your users quickly.

And so, the change became a norm, because after every cycle you may have a change. And, software industry also has to learn how to respond to this change quickly and confidently. And, the idea of continuous integration, where a developer who is building the code, as soon as he commits a code or has soon as he finishes the code, it's integrated with all the other components of that software. And then, all the tests that verifies whether the system is running. They're called, the automated testing. So, as soon as you commit a code, all of the test is tested, to make sure nothing else is broken in the system. And, all of this deployment is automated. So, as soon as the code is committed, it's deployed automatically so that there is no manual errors, as well as it reduces the effort to deploy a code. And not only just these three, many other practices evolved. And so, the safety net of automated testing, and this automation, help developers respond quickly and confidently to the changes. This also led to a new partnership between the developers and the operations. They march towards a common goal. And, that led to a culture of DevOps.


<h2>Requirements</h2>

<h3>Why do we need requirements?</h3>

Well, what is a requirements. Well, it's really two different things. First, it's a process. The process by which we create our shared understanding of both the problem that exists and eventually the needs of our supposed solution which we want to build that will solve that problem. We create high level descriptions of all the concerns we hoped to address by our work with a primary goal of developing a document which can clearly describe the details of what the system will do versus what it won't do. Additionally, it's very important that we capture the what and not the how. We hope to determine what the behavior of the solution will be without making any premature decisions that might affect our ability to design the solution. The design solution will be decided but not at this stage. On the other hand, the requirement specification is also the product of that process. The requirement specification is the documentation that we produce from that process. This can be an informal understanding, it could be a statement of work, it could even be a formal software requirement specification, an SRS document. IEEE is an international organization that has a computer society that has developed a template SRS which we're going to post. You can take a look at what a formal document might look like. There are many reasons why this requirement specification process is important but the most widely cited reasons fall into two categories, engineering and economic. The engineering argument is pretty simple. Spending time up front saves time later. We make fewer mistakes, mistakes which often have far ranging impact. When we spend a significant percentage of our work time line on this planning stage, we do much better. Don't plan anything, your schedule and budget explodes.

<h3>Requirements vs Specification</h3>

There are two ways to document functionality in a software requirement specification document (SRS). The reason there are two ways to write these statements of what the system will do is that there are two audiences for that information. The first audience is the user or the client, depending on whether or not they're the same person. In many cases, the user isn't technical. And so we'd have a very difficult time talking with you about what they want the software to do. They don't know the potential of what they can do. But we still need to provide some sort information that explains what the system will do, so that the user is relatively assured that they get at the end what the client is paid for and it actually does what the user or client wanted them to do. The second audience is the developing team. We also need to provide enough detail to allow the people making the solution, making the code. Know what the system should and shouldn't do. Now, this is where things tend to get tricky. We use natural language, primarily because it allows for an easy communication protocol with our users. Know or very little, technical jargon should hopefully avoid some miscommunications.

User requirements are exactly what the user wants the solution to do in the user’s language. Users do not want to log in though, we want them to. They want the system to be secured to only allow them to say, post to Facebook on their behalf. Logging in is the systems specification. The required action of the system solution were developing. System spec is the usually more precise or constraining statement of how the system will meet the user requirements. This is still with the solution we'll do not how, but it's how the system will meet the requirement. Software design then takes this requirement specification and details that how, which modules be constructed will it be oriented toward design and development. How do we make it happen?

Requirements and Specifications are closely related concepts in defining your solution. Requirements are for the user and Specifications are for the developer. Write your requirements in the user language and write your specifications in the system language. Be sure that your specifications meet the requirements.

<h3>Non-functional Requirements</h3>

Non-functional requirements, requirements which don't specify what the system will do, but rather how the system will perform the behaviors. There many, many non-functional requirements for a system. Many of them revolve around process or quality attributes you're seeking to instill in a project. Process requirements may be things like mandating a particular case system, that is, a computer-assisted software engineering tool like Microsoft Project or Ajira, a bug-tracking software. Or it might have to do with the programming language the team will be using or the development method. These are often design constraints.

Software quality is also something that takes on importance at the very beginning. Security, performance, usability. These are things that every system needs. It can't be completely slow or completely unusable or horribly insecure. Some baseline amount of each of these things is necessary and usually cheap to make happen. But some of these are going to be judged as more important than the others, and a conflict is always there.

Let's take a closer look at three classifications of non-functional requirements. Product, organization and external:
- Product requirements which are non-functional talk about specific behavior. This is often in the form of protocol requirements, encodings, or encryption requirements, that sort of thing. They are requirements on the product itself.

- Organizational requirements are those that are defined by the company. Company standards, your development team's code style requirements, even the development process itself like using SCRAM could be defined as something like this.

- External constraints are a big factor, especially in regulated industries. When the FAA says you have to use this development process or meet these code coverage testing metrics, that's all there is to it. You have to. And if they change, you have to change. This is the kind of control we're talking about, being impacted by external entities. That's something you want to document early on in the process.

<h3>WRSPM</h3>

WRSPM reference model, something we call the world machine model. It's all about capturing the right thing. Requirements are always in the problem domain. It's all about what the user wants to do in order to solve some problem that they have. Our job is then to take those requirements, capture them and then determine what software specifications we need in order to constrain the solution in the solution domain. What we're going to do with our computer, our system in order to solve the problem. And there are several layers of abstraction that exist between, what we call requirements the user's goals and the software specifications, what the system's goals are in order to supposedly meet those user goals or requirements. The WRSPM model is one way of looking at this system in order to determine what the requirements specifications might be. So this is the very formal model in the way of looking at how we separate these. So, you will see here that we have environment and a system. So the environment is all the user visible elements of everything in the world, which includes some part of the system where that overlaps and that overlap is called the interface. So, our system interface is usually a user interface or UI or you may have heard of a GUI, a graphical user interface. That's what we mean by that interface. It's the location of meeting between what the user can do and what the system can do or display to the user in order to capture input and provide output. So, we then have the WRSPM model.

<img src="../1. Software Development Processes and Methodologies/images/wrspm.png">

We have five different elements in this model.
- W is the world. These are all the world assumptions, these are things that we know are true. Now, it doesn't get so complex as to say that gravity works. Of course, that's a world assumption but we are more specific about the world assumptions that have an impact on our system and on our problem domain. There are things that everyone takes for granted and they're one of the more difficult parts to capture.
- R then is the requirements. This is the user's language understanding of what the user wants from the solution. Users, for example, want to withdraw money. That's what they want to do. They go and find an ATM to do that. The ATM is the solution.
- S is the specification. The specification lies in that interface area. It's the interface between how the system will meet those requirements. So it's still written in system language that is from a user or natural language perspective. So it says in natural language, just plain English, what the system will do. So it'll say things like, in order to withdraw money from the ATM you have to insert your card. You have to insert your PIN number. You have to select from checking or savings, you have to enter using a numerical pad, the amount to draw and it has to be in 20 increments for most ATM. Those are all things the user does not care about. The user wants to get money. The specification is how they do that, how the system meets that requirement.
- P then is the program and you'll notice that that's outside of the environment in the system. So all the way over the other side of the line. That program is what the software developers will write, the program that will meet the specifications to provide the user goal for the requirements. The program has all the code, underlying frameworks, anything like that that we would use from a software perspective, which leaves M all the way on the side.
- The M is the machine. It's the hardware specification, so it includes the roller for distributing money, the lockbox to make sure that one of the business requirements is that you don't just walk up and take all the money. It's the hardware behind the system. So you have this world understanding, the requirements which sit within the environment that deal with the user requirements, the specification that defines how the two will meet, the program that meets that specification in order to meet the requirements, and the machine that it all runs on.

Within this then, we care about four variables. EH, EV, SV and SH. EH are the elements of the environment that are hidden from the system. So there very well may be things that we care about outside of the system that we still have to care about. It's the parts of the environment that the user wants. For example, the card. The card that they insert is something that is typically outside of the system. You can't really read the card. What we want to make sure is that the user using the ATM has a card. We prove that by making them insert a card, reading the magnetic stripe and requiring the user to enter their PIN. The EV, the parts that are visible to the system in the environment are the data that generated when you read a mag strip on the card and the entered PIN number. The PIN number exists and is hidden from the system until it's entered in the system. The data that the user enters then is the visible part of the environment in that case. So the pin, once it's entered, would be environment information that's now visible to the system using the interface. The SV is the system elements that are visible in the environment. This includes things like the buttons, the information on the screen, the prompts asking them to enter the card, the prompt asking them to enter their PIN number, the stars that show up when you enter in the values that you end up getting for asterisks so that no one looking over your shoulder can read your pin. Those are all system elements that are visible to the user and you'll see that, again, it sits within that interface intersection. It's something that's in the interface. That all the system data that is hidden from the environment is all the other data and elements of our system. So the roller behind the scenes inside the machinery that the user can't actually see, they can maybe hear it and that may or may not make it visible to the user depending on your definition, but it's typically understood as it's hidden from the user. It's hidden behind the machine, it's hidden in the code, it's hidden in the data in the system. For example, making sure that it gets an approval number from the actual bank before distributing money. That's all hidden from the user, though it does happen and it is important that it happens because the users hope that no one else can get their money.

The WRSPM model is a reference model for how we understand problems in the real world and it helps us to identify the difference between a requirement, the user domain information and the specification. The system domain, how we're going to solve that problem. And you've got to be really careful to separate the two and understand the two because there is a big difference between writing down or capturing the requirements and then making specifications that really do meet those requirements. Just because a system can do it, doesn't mean that it necessarily meets the requirements and having a good understanding of the entire WRSPM model helps you make sure that your specifications do in fact meet the requirements.


<h2>Architecture</h2>

<h3>Software Architecture: Definition</h3>

There's a lot of parallels between software architecture and what most people think of architecture when it comes to building buildings. Architects, no matter which field it is, are that interface between the customer, what they want, and a contractor or the implementer, the person building the thing.

And it's always too across all architecture that bad architectural design can't be rescued by good construction. A bad design can't be fixed when you're building that design, it's unbelievably rare. And there's also parallels in how architects actually work. There are specialist types of projects that require certain architect expertise. If you can imagine it's very different building skyscrapers than it is to build, say, a dam. Or a nuclear reactor or anything else that might need to be architected in a specific way. So, there are specialist types of projects within each field of architect. And in all those fields, schools of thought and styles of architecture have already emerged and continue to emerge as we work through the life cycle of all architectural projects.

Below is three separate definitions, two of them from very popular, well-respected architecture text books that are used in the field. And as well as one from one of the premier international computing bodies, IEEE.

<img src="../1. Software Development Processes and Methodologies/images/software_architecture.png">

In software architecture what we really care about is partitioning large systems into smaller ones. And these smaller systems still individually and independently have business value. And that they can, supposedly, if they're linked properly, be integrated with one another and other existing systems very easily. Now there's a number of reasons why this partitioning is a key component. One of the things that we talk about in terms of software architecture is a decision, for example, buy versus build. You need to decide whether or not the overall project you're going to build should be built by an internal team or you should go out and find an existing product, piece of software off of the Internet, off the shelf. And merely customize it to your specific needs.

Software architectures are about a lot of different things, okay? A big part of it is funding. One of the reasons why we decompose systems into these components that are independent is so that we can talk about parallelization.

<h3>Software Architecture: Models</h3>

So there's a variety of models that have become essentially go-to best practice models for a number of different common problems. So these models are effectively best practiced solutions for commonly occurring problems at the enterprise level, for example:

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

1. __System Structuring__: refers to how the system is decomposed into these several principal subsystems and communications between those subsystems are then identified. We're keying in particularly on things like the interfaces. As soon as we start to decompose or separate elements or components, large scale subsystems of our overall system, we have to start worrying about how they're going to continue to communicate now that we've separated them. This is particularly important when you're going to then parallelize the development work once you split them out giving one component to one development team, another component to another development team and yet more to further development teams. Having that interface as an agreed-upon contract is a very key component to making sure that it all works once it comes back together and the system structuring is part of that.

2. __Control Modeling__:  is how architectures create a model of the control relationships between the different parts of the system that's established. This is particularly true when we have these separate components dealing with the flow of control, not just the interfaces but the flow of control in communicating with each other, but how the software will work once it's running.

3. __Modular decomposition__: is how we identify those subsystem partitions. We are particularly looking at things like simplicity. We're looking for things like maintainability, reliability, security, all those kinds of quality attributes but also, we're worried about things like resource management, who needs to go where and what teams are best suited to handle what kind of responsibilities.

So, when we talk about _subsystem_ versus _modules_, it's important here to note the distinction. Subsystems are still an independent system which could hold business value. It's not our full product but it's still some part of that product that, by itself, has business value and it can run completely independently, or, at the very least, can be developed entirely independently. That's really what we're looking for when it comes to a subsystem and that's the primary goal for architecture. That's versus modules. Module design's what we consider software design. That's a individual component of a subsystem which can't function as a standalone system or a standalone piece of the overall product. It doesn't, by itself, have business value. You have to gather and integrate multiple modules to make up a subsystem.

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

I want to know here that this is not the only way to represent this. In fact, you are going to see architecture and design phases shown here bunched together in various places. The combined stage could be called architectural design or it could even just be called architecture or design alone even though it contains both sets of tasks. We split them so that we can be more specific and provide insight into each of the responsibilities separately.

So, what is software design? Software design is what we call the deliverable, design, the noun, and what we call the process to make that design. Design, the verb, is the creative process of transforming the problem into a solution. In our case, transforming a requirement specification into a detailed description of the software that's code-ready. The noun then is the documented description of that solution and the constraints and explanations used to arrive at it. We develop the software design.

We'll cover architecture separately but as a brief overview, architecture is primarily focused on overarching, cross-cutting concerns for our system especially in the context of the entire enterprise. Large scale decisions like, should we build or buy the software from another company? How is security going to be handled, by the server or by the application? Lots of enterprise and management focused decisions go into this two like apportioning resources and personnel, deciding if the current staff and hardware can handle the project itself, and what is it going to cost to get us there. Securing the internal funding for such endeavors is often looked at as an architectural concern.

<img src="../1. Software Development Processes and Methodologies/images/stages_of_design.png">

The first thing we do is get a good problem understanding when it comes to design. Most of this should come from your requirements and specification documents. If you are unlucky enough not to have these or maybe at least not have them as written documents, it becomes even more important that you get a full grasp of the problem domain before starting to develop your own design solution.

Do not be tunnel-visioned into any large-scale solution as always the only way to go about solving the problem. There is almost always another way to reach the same singular goal, so consider multiple alternatives before deciding definitively which one to pursue. When we say solution abstractions, we essentially mean any documentation of the solution that is not technological. Mostly, that means anything that's not code or hardware. Graphical including mock-ups or wireframes, formal descriptions including unified modeling language or UML diagrams like class diagrams and sequence diagrams, and other descriptive notations should be used to capture your description of the solution that you intend to build or have built for you. What you are going to do is repeat for all abstractions, subsystem components etc. under the entire design and until the entire design is expressed in primitive terms. Now, primitive terms is a bit subjective. What I want you to imagine is this, keep abstracting and designing until you are convinced that you can hand this design off to a developer team that you do not know and you are confident they will come back with a solution that's right. And you do all this without being technology-specific. You let the developers, those coding in C Sharp or Java or Python decide what kind of collection to use at the code level. Let them decide exactly how to sort. Those things are very language-specific and should be left to the developers. Those decisions do not need to be made at the design level. You should still be focused on what makes the overall solution work correctly, leaving all the language-specific optimization to the developer team. They follow your design. They work out the optimizations at the language level.

<img src="../1. Software Development Processes and Methodologies/images/stages_of_design_formal.png">

In architecture and design, we follow these six stages. The first three are architectural. The last three, design. After we decide on a system architecture, separate behavior responsibility into components, and determine how those components will interact through their interfaces, we set out to design the individual components. Each component is designed in isolation, the benefit of encapsulation and reliance on those interfaces we design. Once each component is fully designed in isolation, any data structures which are inherently complex, important, or shared between the classes, or even shared between components, are then designed for efficiency. The same goes for algorithms. When the algorithm is particularly complex, novel, or important to the successful fulfillment of the components' required behavior, you might see software designers rather, than the developers, writing pseudo code to ensure that the algorithm is properly built.

Software design takes abstract requirements and then you build the detail and until you are satisfied that you can hand it off and it will be developed properly. So, you are going to decide things like classes, methods, data types, that kind of thing but not the individual language-specific optimizations that will go into the eventual code. So, you are going to provide detail, which is implementation-ready but it does not include implementation detail.

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

When it comes to _information hiding_, all we want is the ability to use something by understanding what it does but not necessarily how. This tends to work well until the understanding of what it does is strained. Take Rand. What does the function rand do? You might answer that it provides you with a random number but that's not quite right. For most purposes, it generates a random enough value for most uses, but in reality, rand is a pseudo random number generator. It's based off of a seeded value and isn't exactly random. So when you need true randomness, it doesn't quite fit the bill but it does work in many typical situations where true randomness isn't quite necessary.

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

- _Data couplings_:  is when only parameters are shared. These includes elementary pieces of data like when you pass an integer to a function to compute the square root.

- _Message coupling_: is then the loosest type of coupling. It's primarily achieved through state decentralization and component communications, only accomplished either through parameters or message passing.

- _No coupling_: this is usually the trivial case and isn't really of that much interest to us.

<h3>Software Design: Cohesion</h3>

__Measures how well a module's components fit together:__

__Implements a single logical entity or function:__

__Represents a desirable design attribute:__

__Divides into various levels of strength:__

Cohesion is really how well everything within a module fits together, how it works towards a singular purpose. Now this is pretty subjective, in that the context in which you consider the singular purpose makes a big difference. For example, imagine you're building a game as a mobile application. Technically, everything you do is cohesive to the idea that you are building a game. Every line of code works towards that singular goal, from advertising to user accounts to micro-transactions to the game and the graphics themselves. But that's a very high level categorization. That's why we typically refer to cohesion using various levels of cohesion to better define what we mean when we say cohesion. So let's start with the weakest forms of cohesion.

Weakest Cohesion:

- _Coincidental cohesion_: is effectively the idea that parts of the module are together just because they are, they are in the same file. If you just throw all the code into one file, technically it's cohesive in that it resides in the exact same file location. It's in the same class, for example, in object-oriented programming. But this is ultimately very, very weak cohesion. Its proximity to other code is the only relationship between it and the other. That's not good.

- _Temporal cohesion_: means that the code is activated at the same time, but that's it. That's really the only connection. Being in a module because you're both called at the start isn't a very OO way of looking at the solution.

- _Procedural cohesion_: is similarly time based and not very strong cohesion. Just because one comes after the other doesn't really tie them together, not necessarily. What if the process flow changes? Again, that's not good. They don't necessarily need to be cohesive in that way.

- _Logical association_: is the idea that components which perform similar functions are grouped. We're getting less weak, but it's still not good enough. The idea here is that at some level the components do similar, but separate or parallel things. That's not a good reason to combine them in a module. They are considered separate, though similar, for a reason. And so we should separate them.

Medium Cohesion:

- _Communicational cohesion_: means that all elements of the component operate on the same input or produce the same output. This is more than just doing a similar function. It's producing identical types of output or working from a singular input.

- _Sequential cohesion_: is the stronger form of procedural cohesion. Instead of merely following the other in time, sequential cohesion is achieved when one part of the component is the input to another part of the component. It's a direct handoff and a cohesive identity.

Strong Cohesion:

- _Object cohesion_: In object cohesion, we see that each operation in a module is provided to allow the object attributes to be modified or inspected. Every single operation in the module. Each part is specifically designed for purpose within the object itself, that's that object cohesion.

- _Functional cohesion_: goes above and beyond sequential cohesion to assure that every part of the component is necessary for a well-defined function or behavior. So it's not just input to output, it's everything together is functionally cohesive.

I also want to make this note. Technically speaking, inheritance weakens cohesion. The idea is being able to have the full understanding of a concept in a single module. When you inherit, you by design don't have all the concepts in a single module when you're viewing the code base. You have to go look at the super class files as well. That does make it harder to find detail and goes against the principle of high cohesion. However, that is usually a very easy tradeoff, given the benefits available to us using inheritance.


<h2>Implementation</h2>

<h3>Deployment</h3>

So deployment is the end stage of active development for any piece of software. And, realistically, it's less of a stage. It's more of a gate. It's an event in between the testing and maintenance stages after it's already in place, but that shouldn't minimize the importance of deployment, especially now, when you start seeing things like automated deployment become so important in our work.

The idea of planning for deployment is going to largely be determined by the project scope. That should make sense. But what's important about deployment is not only the planned steps of how you put this product into place. You have to think about some other things. The most important is which of those steps is most likely to have a problem? We've talked before about making sure that you focus on the things that are most error-prone, and this is true for these kinds of process issues as well, just the same as it is in testing or any other part of the process. Make sure that when you're deploying, you've practice the deployment. When you're deploying, you're making sure that the deployment area is prepared for that deployment. And even more important than that, you have to make sure that you plan for recovery in case your deployment fails and you have to rollback your software.

When you're talking about your deployment plan, there are different concerns you should think of:

- Physical Environment: means what machines are you going to use? How are you going to actually put this onto something?
- Hardware: where are you going to put the machines? Is there any difference between testing and production that you need to be aware about when you're doing the installs.
- Documentation: if you don't have documentation in many large-scale companies, you don't make a change in deployment. You don't make a change in production.
- Training: You should not put to your newest developers for production deployment. If you're deploying to production, make sure the developers know what they're doing. And if not, you need to make sure that they are trained properly before they go and do this
- Database related activities: tend to be a little bit more of a pain than some of the other issues when you're doing this kind of thing. Working in the database isn't usually as easy as drop something here.
- 3rd party software
- Software being deployed: You usually have to update a database and potentially its structure when you make changes to its production system, making sure that those database-related activities have also been fully flushed out, having a rollback plan is important.

Maybe, you should go so far as to say that these are your sections for your plan document.

<h3>Deployment: Rollback</h3>

Rollback is what happens when that deployment doesn't go as you intended. We have to have a plan for how we're going to reverse the actions we were making when it doesn't go the way we thought it was going to.

There's lots of reasons why you rollback, but most of them have something to do with things not going quite the way you expected them to. There's problems that take longer to debug and fix, than you have time for. IIf it's still something that you probably could fix and you might already know how, but if you need production back on line by a certain time and you aren't sure, for example, that you'll be able to get it fixed on time, you might consider rolling back. The real purpose is to keep production alive.

<h3>Deployment: Cutover Strategies</h3>

At the very bottom, the first cutover strategy you should consider is __cold back-up__, sometimes also called __cold storage__. Now this is the case where you really don't have anything ready, but you have potentially, for example, the physical hardware. You have a separate server ready to go.

One step up you have __Warm standby__ meaning that you actually have a running machine ready to go. So you already have it apportioned.

__Hot failover__ is the final cutover strategy. A hot failover system is everything. The machine or virtual machine is up ready and running. The systems themselves are up, ready, waiting for transactions but they just don't receive the information. This is different than load balancing. Load balancing says that you use a set of production servers that are all supposedly identical and you distribute load across all of them. A hot failover in its purest sense doesn't do that. It means that it's truly a system that data does not go to even though it could handle it at any moment.


<h2>Testing and Verification</h2>

<h3>Software Testing: Introduction</h3>

<img src="../1. Software Development Processes and Methodologies/images/software_testing.png">

Definition that you see above here, there's a couple of different ones depending on who they're from and the source that they came from. But it's all about the process of finding errors. So, you can see what's common between all of them. It's now pretty much universally accepted that the purpose of testing is to find problems, find problems in one way or another. Note that the first definition though, excludes the testing of documentation, which is definitely something that we do. We do a lot of testing that involves documentation and making sure the documentation, which will eventually lead to the program, is also correct.

First, we start with the quintessential question, what's a test? We start with the software under test. You can't test something that, you haven't created yet though test-driven development, like you would see an agile development, where we decide what the test will be before we write the code is another perspective we can take. We're talking about this in terms of actually running the test, something you can only do once you have software to execute. I also want you to know that when we say software here, we don't necessarily mean the entire finished software product. Quite the contrary, even though we will eventually get to that point. Software under test means, whatever part or subset of the program we have completed, where we can exercise something, we can exercise some behavior. This is some module or unit of code.

Therefore, unit testing. And units in this context usually mean something like a method, a function, a subroutine, a procedure, something small. A defined set of steps, or tasks that we have an expectation of how it should behave when we run that code. To run a test against our software, against our unit, we must provide it with the information on which to act. The input, the test data. There are lots, and lots, and lots of ways that we can select, or even generate that test data. We can generate test data based on a profile we constructed of how we think the user will act based on probability, or user studies, or we can attack the code with some data that often causes errors, inputting zero, that value is larger than what it asked for, giving it a word instead of a number, that sort of thing.

Once the software is given the test data, we match the output. The behavior of the program given that input. The question then is what do we do with that? Is it right? Has the software provided the correct result given the test data? Something has to do that, something has to say is that true or not? That something is called the Oracle. Now, traditionally the Oracle has been the developer, or the tester, who's running the tests. The tester has the software running. They input the data. They watch what happens and they decide whether, or not the behavior match what they expected. Now, as you may or may not know, humans aren't particularly reliable. Can you tell the difference between the number one and a lowercase L in some fonts on the screen? So, what we're starting to see are things like Automated Oracles, which compare some known, or determined, or retrieved expected output to the actual output, the output that the software generated, the actual output of running the software under test given the test data, to gather the input and output we should see if the program is operating as we hope it will. The test data and the expected output make up test cases.

There's a distinct difference between _test data_ and _test cases_. The _test data_ is just the input to the program. And that's usually what we think of. When I ask you, for example, to test the square root function, you're really thinking about inputs, negative one, four, 16, so on and so forth. But we also really want to make sure that you recognize that a _test case_ has the data, the input and what you expect for each individual output. Because while humans have traditionally been the Oracle, we're going to have automated oracles in the future, which means that you need both. You need input and output, that way a computer can read all those pairs and run the test quickly.

<h3>Software Testing: Definitions</h3>

The most important words in software testing come as __Verification__ and __Validation__.

<img src="../1. Software Development Processes and Methodologies/images/software_testing_def.png">

When it comes to satisfying conditions imposed, what we mean by that is that the conditions imposed on the system, by the developers as we try and transition from what the user wants, the requirements, into what the system does in order to meet those requirements. So those are the conditions imposed, whatever we have the system actually do.

Validation then is whether it satisfies the specified requirements. Meaning the requirements that is specified as in told, explained by the users. So the requirements are not necessarily a written-down document that we would really like it to be, but it's what the user wants. So whether it satisfies what the user said they wanted, that's essentially what validation is.

<img src="../1. Software Development Processes and Methodologies/images/software_testing_def_2.png">

<h3>Software Testing: Strategies</h3>

<img src="../1. Software Development Processes and Methodologies/images/incremental_testing.png">

__Incremental Testing__ is our first look at __Regression Testing__. You start with say, two modules A and B, and three test cases numbered one, two, three. When you're done testing A and B, you don't get rid of the tests, you keep them. When you then add Module C, you also add the test case, or cases used to test just Module C in isolation, the unit tests. You add that test to the test for Modules A and B then, you run them all. This way, you can determine if something has changed in the previously correct code based on something you added, as well as testing that the current modules still works as intended. You keep adding modules and their tests and re-running all the tests as you go. This technique of re-running older tests in a larger suite is called Regression Testing. That's a big part of Incremental Testing.

<img src="../1. Software Development Processes and Methodologies/images/stub.png">

Now, when you're developing Top-down you have to develop something to stand in for the elements at lower levels that you haven't created yet. These are what we call __Stubs__. So, we have Level One Software, that's the software that we've been building. But the lower level software that it relies on, Level Two, in various different entities that we're going to rely on, for example, an object that I instantiate to do some task. Maybe there's three or four of those. Well, they haven't been built yet, but I still need to be able to do those tasks in order to make sure that my program works. So, one of the things that we can do is write a _Stub_. A _Stub_ is typically something that is maybe a single line, or a few lines of code that when called it essentially just returns a hard coded value that stands in for a real return value.

The same kind of thing can be done with what's called a __Mock__. And if you take software testing, for example, you'll see the differences between _Stubs_ and _Mocks_. A _Mock_ is something where you don't actually hard code something, you just say, was this method called, yes, you move on. So, when it comes to Stub or a Mock eventually, you will build out that Level Two software potentially and then, those levels, of course, rely on again underlying software potentially. So, you'd have to make Stubs for Level Three. So, as you move down you continue to build levels of software down and Stubs below those to continue your work down towards the underlying levels.

<img src="../1. Software Development Processes and Methodologies/images/driver.png">

The opposite case then, is when you're developing from bottom-up. When you have the lower lying implementation's complete but you don't have the larger picture integration execution driver hence, __Drivers__. These _Drivers_ walk through the process of what possible calls to our lower level in this case Level Three, elements might be and makes reasonable calls to ensure that Level Three is operational. The issue with building good _Drivers_ is that it's sometimes hard to know the kinds of inputs and the order of inputs that would be necessary to properly use Level Three before having built Level Two software. But you do the best you can and again it's usually hard coded. You try and make your best assumption of what the most common, or most important orders of operations are going to be and make sure that all your Level Three operations is complete. Once those are done, you start building Level Two software. And of course, with Level Two software we need to build a level above that. So, you could have, for example, a Level One Driver that drives all Level Two software.

<img src="../1. Software Development Processes and Methodologies/images/back_to_back.png">

Then, we have __Back to Back__ Testing. Back to Back Testing is one way that we make use of earlier iterations of a program as an effective automated Oracle. This is particularly useful for expanding test data without necessarily including expected output or if you don't already have automated tests from before. The idea is that the program worked before, at least we think it did. For all the things that worked before, you run test data for that working behaviors through both the old version and the new version. The outputs then, since it worked before should continue to work, the output should be the same. So, we can just do a direct comparison of the output. Alternatively, anything that developers have modified hopefully to fix something, or add some feature you run the test data through both iterations again to make sure that they are different. It still takes some manual inspection to show that the change in the changed result is what you actually wanted to change and that it changed in the right way. But at least it's a start, especially, when you're working with scratch you don't have any automated tests from the beginning.

So, we have some this overall idea of Test Scaffolding. The goal is setting up an environment for executing your tests. So, we have the Driver. The Driver initializes non-local variables, initializes parameters and activates units under test. Then, your Stubs will use templates of modules not actual working modules usually, that's why it's a Stub. Templates of the modules used by the unit including the functions called and templates of any other entity, or data structure that is used within the unit, that is the Program Unit. The Oracle then, is at the end which verifies the correspondence between produced and expected results. Again, often times the Oracle is us just a human, you run it, you make sure that what happened is what you expected. But there are increasingly automated Oracles that we are using in things like the Star unit, JUnit, PI unit testing frameworks that we can use to automatically verify that our Stub, Driver, and Program Unit have operated properly.

<img src="../1. Software Development Processes and Methodologies/images/tradeoffs.png">

<h3>Software Testing: Perspectives</h3>

<img src="../1. Software Development Processes and Methodologies/images/b_and_w_testing.png">

<img src="../1. Software Development Processes and Methodologies/images/v_v_process.png">

__Stages of Testing:__

- _Unit Testing:_ we're talking about testing of individual components. This usually means as individual method or potentially one class within the solution.

- _Module Testing:_ is a set of units that come together as a collection or dependent components. This is the first form of integration testing. How we test when things come together.

- _Sub System Testing:_ is testing a collections of modules integrated into subsystems. This testing is primarily concerned with ensuring that the interfaces between the subsystems and components, between the module's components. Often divided between developing teams, meet the specifications they were given.

- _System Testing:_ is testing the complete system prior to delivery and making sure that the whole system is working and it gets back to some things we talked about before with security, performance, usability, that kind of thing.

- _Acceptance Testing:_ is sometimes called alpha testing, beta testing and in fact, it is true that in deployment, once it's actually delivered to users, even though we don't call it an alpha or beta, when the users use it, find bugs and report them back to us somehow, that's still a form of testing.



<h1>Week 3: Software Development Models: Traditional Models</h1>



<h2>Waterfall Models</h2>

<h3>Software Development Models</h3>

There are a lot of software development models, but we can classify these models so that it allows us easier understanding of these models. One of the classification of these models is __predictive__ versus __adaptive__.

Predictive means that you have a pretty good understanding of the requirements of the software or the product that you are building. So in this case, the client or the analyst or the customer knows what exactly they want, and so they have a very high confidence of the requirements or what they're looking for. So once the requirements are defined completely, then the team goes through this design implementation and testing phase of the process and then finally produces the product that the client is looking for.

In adaptive models, the client or the customer generally has an idea of what they want to build, but they are not 100% sure what they want to build. So in this case, they start with an idea. The team that is working on it build something like a really small version of it or like a low fidelity version of it. And then they show it to the customer or the actual users using it. Then they build the next version based on the feedback and start morphing the product into something else. And so in the end you might end up getting something different than you were originally thinking, but what you get is what users need.

<img src="../1. Software Development Processes and Methodologies/images/predictive_vs_adaptive.png">

Most of the models that we will talk about, they're not always 100% predictive or not always 100% adaptive. They are sometimes somewhere in between and depends on how much you allow change during the process.

The second kind of classification of models is __incremental__ versus __iterative__ and this is about how you actually build the software.

In an incremental model, you have a fairly good idea of what you want to build, but instead of building it in one shot, like in the predictive model, you build in increments. In this model it will be useful if your organization can benefit from some of these intermediate products. Or if they are going to change the later increments based on the feedback from the previous increments.

In the iterative model you don't have a clear idea, but you have some idea. You sometimes are actually replacing what you've built with something different. So the difference between incremental and iterative is that, in iterative model you are building on top of the existing product and in iterative model you're just breaking the product in smaller pieces and there are enhancements that are happening during the process as well.

Now if you look at the incremental model, it can go predictive as well as adaptive. If you take the feedback from each of your increments and change your future increments, then it becomes a little bit adaptive model. Whereas if you don't take the feedback from each of your increments and just keep building one increment and then another increment, then it’s more like a predictive model.

<img src="../1. Software Development Processes and Methodologies/images/incremental_vs_iterative.png">

<h3>Waterfall Model</h3>

In the waterfall method what we do is we put all of these software engineering processes one after the another in a logical sequence.

<img src="../1. Software Development Processes and Methodologies/images/waterfall_model.png">

Now, what if something goes wrong, or let's say you are doing the implementation and you found out that, this is not what we need? To fix that problem, you are not going to just continue going down the line, you're going to fix it. So, to fix that problem, we sometimes add a feedback loop from each of the phase to the previous phase, which means that if you find something wrong in the implementation phase, you will go back to the design phase if the problem was in the design phase, or you can go into the requirement phase if the problem was in the requirement phase.

Now, one thing you might notice is that the later you find a problem in your model, the more costly it's going to be. So, you may have heard of the cost of change curve, which basically shows, how cost exponentially increases when you find bugs in later stages of development.

<img src="../1. Software Development Processes and Methodologies/images/Change_Cost.jpg">

So to find problems early on, we make some assumptions. The first assumption we make is that we _know the requirements very well and they won't change_. If the requirements change during later in the phase, it will be costly to go back and then repeat our steps. And so for this model to be successful, we need to make sure that the requirements are solid.

The second assumption we make in this model is that _the team has experienced building similar software_.

The third assumption, is that _the translation from the requirement to the product is going to be perfect_, which means that the designers or the people who are coding understood the requirements really well.

In terms of the predictive and adaptive scale this model is pretty much a very predictive model because you don't start until your requirements are done, then your design and so the requirement has to be known very clearly upfront.

__Pros:__
- it's a very simple and easy to understand model
- if you have the requirement fixed then it's a very predictive model because in the very beginning you know what you need, then you can identify how long is it going to take. Once your design is ready, you know how long it's going to take to implement and so on.
- it also gives you predictability from point of view of how many resources you need and then you also have predictability of what I'm going to get.
- it's a very efficient process since you know all the requirements, you can consider all the aspects of the product and you can design it perfectly.

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

1. It is a framework. It incorporates other methods/models: for example, during the Construction phase, you could be using Agile, you could be using Sashimi model, you could be using incremental model or whatnot. So, you could use any model during the Construction phase. Similarly, during Elaboration you can use any of the models. So, it's a framework and not really a defined process.

2. Any step may involve different kinds of work (requirements, design, etc) but relative effort and emphasis might be different.

3. Architecture Centric.

4. Use case centric: means when we do the Elaboration, or when we talk about what needs to be built, we consider a user into the picture and ask what the user wants to do from the system. Then for each of these use cases you define what's the trigger point, and what does the use case looks like, what are the exceptions, what are the extensions, what are the variations of that use case. So, what that does is that you look at the system, not just from a system perspective, but from a user perspective which gives you a holistic view of the system.

5. Focus on risk mitigation: One of the goal of the Elaboration phase is to identify and resolve or mitigate risk. So, that's one of the key idea behind this framework.

<img src="../1. Software Development Processes and Methodologies/images/unified_process_summary.png">

<img src="../1. Software Development Processes and Methodologies/images/unified_process_variants.png">

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

Let's say this was the kind of software development process. So once you apply the stage gates, or sometimes called phase gates into different places of the software development process they give the organization the ability to validate what they are attempting to do aligns with their strategic point of view or not and if it isn't aligned, then you drop the idea.

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
