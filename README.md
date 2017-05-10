

##  C++ CONSOLE APPLICATION : HangMan.0  Project Overview

### Mystery Words
* **Easy Level**
  - LONDON
  - SYDNEY
  - TOKYO
  - PARIS
  - PERTH


* **Hard Level**
  - KATHMANDU
  - CHRISTCHURCH
  - HAMILTONISLAND
  - COPENHAGEN
  - LUXEMBOURGH


### Over all purpose of each *cpp files*

* difficulty_level.cpp
  - To get player choice for difficulty level


* global.cpp
  - all global variables used in game


* guess.cpp(class)
  - to get player guess from only A to Z
  - to store all player guess
  - to count all player guess
  - Display message if same guess is made
  - reset set count all player guess when player choose to replay


* main.cpp
  - call function get random number
  - call function to display welcome screen
  - call function to play game


* processing.cpp
  - check guess if matches with current mystrey word's letter
  - display misses letter
  - option to replay  or exit


* stick_figure.cpp
  - prints different stages stick figure


*  welcome_screen.cpp
   - print welcome screen
   - print instruction and difficulty level option


* words.cpp
  - select random word from array according to difficulty level choosed by player
  - display and update mystery word as per player guess
  - reveal mystry word when all chances are finished

### Demonastrations:

  * #### Class
  * #### Memory Management  

  * #### Memory Management
    **Application:**  &nbsp;&nbsp; To manage memory of array in guess.cpp to store user guess.

    **Reason:** &nbsp;&nbsp; Dynamic memory is assign to array ("m_allGuesses") because  Length of array cannot be defined during complie time as it's depends on how many times player has entered guess letters.

    **Key Words:** &nbsp;&nbsp; "new", "delete"

    **Location:** &nbsp;&nbsp; guess.cpp file , m_allGuess variable in consturctor called Guess()

### Game flow Screen shots
  ![Alt](/misc/screen_shots/welcomeScreen.png "Welcome Screen")

  ![Alt](/misc/screen_shots/mainScreen.png "Main screen")

  ![Alt](/misc/screen_shots/resultScreen.png "welcome Screen")
