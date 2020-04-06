<h1>Holberton Shell - a simple shell</h1>
<p><strong>Holberton Shell (hsh) is a simple command shell for any Mac and Linux operating system. Hsh has some of the initial or simple characteristics present in the bash shell. This shell was made for a project at the Holberton School.</strong></p>
<h5>&nbsp;</h5>
<hr />
<p>hsh operation is like any other command, such as bash or zsh. If you do not need help for the command content and do not know what it is, ask for hsh help by running it in the terminal.</p>
<p>hsh command can be compiled with GCC 4.8.5 or newer.<br />&nbsp; furthermore, hsh is compiled only with "<em>gcc 4.8.4 -Wall -Werror -Wextra -pedantic * .c -o simple_shell".</em></p>
<p>To start the created command "hsh", just type = ./simple_shell</p>
<ul>
<li>&nbsp;&nbsp;in&nbsp;the terminal of your operating system, being mac or linux.</li>
</ul>
<h4>&nbsp;</h4>
<hr />
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>command</p>
<hr />
<pre><code>&nbsp;</code></pre>
<p>Commands and arguments are always divided by quotation marks &lt;''&gt;. in the terminal the commands end on a new line (so to speak, by the return key) or a ;, or ||.</p>
<p>to add one more new command line, a; can be used to issue commands. Commands are read and executed from left to right.</p>
<p>echo Hello Holberton; ls</p>
<p>If the commands are independent by the "&amp;&amp;", the command that is furthest to the left can be read and executed, and if the execution arrives it does not work or marks an error, the next other commands are not executed, if not the opposite, will execute the next command that is online. If the commands are independent by || , regardless of the error or execution failure or the correct operation of the leftmost command, all the commands will be executed successfully.</p>
<p><strong>&nbsp;&nbsp;Flags and switches</strong><br />&nbsp;arguments, switches and command flags are also reconcilable with hsh. Most switches start with a bass, and almost always somehow get there by affecting the command in some way. For example, when a user wants to enter the following command:</p>
<p>ls -a</p>
<p>The ls commands will list all directories and files in the current task directory that can be found in a fully enumerated way. in addition, including the -a, it will also add all the directories and folders, even the hidden ones as I said above.</p>
<p><strong>Comments</strong><br />hsh supplies bases for accumulated comments to the standard input. To get to the comments, put a "#" before any declaration. Comments are ignored by hsh.</p>
<p><em>echo # Hello Holberton</em></p>
<p><br />The last command will not be able to write Hello Holberton to the standard output.</p>
<p><strong>List of useful commands.</strong></p>
<p><br /><em>cat</em> - Basically what the cat command does is read data from files and display their contents, concatenated. And it is the easiest way to display the contents of a file on the command line.</p>
<p><em>cp</em> - copy files to another file in our terminal like cp filename and then pass the copy to another address like / holberton.</p>
<p><em>grep</em>: take a regular expression from the command line, read standard input or a list of files, and print the lines that contain matches for the regular expression in a few words search a file for a pattern.</p>
<p><em>less</em>: text file viewer that works in command interpreters.</p>
<p><em>ls</em> - lists all files and directories in the current working directory</p>
<p><em>mv</em>: move a file to another file</p>
<p><em>pwd</em>: print current working directory</p>
<p><em>Builtins</em><br />There are several inclusion scheduled in the hsh. Below is a detailed description and use for each construction.</p>
<p><strong>env, setenv, unsetenv</strong><br />To print a list of all environmental variables, you can use the built-in environment. Each environmental variable and its value are printed with a key = value syntax. Each variable is separated by a new line.</p>
<p>To set an environmental variable, the built-in value is setenv. The syntax for using setenv is the key value of setenv. If one of the arguments is missing, an error is returned.</p>
<p><strong>setenv holberton betty</strong><br />To remove an environmental variable, you can use the built-in unsetenv. The syntax for using unsetenv is the unsetenv key. If no key value is supplied, an error is returned.</p>
<p>unsetenv holberton<br /><strong>CD</strong></p>
<p><br />The cd command changes the working directory of the shell. The syntax for using the command is cd DIR. If DIR is not provided, it is default in the HOME shell variable. The full path of the directory is required. To change the directory to its parent, you can use the argument ...</p>
<p><strong>history</strong><br />To print a list of previous commands used, you can use the command history. The previous 50 commands will be printed. The history of all commands is written to the .simple_shell_history file.</p>
<p><strong>help</strong><br />To get a description and use of syntax for a specific command, you can use the help command. To use the built-in help, the syntax is as follows</p>
<p><strong>help cd</strong><br />The result would include usage followed by a definition.</p>
<p><strong>use of cd: cd DIR</strong><br />Change current directory to DIR<br />exit<br />To exit the shell, the user can exit using exit or ctrl d, a status number can be given, n. If n is omitted, the exit status is that of the last command executed.</p>
<p><em><strong>output 1</strong></em></p>
<h5><a id="user-content-exit" class="anchor" href="https://github.com/Esteban1891/simple_shell/blob/master/README.md#exit"></a>exit</h5>
<p>To exit out of the shell, the user may use the&nbsp;<code>exit</code>&nbsp;builtin. To use&nbsp;<code>exit</code>, a status number,&nbsp;<code>n</code>&nbsp;can be given. If&nbsp;<code>n</code>&nbsp;is ommited, the exit status is that of the last command executed.</p>
<pre><code>exit 1
</code></pre>
<h4><a id="user-content-exiting-commands-and-hsh" class="anchor" href="https://github.com/Esteban1891/simple_shell/blob/master/README.md#exiting-commands-and-hsh"></a>Exiting command and hsh</h4>
<hr />
<p>To exit out of a process or command,&nbsp;<code>ctrl c</code>&nbsp;is used. Control-C interrupts a process and causes it to abort.</p>
<p>To exit out of the hsh shell, the user can do one of the following,&nbsp;<code>ctrl D</code>&nbsp;or&nbsp;<code>exit n</code>. When exiting with&nbsp;<code>ctrl D</code>, an exit status of 0 is given. Using&nbsp;<code>exit</code>, you can input its exit status or it is defaulted to the status of the last command executed.</p>
