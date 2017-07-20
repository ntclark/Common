# Common

I'll get right down to the core concept here:

   The projects here are <strong>interrelated</strong>, sorry, there's no two ways about it.
   
I can remember the days when we had to "SET INCLUDE=<path>" (and watch out for those spaces), and "SET LIB=<lib path>", and <i>then</i>
you had to actually reboot the machine for autoexec.bat to run - remember that ? Few of you will (and even fewer will remember config.sys),
but it was actually true, we had to reboot the machine (or, more likely, wait a little while because ctl-alt-delete was going to be 
necessary anyway in a bit, because something was hung up).

Well, I have news, despite all the hype and hyperbole with the muckity muck IDE software development environments being oh so powerful that
the need to manage where headers and libraries are, <i>nothing</i> has changed. 

Control of these aspects of software development is still necessary. No matter how hard they try to alleviate the issue, development
environment providers cannot git rid of the requirement that YOU understand where a project's resources are, they can hide it in a place
you can never find when you need to, they can do all sorts of "team" environment configurations, they can charge extra because they've 
convinced the team manager that they have all the answers ( which is easy to do ). But sadly, no, all of that just makes it worse.

SO ... Here's the one strategy to allow these projects to be built:

      1. clone them all
      2. put them in a place where they are siblings

That's my way, and the way these repositories are going to work
