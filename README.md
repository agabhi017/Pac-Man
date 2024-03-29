# Pac-Man

A clone of the classic Pac-Man game written using C++. SFML graphics library is used for graphics rendering and CMAKE is used for building the project. 

#### Requirements:
* [SFML](https://www.sfml-dev.org/)
* CMAKE
* Compatible compiler for SFML (check download instructions)

#### Steps to build the project:
* Add SFML to the environment variables or to the project directory
* If using VS Code, select the compatible build toolkit (for example, mingw for mingw builds)
* Build the project and execute "PAC-MAN.exe"

#### Steps to modify arena or map:
* The game currently has 5 different levels
* The following notation is used for constructing the map/arena:
  * -1  ==> empty space
  * 1   ==> walls
  * 0   ==> normal pill
  * 2   ==> large pill
* Navigate to assets/maps and open the required txt file. Update the map as per the above convention and save the changes.

#### Steps to add a new arena/map:
Although it is possible to add a new arena in the current build, the process is not trivial. A simpler solution is WIP.

#### Screenshots from the game:
<p>
<img src="https://github.com/agabhi017/Pac-Man/blob/main/assets/screenshots/home.png" width="400" height="300">
<img src="https://github.com/agabhi017/Pac-Man/blob/main/assets/screenshots/level_1_home.png" width="400" height="300">
 </p>
 <p>
<img src="https://github.com/agabhi017/Pac-Man/blob/main/assets/screenshots/level_1_1.png" width="400" height="300">
<img src="https://github.com/agabhi017/Pac-Man/blob/main/assets/screenshots/level_1_2.png" width="400" height="300">
 </p> 
<p>
<img src="https://github.com/agabhi017/Pac-Man/blob/main/assets/screenshots/level_1_3.png" width="400" height="300">
<img src="https://github.com/agabhi017/Pac-Man/blob/main/assets/screenshots/level_2_home.png" width="400" height="300">
 </p>  
<p>
<img src="https://github.com/agabhi017/Pac-Man/blob/main/assets/screenshots/level_2_1.png" width="400" height="300">
<img src="https://github.com/agabhi017/Pac-Man/blob/main/assets/screenshots/level_3_home.png" width="400" height="300">
  </p>
<img src="https://github.com/agabhi017/Pac-Man/blob/main/assets/screenshots/game_over.png" width="400" height="300">

