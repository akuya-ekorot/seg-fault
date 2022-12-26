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

## Navigate the Linux System Like A Pro.

### Objectives

- See what files and directories I have
- Move around the computer
- Specify the location of a file or a directory
- Relative and absolute paths

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
seg@fault:~$ pwd
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
seg@fault:~$ ls
Applications  Documents  Desktop  Downloads  main.c  script.sh
seg@fault:~$
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
seg@fault:~$ ls -F
Applications/  Documents/  Desktop/  Downloads/  main.c  script.sh*
```

- Apart from the `-F` option, the `ls` command has many more options.
- To figure out how to use a command and all the options it accepts, you can run the `ls` command with `--help` option.

```bash
seg@fualt:~$ ls --help
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

- The other way to learn more about a command is by using the `man` command, followed by the command you want to know about. For example `man ls`.
- The `man` command, which stands for manual, turns your terminal to a manual page of the command.
- You can scroll the manual page using the up and down arrow or using the vim commands `k` and `j` for up and down respectively.
- To quit out of the manual page, press the `q` key.

- Here are some interesting options for the `ls` command.

  - This command lists all content of the current working directory, including the hidden files starting with a `.`.

  ```bash
  seg@fault:~$ ls -a
  ```

  - This command lists all content of the current working directory just like the previous one, but in long format.

  ```bash
  seg@fault:~$ ls -al
  ```

  - This command lists contents of the current working directory and sorts them by time, newest first.

  ```bash
  seg@fault:~$ ls -t
  ```

  - Here's a little homework. What options would you pass together with the `ls` command to list contents of the current working directory in long formart reverse-ordered by the time they were modiefied?
  - Comment your answer in the comment section below!

- If you've been following along, you might find your terminal looking a bit too cluttered for you, with all you previous commands and output still there.
- You can clean up your terminal with the `clear` command. Now you have a clean terminal.
- The `clear` command also has a nice option. Running the clear command with the `-X` command clears your terminal but you now have the option of scrolling up to see all the previous commands you ran.
- I love adding that option. Best of both worlds.

- So far, we've been looking at listing contents of the current working directory, but you can also list the content of other directories.
- You can do this by passing the path of the directory you're targeting after the options in the `ls` command.
- Here's an example of displaying the content of the Downloads directory inside the current working directory.

```bash
seg@fault:~$ ls -a Downloads/
```

- The path `Downloads/` that we passed in the previous command is a **relative path**.
- A relative path is a path that considers the current working directory.
- There are several interesting ways of navigating using the relative path.
- Before we get into it, let me first introduce the `cd` command.
- This command stands for **change directory**. And from the name, we get to know what it actually does, it takes us to another directory.
- The `cd` command takes in a path as it's arguement.
- If we wanted to go into the `Downloads/` directory, we would use the following command.

```bash
seg@fault:~$ cd Downloads/
seg@fault:~/Downloads$
```

- Another way to go into a folder contained in the current working directory would be by adding the relative path `./`
- Here's an example

```bash
seg@fault:~$ cd ./Downloads/
seg@fault:~/Downloads$
```

- The `./` is a relative path that represents the current working directory.
- If we wanted to go back to the parent directory we could run the following command

```bash
seg@fault:~/Downloads$ cd ..
seg@fault:~$
```

- The `..` is a relative path that represents a folder up, or the parent directory.
- You can chain the `..` to go two folders up. Here's how you would go to the home folder from the movies folder contained in the downloads folder.

```bash
seg@fault:~/Downloads/Movies$ cd ../..
seg@fault:~$
```

- Since the home folder was two directories up in the previous example, another way to go to the home directory is to use the relative path symbol for home which is the `~` tilde symbol.
- Here's how to do it.

```bash
seg@fault:~/Downloads/Movies$ cd ~
seg@fault:~$
```

- Or we can just simply type `cd` which always takes us back home.

```bash
seg@fault:~/Downloads/Movies$ cd
seg@fault:~$
```

- I wish there was a way to use this in real life, I wouldn't have been lost that much as a kid.

- Instead of using relative paths, we can also use **absolute paths**.
- Absolute paths are the full path of the file or directory from the root `/`
- We actually saw an absolute path before when we ran the `pwd` command.
- Let's run it again and see the absolute path of the current working directory

```bash
seg@fault:~$ pwd
/home/akuya
seg@fault:~$
```

- If we wanted to go to the download folder from home, we could pass the absolute path like so

```bash
seg@fault:~$cd /home/akuya/Downloads
seg@fault:~/Downloads
```

- Another useful symbol to pass to `cd` is the `-` symbol.
- This symbol takes us the previous directory we were in.
- Think of it as the back button in a browser.
- As an example, let's say we were in the Movies folder. let's navigate there using this command. I'll pass in the absolute path for this example.

```bash
seg@fault:~$ cd /home/akuya/Downloads/Movies
seg@fault:~/Downloads/Movies$
```

- Then, let's assume we need to access the `Documents` folder contained in our home directory.
- I'll navigate there using the relative path.

```bash
seg@fault:~/Downloads/Movies$ cd ../../Documents
seg@fault:~/Documents$
```

- If we wanted to go back to our movies folder now, instead of passing the relative or absolute paths, we could pass the `-` and that would take us to the folder we were last.

```bash
seg@fault:~/Documents$ cd -
seg@fault:~/Downloads/Movies$
```

- If we wrote the same command again, it would take us back to the Documents folder.
