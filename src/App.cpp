#include <App.hpp>

App::App(const char *windowName, sf::Vector2u resolution)
    : name{windowName}, resolution{resolution} {};

bool App::start() {
  sf::RenderWindow window(sf::VideoMode(resolution), (std::string)name);

  // // Load a sprite to display
  // // const sf::Texture texture("cute_image.jpg");
  // // sf::Sprite sprite(texture);

  // // Create a graphical text to display
  // // const sf::Font font("Arial.ttf");
  // // sf::Text text(font, "Hello SFML", 50);

  // // Load a music to play
  // // sf::Music music("nice_music.flac");

  // // Play the music
  // // music.play();
  // sf::CircleShape circle(100);           // Radius of 100
  // circle.setFillColor(sf::Color::Green); // Set the fill color to green
  // circle.setPosition({350, 250});

  // // Start the game loop
  while (window.isOpen()) {
    //   // Process events
    while (const std::optional event = window.pollEvent()) {
      //     // Close window: exit
      if (event->is<sf::Event::Closed>())
        window.close();
    }

    //   // Clear screen
    window.clear();
    //   window.draw(circle);

    //   // Draw the sprite
    //   // window.draw(sprite);

    //   // Draw the string
    //   // window.draw(text);

    //   // Update the window
    window.display();
  }

  return true;
}

void init() {
  App app("SFML wind", {1920, 1080});
  app.start();
}