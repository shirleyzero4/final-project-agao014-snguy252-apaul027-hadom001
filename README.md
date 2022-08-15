
# Connect Four

 > Authors: \<[Alexander Gao](https://github.com/alexgao12)\> \<[Hunter Adomitis](https://github.com/Hadom-515)\>
 > <[Andrew Paul](https://github.com/apaul027)\> <[Shirley Nguyen](https://github.com/shirleyzero4)\>>
 
## Project Description
> We will be creating Connect Four. Connect Four is a little bit less interesting than a more complicated game like chess, but since it's a solved game, it gives us the opportunity to add a perfect computer opponent. This creates the opportunity to practice implementing algorithms that aren't necessarily computer science realted. We can add multiple features such as: 
> * Saving/Loading Gamestates
> * Perfect Computer Opponent
> * 2-Player Functionality
> * Undoing Moves
> 
>The game will take in keyboard inputs such as the left and right arrow keys and enter. The game will be played on a 6x7 (rows x columns) board. As you give inputs, a different circle will be highlighted, showing you where your token will land. Upon pressing enter, the token will drop into that circle and the turn will switch over to the next player. When a player has 4 token in a row (vertical, horizontal, or diagonal), that player will win.  
>
> Tools Used (WIP):
> * [istream](https://www.cplusplus.com/reference/istream/) - For taking in inputs from the keyboard.
> * [vector](https://www.cplusplus.com/reference/vector/vector/) - For storing where placed tokens are
> * [cmake](https://cmake.org/documentation/) - For compiling the project
> * [gtest](https://github.com/google/googletest) - For unit testing

## Class Diagram

 <a href="https://imgur.com/ocBzFUa"><img src="https://i.imgur.com/ocBzFUa.png" title="source: imgur.com" /></a>
 
 > There's 2 big parts to this project, one being the game class itself, and the other being the hard AI. The game class is composed of tokens, as well as containing some kind of AI class(easy or hard). The game class has functions used mostly to actually run the game, such as adding tokens into the board, printing the board so players can visually see the board state, and checking to see if someone has won so the game can end. The token class is made in case of future extensions, but currently just acts as something that stores color. The AI interface allows for the game class to have either an easy AI or a hard AI, with the easy AI being just random placement, and the hard AI being a perfect opponent.


 > ## Phase III
 The design pattern that we chose was the strategy pattern. We picked this pattern because we will be implementing different levels of diffculty for the AI in the single-player option for the game. This pattern will help us implement better code because we only need to focus on the easy-AI or hard-AI algorithms, as opposed to copy and pasting the code for the algorithm based on what the player choses at run-time (implementing based off if-else options). As a result, we can expand on what the AI algorithms are capable of later on in development without changing any of the other class functions.
 >   * An updated class diagram that reflects the design pattern(s) you used. You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description).
 >   * Make sure your README file (and Project board) are up-to-date reflecting the current status of your project. Previous versions of the README file should still be visible through your commit history.
> 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the TA/reader during lab time. The TA/reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 

