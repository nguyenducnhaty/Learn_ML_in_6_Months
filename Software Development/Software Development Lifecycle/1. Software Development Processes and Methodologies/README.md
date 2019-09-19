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



<h1>Week 2: Software Development Processes : Part 2</h1>






<h1>Week 3: Software Development Models: Traditional Models</h1>









<h1>Week 4: Software Development Models: Agile and Lean</h1>
