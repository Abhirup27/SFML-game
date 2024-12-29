#include "SFML/System/Vector2.hpp"
#include <Renderer.hpp>
#include <ResourceManager.hpp>

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <string_view>

void init();

class App {
  std::string_view name;
  // struct {
  //   unsigned int x, y;
  // } resolution;
  sf::Vector2u resolution;

public:
  // App() : name("SFML window") = default;
  App() = default;
  App(const char *windowName, sf::Vector2u resolution);
  bool start();
};