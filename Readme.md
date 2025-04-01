# Building OpenSource projects from EnVisioNateSW

> ## Running Visual Studio "As Administrator" is recommended.
>I'm putting this information at the top so it doesn't get missed.
>
>One of the things I like to do to create a confusion, and error, free environment is to
use one and only one place. You'll see that below.
>
>However, you're probably not building "one and only one" *flavor* of the system. My projects 
always contain both a Debug and Release *configuration*, and each of these for both
a Win32 and x64 *platform*. I don't mess with any special configurations, these two suffice
for everyhing I've ever needed.
>
>So, that's four places not one. First never mix configurations or platforms in the same physical
disk location - please. That is guaranteed confusion.
>
>One excellent solution to this is to let the system point you to the binary artifacts you want to 
interopate with, and for this there is a two pronged approach, 1) use COM Objects as your '.dlls, 
and 2) register these upon *every* build. Thus, the need for running VS As Administrator.
>
>I understand if you don't want to use COM, it is, afterall, not strictly required even if your
artifacts are equpped to work in that environment. Specifically, there is nothing stopping you from
calling LoadLibrary on these artifacts, or just linking to them directly.
>
>If you don't run VS as administrator (i.e. you don't register your builds), and you DO use COM, just 
be aware that you might be using your Debug version when you shift the client to Release. You'll 
probably detect that when you realize the recent changes don't seem to be "taking", it's happened
to me.
>
>Also, you should be aware that Compiler Options.props file that I use religiously on every project, 
specifies the location of your binaries for all 4 possibilities, so if you follow the directories
specified in the project properties, you can minimize crossups.
>

I have developed a software building process that I believe minimizes crossups that happen
when different projects are in different places and there may be a number of "locations" 
where artifacts might be found and used by the building tools. In this case, Visual Studio.

I DO NOT use multiple building tools or, frankly, multiple platforms in my Open source projects.
I target only windows and I use MS Visual Studio to build all of these (again, as far as my Open 
Source projects go,of course, I use any tool (and platform) required for the boatloads of other stuff I do).

I have nothing specifically against other tools or platforms, I just don't really have the desire
to complicate my life with them, I am, thank you very much, busy and happy with the volume of stuff
that I can produce.

As Spock says, "The needs of the many outweigh the needs of the few"

If you want to take my stuff and port it to CMAKE or to Linux, have at it, I hope it works for you.

## One and only one place

I've found that the vast majority of confusion and cross artifact utilization occurs because
people don't plan UP FRONT how to keep it from happening.

Some feel a solution is to specify a dedicated place for common files [^1], but I'm not going to 
do that. For one thing, those "places" must be referenced *inside* the build tools' configuration
files, and that doesn't bode well with me. I won't be telling you (directly) where to put common 
files and then have to build some sort of installation tool to be sure you actually follow 
those guidelines.

But I will tell you indirectly:

### You must use a specific environment variable to build my projects

This is, of course, not uncommon. However, in my case, it's the one and only thing you should have to do to build
my project(s). I try to make it as simple as possible thru and thru. My hope is that, if you clone this repository, and another that
you are interested in, then you should be able to build that other one out of the box. No "configure", no make, no make install. Granted, I have the 
luxury of only one platform, and maybe if other's did, their build process would be easy too, I don't know.

I would like you to define, as a permanent environment variable, the GSYSTEM_HOME variable that points to that one
and only one location where all of the common files shall be placed. Note that "common files" ALSO includes
built artifacts, that is, the '.exes and '.dlls. Typically, you should be able to run from that location pretty 
much for every project.

As for "that other" repository that you are trying to build - it never ever cares where on your machine you've cloned it 
to. The *only* thing those other repositories need are the GSYSTEM_HOME variable pointing to your desired common location.

Once you have done that and have cloned my [common repository](https://github.com/ntclark/common) (this one) into the specified location, 
*then* any and all my projects *should* build.

Note the example:
```
    mkdir C:\CoolStuff
    cd C:\CoolStuff
    github clone https://github.com/ntclark/Common
    set GSYSTEM_HOME=C:\CoolStuff
```

So you will then have the directory:

`C:\CoolStuff\Common`

on your machine. In other words do your github cloning (at least for this repository) IN the directory pointed to by GSYSTEM_HOME

I do not specify Visual Studio Version. In 30 years working with Visual Studio, I have never seen definitive proof that VS version
actually matters. At least to the extent that it's the "latest" or pretty near so. 

A consistent and rock solid software development environment is a difficult thing to achieve, and is not that commonly 
reached. I believe that this one technique, creating a location and pointing to it with the GSYSTEM_HOME_ environment variable
is the easiest way to have you get configured as quickly as possible.

**Note**: Visual Studio has what I consider to be  bug. If you navigate properties which involve a disc location in your 
GSYSTEM_HOME folder tree, VS may include relative (to the project file) paths to that location in the project file. 
You will need to "unload" the project, manually edit the project file, and change those relative paths to your location 
(hopefully using the $(GSYSTEM_HOME) environment variable expansion where appropriate). 
I assume it's the same moron VS developer who limited the File MRU list to a whopping 10 entries who caused this bug.

If you look at any of my projects in the "Property Manager" pane of Visual Studio, you will see that the very first thing I do
when creating a new project is to go there, right click on the project name, and add the "Common Options.props" file.

And then, as in the note above, I have to unload the project, edit the project file, and change entries like

`..\..\Common\Common Options.prop`

to 
`$(GSYSTEM_HOME)\Common\Common Options.prop`

etc.

Note these common options keep the 4 typical configurations separated from each other. These are Win32, X64 platforms, each with a
Debug and Release build. You will even find that built artifacts will end up in your common location in the appropriate 
sub-folders per these configurations.

I cannot stress enough the power of having an absolutely consistent set of build properties for every project in or on or of
a system.This is the technique all of my projects use, a consistent set of properties. It is a rare occurrance that I actually
have to tweak any settings in any project. I try to, as much as possible, keep every project building exactly the same way.
When I find I should have been using a different compiler switch, I'll probably change that in the common compiler options 
file and every project immediately sees the change (though I have to rebuild them all)

## Run as administrator

There, I said it. Many of my projects are COM (Component Object Model) objects that should automatically register on 
successful build. If you don't want to have dll hell, register your objects every time you build them.

If, for example, your corporate environment won't allow you to run as administrator, you'll need to keep in mind that registration 
makes it easier to ensure you're working with the latest. True, it works to simply overwrite the file, *however* don't forget that 
when you switch Platform or Configuration - you are dealing with a different file. In other words, registration may be pointing to the
wrong file.

On the other hand, it is much easier than most people may be aware to skip actual OS supplied COM altogether and simply dynamically
load the appropriate '.dlls with LoadLibrary. With COM you are by no means required to follow the CoInitialize and CoCreateInstance
model of accessing your software artifacts.

Keep in mind that all built artifacts will be emitted into:

&nbsp;&nbsp;&nbsp;&nbsp;`$(GSYSTEM_HOME)\Common\Artifacts\<Platform>\<Configuration`

For example:

&nbsp;&nbsp;&nbsp;&nbsp;"C:\Development\Common\Artifacts\Win32\Release`

asdsuming, for example, GSYSTEM_HOME=C:\Development

[^1]: Common files are the header files important to more than one project, the lib files, the Type Library Files, if any, 
the generated files, and yes, even the built binary artifacts, that is '.dlls and '.exes

