# Common

## Header and cpp files that are common across many of the repositories here 
---

The projects here are <strong>interrelated</strong>.
   
Here's the one strategy to allow these projects to be built:

      1. clone them all to the root of some drive

If you do this, all projects in these repositories should build fine.

Note that currently all of my repositories expect to be cloned into the root of a drive so that they are 1) siblings, and 2) interrelated artifacts are found at: \Common....

In the future, I might implement a simple environment variable so that you can clone these off of the root (though they would still have to be siblings), but for now, they need to be at the root of a drive.

### Putting the repositories elsewhere

If you <strong>would</strong> like to put these repositories somewhere else, simply "create" a drive for them using the SUBST command

However, fair warning, note that if you SUBST a drive as a normal user - then a process running "As Administrator" cannot see that drive, and vice-versa.

This may be an issue if, for example, you run Visual Studio as Administrator - which is very useful if your "post build" commands are going to register the just built artifact, which in turn is very useful as it negates the need for an installer build for the testing cycles. 

However, for now, this is how project inter-relation is handled with these repositories.


