# Shell Navigation

## Keyword and Title Brainstorming

### Keywords

Linux Command Line,
Linux commands,
Linux terminal,
Terminal commands,
Bash Commands

### Draft Titles

Navigate the Linux System Like A Pro.

## Objectives of the video

- navigate in a linux system
- list files and directories
- display the content of a file
- create and remove files or directories
- move, rename or copy files or directories

## Navigate the Linux System Like A Pro.

### Objectives

- Move around the computer
- See what files and directories I have
- Specify the location of a file or a directory

### Notes

- the part of the os responsible for managing files and directories is called the file system.
- it organizes our data into files, which hold information, and directories (also folders) which hold files and other directories.
- various commands are used to create, inspect, rename, copy, move and delete files and directories.
- Before you go anywhere, figure out where you are first. That sounds like something a monk would say.
  - when you're in the terminal, you can check where you are using the `pwd` command.
  - (which stands for 'print working directory')
  - Knowing where we are before running commands is important because most commands read and write files in the current working directory.
  - Here's an example of running `pwd` in your home directory.

```bash
seg@fault: pwd
/home/akuya
seg@fault:
```

- Before going any further, let's try and understand how the whole file system is organized.
- On Ubuntu, the folder structure looks like this.
- [//]: # "Image goes here"
- The root directory holds everything. It is represented with a `/`
- Now that you know where you are in the file system, how can you see the contents of the folder you're in?
- This is where the command `ls` comes in.
- Head over to your terminal and type the command

```bash
seg@fault: ls
Applications  Documents  Desktop  Downloads  main.c  script.sh
seg@fault:
```

- The output depends on what you actually have in you home folder.
- The `ls` command prints the names of directories and files in the current working directory.
- This command, as many others, also take in options (also known as flags) to modify the output of the command.
- Options are usually prefixed with a `-`.
- An example of an option to pass to the `ls` command is the `-F` option.
- This option classifies the output by adding a marker to a file or directory to indicate what they are.
  - a trailing `/` shows that it is a directory
  - `@` indicates a link
  - `*` indicates an executable
- Here's how you run the `ls` command with the `-F` option

```bash
seg@fault: ls -F
Applications/  Documents/  Desktop/  Downloads/  main.c  script.sh*
```

- Apart from the `-F` option, the `ls` command has many more options.
- To figure out how to use a command and all the options it accepts, you can run the `ls` command with `--help` option.

```bash
seg@fualt: ls --help
Usage: ls [OPTION]... [FILE]...
List information about the FILEs (the current directory by default).
Sort entries alphabetically if neither -cftuvSUX nor --sort is specified.

Mandatory arguments to long options are mandatory for short options, too.
  -a, --all                  do not ignore entries starting with .
  -A, --almost-all           do not list implied . and ..
      --author               with -l, print the author of each file
  -b, --escape               print C-style escapes for nongraphic characters
      --block-size=SIZE      scale sizes by SIZE before printing them; e.g.,
                               '--block-size=M' prints sizes in units of
                               1,048,576 bytes; see SIZE format below
  -B, --ignore-backups       do not list implied entries ending with ~
  -c                         with -lt: sort by, and show, ctime (time of last
                               modification of file status information);
                               with -l: show ctime and sort by name;
                               otherwise: sort by ctime, newest first
  -C                         list entries by columns
      --color[=WHEN]         colorize the output; WHEN can be 'always' (default
                               if omitted), 'auto', or 'never'; more info below
  -d, --directory            list directories themselves, not their contents
  -D, --dired                generate output designed for Emacs' dired mode
  -f                         do not sort, enable -aU, disable -ls --color
  -F, --classify             append indicator (one of */=>@|) to entries
...        ...        ...
```

- If you've been following along, you might find your terminal looking a bit too cluttered for you, with all you previous commands and output still there.
- You can clean up your terminal with the `clear` command. Now you have a clean terminal.
- The `clear` command also has a nice option. Running the clear command with the `-X` command clears your terminal but you now have the option of scrolling up to see all the previous commands you ran.
- I love adding that option. Best of both worlds.
