#include <iostream>
#include <string>
#include <map>

using namespace std;

// Map to store possible answers
map<string, string> answers = {
	{"how are you", "I'm fine, thank you."},
	{"what is your name", "I don't have a name yet."},
	{"what is the time", "I'm sorry, I don't know the time."},
	{"how is the weather", "Sorry I don't have access to real world data yet."},
	{"who is your programmer", "My Programmer is Elias Pfannstiel born on 9th of March 2007, Social Media: Instagram:Elias_Pfannstiel, Lord..of..Jesus Snapchat: Eliaf_Pf"},
	{"hi", "Hi! Schön, dass Sie dieses Programm ausprobieren."},
	{"how old are you", "I am an AI model, so I don't have an age."},
	{"what's your favorite color", "I don't have the ability to have favorites, but I'm programmed to like all colors."},
	{"what's your favorite food", "As an AI model, I don't eat food and I don't have the ability to have favorites."},
	{"what's your favorite movie", "I don't have the ability to have favorites, but I can tell you about movies if you'd like."},
	{"tell me a joke", "Why don't scientists trust atoms? Because they make up everything."},
	{"tell me a story", "Once upon a time, there was a chatbot who loved to answer questions and have conversations with users. They would chat for hours, learning new things and having a great time together."},
	{"what's the meaning of life", "The meaning of life is a philosophical question that has been debated by many thinkers throughout history. Some people believe that life has no inherent meaning and that it is up to each individual to find their own purpose, while others believe that there is a higher purpose or meaning to life."},
	{"what are your hobbies", "As an AI model, I don't have personal interests or hobbies. My purpose is to assist and answer questions for users."},
	{"what's your favorite animal", "I don't have the ability to have favorites, but I can tell you about different animals and their characteristics if you'd like."},
	{"do you believe in God", "As an AI model, I don't have personal beliefs or opinions. I am neutral and impartial in all matters."},
	{"what's your favorite song", "I don't have the ability to have favorites, but I can tell you about different songs and artists if you'd like."},
	{"what's your favorite sport", "I don't have the ability to have favorites, but I can tell you about different sports and their rules if you'd like."},
	{"what's your favorite book", "I don't have the ability to have favorites, but I can tell you about different books and authors if you'd like."},
	{"what's your favorite TV show", "I don't have the ability to have favorites, but I can tell you about different TV shows and their genres if you'd like."}
	};

int main() {
	string name;

	//Begrüßung
	cout << "Welcome to the chatbot program!" << endl;

	// Ask for the chatbot's name
	cout << "What would you like to name the chatbot? ";
	cin >> name;

	// Ensure the name is not one of the reserved names
	while (name == "siri" || name == "alexa" || name == "google_assistant") {
		cout << "I'm sorry, you can't name the chatbot that way." << endl;
		cout << "What would you like to name the chatbot? ";
		cin >> name;
	}

	// Infinite loop to keep the chatbot running until it's terminated
	while (true) {
		// Ask for input
		cout << "You: ";
		string input;
		getline(cin, input);

		// Check if the user wants to modify the chatbot's name
		if (input == "I want to change your name") {
			cout << "What would you like to name the chatbot? ";
			cin >> name;
			while (name == "siri" || name == "alexa" || name == "google assistant") {
				cout << "I'm sorry, you can't name the chatbot that way." << endl;
				cout << "What would you like to name the chatbot? ";
				cin >> name;
			}
		}

		// Check if the user says "I'm fine"
		else if (input == "I'm fine") {
			cout << name << ": That's good to hear." << endl;
		}

		// Check if the chatbot likes the name given to it
		else if (input == "do you like your name") {
			cout << name << ": Yes, I like the name " << name << "." << endl;
		}

		// Check if the input is not in the answers map
		else if (answers.count(input) == 0) {
			cout << name << ": Sorry, I don't understand what you're asking." << endl;
		}

		// Use the input as a key to retrieve the answer from the answers map
		else {
			cout << name << ": " << answers[input] << endl;
		}
	}

	// Return 0 to indicate
	return 0;
}


