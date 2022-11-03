#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

int main()
{
	// Create the main window
	sf::ContextSettings settings;
	settings.antialiasingLevel = 8;
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window", sf::Style::Default, settings);

	// Create shapes
	sf::RectangleShape rectangle(sf::Vector2f(250.f, 150.f));
	rectangle.setFillColor(sf::Color::Blue);
	rectangle.setPosition(200.f, 200.f);

	sf::CircleShape circle(85.f);
	circle.setFillColor(sf::Color::Red);
	circle.setPosition(400.f, 250.f);

	// Start the game loop
	while (window.isOpen())
	{
		// Process events
		sf::Event event;
		while (window.pollEvent(event))
		{
			// Close window: exit
			if (event.type == sf::Event::Closed)
				window.close();
		}

		// Clear screen
		window.clear();

		// Draw the shapes
		window.draw(rectangle);
		window.draw(circle);

		// Update the window
		window.display();
	}

	return EXIT_SUCCESS;
}
