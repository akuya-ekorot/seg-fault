# Shell Navigation

## Keyword and Title Brainstorming

### Keywords

Linux Command Line
Linux commands
Linux terminal
Terminal commands
Bash Commands

### Draft Titles

Top Linux Commands that Will Blow Your Mind???
Top Linux Commands To Make You A Better Developer
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
  [//]: # "Image goes here"
- The root directory holds everything. It is represented with a `/`
- Now that you know where you are in the file system, how can you see the contents of the folder you're in?
- This is where the command `ls` comes in.
- Head over to your terminal and type the command

```bash
seg@fault: ls
Applications  Documents  Desktop  Downloads
seg@fault:
```
