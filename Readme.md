# Building OpenSource projects from EnVisioNateSW

I have developed a software building process that I believe minimizes crossups that happen
when different projects are in different places and there may be a number of "locations" 
where artifacts may be selected and used by the building tools. In this case, Visual Studio

I DO NOT use multiple building tools and frankly, multiple platforms. I target only windows
and I use MS Visual Studio to build evertyhing that I do.

I have nothing specifically against other tools or platforms, I just don't really have the desire
to complicate my life with them, I am, thank you very much, busy and happy with the volume of stuff
that I can produce.

As Spock says, "The needs of the many outweigh the needs of the fiew"

If you want to take my stuff and port it to CMAKE or to Linux, have at it, I hope it works for you

## One and only one place

I've found that the vast majority of confusion and cross artifact utilization occurs because
people don't decide UP FRONT how to keep it from happening.

Some feel a solution might to be designate a place for common files [^1], but I'm not going to 
do that. For one thing, those "places" must be referenced *inside* the build tools configuration
files, and that doesn't bode well with me. I won't be telling you (directly) where to put common 
files and then have to build some sort of installation tool to be sure you actually follow 
those guidelines.

But I will tell you indirectly:

### You must use a specific environment variable to build my projects

I expect you to define, as a permanent environment variable, the GSYSTEMS environment variable that points to that one
and only one location where all of the common files shall be placed.

Once you have done that and have cloned my [common repository](https://github.com/ntclark/common) (this one) into it, 
*then* any and all my projects *should* build.

A consistent and rock solid software development environment is a very difficult thing to achieve, and is not that commonly 
reached.

I believe that this one technique, creating a location and pointing to it with the GSYSTEMS environment variable
is the easiest way to have you get configured as quickly as possible.

**Note**: Visual Studio has what I consider to be  bug. If you navigate properties which involve a disc location, VS
may include relative paths to that location in the project file. You will need to "unload" the project, manually edit
the project file, and change those relative locations to your location (hopefully using the %GSYSTEMS% environment variable
expansion where appropriate). I assume it's the same moron VS developer who limited the File MRU list to a whopping 10 entries.

If you look at any of my projects in the "Propery Manager" pane of Visual Studio, you will see that the very first thing I do
when creating a new project is to go there, right click on the project name, and add the "Common Properties.props" file.

I cannot stress enough the power of having an absolutely consistent set of build propertie for every project in or on or of
a system.This is the technique all of my projects use, a consistent set of properties. It is a rare occurrance that I actually
have to tweak any settings in any project. I try to, as much as possible, keep every project building exactly the same way
When I find I should have been using a different compile switch, I'll probably change that in the common compiler options 
file and every project immediately sees the change (though I have to rebuild them all)


[^1]: Common files are the header files important to more than one project, the lib files, the Type Library Files, if any, 
the generated files, and yes, even the built binary artifacts, that is '.dlls and '.exes

