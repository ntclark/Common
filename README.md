# Common

I'll get right down to the core concept here:

   The projects here are <strong>interrelated</strong>, sorry, there's no two ways about it.
   
I can remember the days when we had to "SET INCLUDE=&lt;path&gt;" (and watch out for those spaces), and "SET LIB=&lt;lib path&gt;", and <i>then</i>
you had to actually reboot the machine for autoexec.bat to run - remember that ? Few of you will (and even fewer will remember config.sys),
but it was actually true, we had to reboot the machine (or, more likely, wait a little while because ctl-alt-delete was going to be 
necessary anyway in a bit, because something was hung up).

SO ... Here's the one strategy to allow these projects to be built:

      1. clone them all
      2. put them in a place where they are siblings

That's my way, and the way these repositories are going to work
