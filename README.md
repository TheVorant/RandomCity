# Random City Generator

## Overview

This project implements a visually dynamic Random City Generator using custom graphics routines. The program simulates a cityscape with buildings, houses, foliage, and environmental elements like clouds, stars, and day/night cycles. It utilizes a custom graphics library for rendering and employs recursive and procedural generation techniques to create varied and unique scenes every time it is executed.

## Features

### Cityscape Elements
- **Buildings**: Skyscrapers and houses with varied heights, widths, and architectural features like windows and doors.
- **Foliage**: Randomly placed trees and flowers with dynamic colors and sizes.
- **Environmental Effects**:
  - Day, night, and dawn settings.
  - Stars in the night sky.
  - Clouds during the day.
  - Sun or moon based on the time of day.

### Dynamic Graphics
- **Color Randomization**: Creates unique and vibrant visuals for buildings, foliage, and sky elements.
- **Recursive Drawing**: Efficiently generates repeating patterns for windows, stars, and other details.
- **Smooth Transitions**: Includes coloring and positioning adjustments for visuals.

## File Structure

### Key Files

- **`RandomCity.cpp`**: Main program file that generates the cityscape.
- **`library.h`**: Custom graphics library providing utilities for window management, drawing shapes, setting colors, and other graphical operations.
- **`sample.pdf`**: Contains expected output samples of the generated cityscapes.

## Implementation Details

### Functions in `RandomCity.cpp`

#### City Components
- **`buildings()`**: Generates skyscrapers and houses with varied dimensions and architectural features.
- **`folliage()`**: Places trees and flowers randomly with different heights and colors.
- **`window_maker()`**: Recursively adds windows to skyscrapers.
- **`window_maker_H()`**: Specialized window placement for houses.

#### Environmental Effects
- **`day_night_dawn_action()`**: Sets the background and elements (e.g., sun, moon, stars) based on the time of day.
- **`clouds()`**: Places fluffy clouds in the sky during the day.
- **`draw_stars()`**: Adds stars to the night sky.
- **`rays()`**: Draws sun rays with realistic gradients.

### Utility Functions
- **Randomization**: Uses `random_in_range()` to add variability in positions, dimensions, and colors.
- **Recursive Patterns**: Functions like `buildings()` and `folliage()` leverage recursion to efficiently generate city elements.

## Setup and Execution

1. **Compile the Program**:
   ```bash
   g++ -o RandomCity RandomCity.cpp
   ```

2. **Run the Program**:
   ```bash
   ./RandomCity
   ```

The program opens a 600x500 graphical window and renders a randomly generated cityscape.

## Example Output

- **Day Scene**: A bright background with clouds, trees, and colorful buildings.
- **Night Scene**: A dark sky with stars and a moon casting a soft glow on the city.
- **Dawn Scene**: A warm gradient sky with the sun rising and long shadows across the city.

## Contributions

Contributions are welcome! To contribute:

1. Fork the repository.
2. Create a new branch:
   ```bash
   git checkout -b feature-branch
   ```
3. Commit changes:
   ```bash
   git commit -m "Add new feature"
   ```
4. Push to the branch:
   ```bash
   git push origin feature-branch
   ```
5. Create a pull request.


---

Explore the generator, suggest improvements, or create new features. Happy coding!

