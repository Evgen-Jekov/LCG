Random Image Generator (Qt)

Description

This project is a simple Qt application that generates a random-colored image using a Linear Congruential Generator (LCG) for pseudo-random number generation. The generated image is displayed in a QLabel widget.

Features

Generates a 500x500 pixel image with randomly colored pixels.

Uses an LCG-based random number generator for color values.

Displays the image using Qt's QLabel.

Scales the image to 600x600 while maintaining aspect ratio.

Can be adapted to fullscreen mode.

Requirements

Qt framework (Qt5 or Qt6)

C++17 or later

Installation

Clone the repository:

git clone https://github.com/Evgen-Jekov/LCG_image.git
cd random-image-qt

Open the project in Qt Creator or compile it manually using qmake and make.

qmake && make

Usage

Run the compiled executable to generate and display a random-colored image.

Code Structure

main.cpp: Contains the main logic for image generation and display.

LCG.h / LCG.cpp: Implements the Linear Congruential Generator for random number generation.

Future Improvements

Allow user-defined image dimensions.

Implement dynamic regeneration of the image.

Optimize random number generation for better performance.

License

This project is licensed under the MIT License.