<h1>Week 1: Writing Code</h1>



<h2>Step 5</h2>

<h3>Step 5: Translation to Code</h3>

We should start Step 5 by writing down the declaration of the function that we are writing, with its body (the code inside of it) replaced by the generalized algorithm from Step 3, written as _comments_. Comments are lines in a program which have a syntactic indication that they are for humans only (to make notes on how things work, and help people read and understand your code), and not an actual part of the behavior of the program. When you execute code by hand, you should simply skip over comments, as they have no effect. In C, there are two forms of comments: __//__ comments to the end of the line, and __/*...*/__ makes everything between the slash-star and the star-slash into a comment.

One thing we may need to do in writing down the function declaration is to figure out its parameter types and return type.

<h3>Translating Algorithm Components</h3>

Once you have written the function declaration and written the algorithm steps as comments, you are ready to translate each step of the algorithm to code, line by line. If you have written good (i.e., clear and precise) steps in Step 3, this translation should be fairly straight forward—most steps you will want to implement naturally translate into the syntax we have already learned:

__Repetition:__
Whenever you have discovered repetition while generalizing your algorithm, it translates into a loop. Typically, if your repetition involves counting, you will use a *__for loop__*. Otherwise, if you are sure you always want to do the body at least once, a *__do-while__* is the most appropriate type. In other cases (which typically align with steps like "as long as (something)..." *__while loops__* are generally your best bet. If your algorithm calls for you to "stop repeating things" or "stop counting" you will want to translate that idea into a *__break__* statement. Meanwhile, if your algorithm calls for you to skip the rest of the steps in the current repetition, and go back the start of the loop, that translates into a *__continue__* statement.

__Decision Making:__
Whenever your algorithm calls for you to make a decision, that will translate into either *__if/else__* or *__switch/case__*. You will typically only want switch/case when you are making a decision based on many possible numerical values of one expression. Otherwise, you will want *__if/else__*.

When your algorithm knows the answer and has no more work to do, you should write a *__return__* statement, which returns the answer that you have computed.

Whenever you have a complex line in your algorithm—something that you cannot translate directly into a few lines of code—you should call another function to perform the work of that step. Abstracting code out into a separate function has another advantage—you can reuse that function to solve other problems later.

With a clearly defined algorithm, the translation to code should proceed in a fairly straightforward manner. Initially, you may need to look up the syntax of various statements, but you should quickly become familiar with them. If you find yourself struggling with this translation, it likely either means that your description of your algorithm is too vague (in which case, you need to go back to it, think about what precisely you meant, and refine it), or that the pieces of your algorithm are complex and you are getting hung up on them, rather than calling a function to do that piece, which you will write afterwards.

<h3>Top-down Design and Composability</h3>

__Top-down design:__
The process of taking large, complex pieces, and separating them out into their own function—known as top-down design —is crucial as you write larger and larger programs. While it may seem advantageous to just write everything in one giant function, such an approach not only makes the programming more difficult, but also tends to result in a complex mess that is difficult to test and debug. Whenever you have a chance to pull a well-defined logical piece of your program out into its own function, you should consider this an opportunity, not a burden.

__Composability__
When you are translating your code from your algorithmic description to C (or whatever other language you want), you can translate an instruction into code in the same way, no matter what other steps it is near, or what conditions or repetitions it is inside of. That is, you do not have to do anything special to write a loop inside of another loop, nor to write a conditional statement inside of a loop—you can just put the pieces together and they work as expected.

The ability to put things together and have them work as expected is called _composability_ and is important to building not only programs, but other complex systems. If you put a for loop inside of an if statement, you do not need to worry about any special rules or odd behaviors: you only need to know how a for loop and an if statement work, and you can reason about the behavior of their combination.


<h2>Tools</h2>

<h3>UNIX basics</h3>

UNIX is a multi-tasking, multi-user operating system, which is well-suited to programming and programming-related tasks (running servers, etc.). Technically speaking, UNIX refers to a specific operating system developed at Bell Labs in the 1970s, however, today it is more commonly used (slightly imprecisely) to mean “any UNIX-like” operating system, such as Linux, Free BSD, Solaris, AIX, and even Mac OSX. Here, we will use the more general term, and note that you are most likely to use Linux or Mac OSX.

__In the Beginning Was the Command Line:__

While UNIX has a graphical interface (GUI), its users often make use of the _command line_. In its simplest usage, the command line has you type the name of the program you want to run, whereas a GUI-based operating system might have you double-click on an icon of the program you want to run. The command line interface can be intimidating or frustrating at first, but an expert user will often prefer the command line to a GUI. Beyond being the natural environment to program in, it allows for us to perform more sophisticated tasks, especially automating those which might otherwise be repetitive.

To reach a command line prompt, you will need to use a terminal emulator (commonly referred to as just a "terminal"), which is a program that emulates a text-mode terminal. If you are running a UNIX based system (Linux or Mac OSX), a terminal is available natively. In Linux, if you are using the graphical environment, you can run xterm, or you can switch to an actual text-mode terminal by pressing Ctrl-Alt-F1 (to switch back to the graphical interface, you can press Ctrl-Alt-F7). If you are running Mac OSX, you can run the Terminal application (typically found under Applications >Utilities).

If you are running Windows, there are some command line options (typically called cmd or command, depending the version of Windows), however, these tend to be quite simplistic by UNIX standards. In fact, the Windows command prompt behaves entirely differently and uses different commands than a Unix shell. You could install a tool called Cygwin, which provides the basics of a UNIX environment if you wanted.

__Command line arguments:__

Many UNIX commands take arguments on the command line to specify exactly what they should do. In general, command line arguments are separated from the command name (and each other) by white space (one or more spaces or tabs). For example, ls -a .. will display "all" files in the parent directory, including those that are usually not displayed.

The ".." is an argument that tells ls which directory to display the contents of. The argument "-a" is an example of an “option.” Options are arguments that differ from “normal” arguments in that they start with a hyphen "-" and change the behavior of the command, rather than specifying the typical details of the program.

There are a handful of useful directory-related commands that you should know. The first is cd, which stands for “change directory.” This command changes the current directory to a different directory that you specify as its command line argument.

Another useful command is ls which lists the contents of a directory—what files and directories are inside of it. With no arguments, ls lists the contents of the current directory. If specify one or more path names as arguments, ls will list information about them. For path names that specify directories, ls will display the contents of the directories.

The _ls_ command also can take special arguments called “options”. For example, for _ls_ the -l option requests that _ls_ print extra information about each file that it lists. The -a option requests that _ls_ list all files. By contrast, its default behavior is to skip over files whose names begin with `.` (i.e., a dot). While this behavior may seem odd, it arises from the UNIX convention that files are named with a `.` if and only if you typically do not want to see them. One common use of these “dot files” is for configuration files (or directories). For example, a command shell (which parses and executes the commands you type at the prompt) maintains a configuration file in each user’s home directory. For the command shell _bash_, this file is called _.bashrc_. For the command shell _tsch_, this file is called _.cshrc_.

Two other useful directory-related commands are _mkdir_ and _rmdir_. The mkdir command takes one argument and creates a directory by the specified name. The rmdir command takes one argument and removes (deletes) the specified directory. To delete a directory using rmdir, the directory must be empty (it must contain no files or directories, except for . and .. which cannot be deleted).

__Displaying Files:__

Commands to display the contents of files: _cat, more, less, head,_ and _tail_.

The first of these, _cat_, reads one or more files, concatenates them together (which is where it gets its name), and prints them out. As you may have guessed by now, cat determines which file(s) to read and print based on its command line arguments. It will print out each file you name, in the order that you name them.

If you do not give _cat_ any command line arguments, then it will read _standard input_ and print it out. Typically, standard input is the input of the terminal that you run a program from—meaning it is usually what you type. If you just run _cat_ with no arguments, this means it will print back what you type in. While that may sound somewhat useless, it can become more useful when either standard input or standard output (where it prints: typically the terminal’s screen) are _redirected or piped_ somewhere else.

While you can use _cat_ to display the contents of a file, you typically want a bit more functionality than just printing the file out. The more command displays one screenfull and then waits until you press a key before displaying the next screenfull. It gets its name from the fact that it prompts ---_More_-- to indicate that you should press a key to see more text. The _less_ command supercedes _more_ and provides more functionality: you can scroll up and down with the arrow keys, and search for text. Many systems actually run less whenever you ask for more.

There are also commands to show just the start (_head_) or just the end (_tail_) of a file. Each of these commands can take an argument of how many lines to display from the requested file. Of course, for full details on any of these commands, see their man pages.

Note that these commands just let you view the contents of files.

__Moving, Copying, and Deleting:__

Another task you may wish to perform is to move (_mv_), copy (_cp_), or delete (_rm_—stands for “remove”) files. The first two take a source and a destination, in that order. That is where to move (or copy) the file from, followed by where to move (or copy) it to. If you give either of these commands more than 2 arguments, they assume that the first N-1 are sources, and the last is the destination, which must be a directory. In this case, each of the sources is moved (or copied) into that directory, keeping its original filename.

The _rm_ command takes any number of arguments, and deletes each file that you specify. If you want to delete a directory, you can use the rmdir command instead. If you use rmdir, the directory must be empty—it must contain no files or subdirectories (other than . and ..). You can also use _rm_ to recursively delete all files and directories contained within a directory by giving it the -r option.

__Pattern Expansion: Globbing and Braces__

You may (frequently) find yourself wishing to manipulate many files at once that conform to some pattern—for example, removing all files whose name ends with ~ (editors typically make backup files while you edit by appending ~ to the name). You may have many of these files, and typing in all of their names would be tedious.

Because these names follow a pattern, you can use _globbing_—paterns which expand to multiple arguments based on the file names in the current directory—to describe them succinctly. In this particular case, you could do `rm *~` (note there is no space between the `*` and the `~`; doing `rm * ~` would expand the `*` to all files in the directory, and then `~` would be a separate argument after all of them). Here, `*` is a pattern which means “match anything”. The entire pattern `*~` matches any file name (in the current directory) whose name ends with `~`. The shell expands the glob before passing the command line arguments to rm—that is, it will replace `*~` with the appropriately matching names, and rm will see all of those names as its command line arguments.

There are some other UNIX globbing patterns besides just `*`. One of them is ? which matches any one character. By contrast, `*` matches any number (including 0) of characters. You can also specify a certain set of characters to match with [...] or to exclude with [!...]. For example, if you were to use the pattern file0[123].txt it would match file01.txt, file02.txt, and file03.txt. If you did file0[!123].txt, then it would not match those names, but would match names like file09.txt, file0x.txt, or file0..txt (and many others).

Sometimes, you may wish to use one of these special characters literally—that is, you might want to use `*` to mean just the character `*`. In this case, you can escape the character to remove its special meaning. For example, `rm \*` will remove exactly the file named `*`, whereas `rm *` will remove all files in the current directory.



<h1>Week 2: Compiling and Running</h1>








<h1>Week 3: Testing and debugging</h1>









<h1>Week 4: Project</h1>
