Chess Trainer Project Vision:

The vision for this project is to have an interactive chess notebook.

The idea is that one can create study guides to help learn openings, look at
games, and create a personal game database.

To learn openings, one will create an opening study guide. From here they can
input a sequence of moves and explanations as well as the names of the
variations. From there one can study the opening by being given a sequence of
moves and having to guess the name or the next move from both the black and
white perspective. Over time as the number of opening studies rises you can
either study all openings at once, where practice will randomly generate
questions from all opening content, or you can focus on just selected openings.

The next feature will be an analysis helper. This will allow one to upload a
game and step through it adding commentary on a move by move basis and also
being able to add variations and sidelines with comments as well. 

The next feature will be a games database that will have analytics of ones own
games. It will be able to mark what openings they play as what color, and what
their win rates and common responses are for any given position. One thing that
may be interesting is being able to see the analytics on another persons games,
so one can create a personalized study plan focusing on either thier own
weaknesses and learn to play like another individual, or to be able to study
the other players weaknesses.

I would like the app to be a frontend to chess.com and lichess, and be able to
play games on either platform.

I would also like to add the ability to add puzzles to the trainer, so if there
is a set of puzzles that you really like, or puzzles from a book, you can add
them to the trainer, and it can help track what puzzles you struggle with, what
puzzles you are good at, and have it reccomend puzzles to you that will
encourage the most growth. Perhapse difficult puzzles get presented to you at a
higher frequency than easier puzzles.

-------------------------------------------------------------------------------

Current State: 30/12/23

The project is just beginning, and I have only the ideas in my head.

This project is actually both for personal use and to practice the skills
needed to create a useful devops tool for work. The idea is to suprise my boss
and the other devs with an amazing tol for composing and setting up our
software projects which is really cumbersome and tedious at the time being.

Keeping the above in mind I want the structure of the project to be a python
project that utilizes bash to do file management and scripting tasks. Then
there will be a tkinter frontend that will help tie things together and make it
usable. But one of the goals of this project is support commandline usage so it
can be incorporated in other projects and able to be controlled through scripts
for automaiton.

I think it is important to build commandline first applications because it
makes it easy to reuse and incorporate parts of your software in new
applications without having to rewrite code - just reuse features and
sub-programs.

-------------------------------------------------------------------------------
