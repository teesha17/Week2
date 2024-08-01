#include <bits/stdc++.h>

using namespace std;

string toLowerCase(const string& str) {
	string lowerStr = str;
	transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
	return lowerStr;
}

// Function to remove punctuation from a string
string removePunctuation(const string& str) {
	string result;
	for (char ch : str) {
    	if (!ispunct(ch)) {
        	result += ch;
    	}
	}
	return result;
}

int main() {
	string paragraph;

	// Input the paragraph from the user
	cout << "Enter a paragraph: ";
	getline(cin, paragraph);

	// Use an unordered_map to count word frequencies
	unordered_map<string, int> wordCount;

	// Process the paragraph
	stringstream ss(paragraph);
	string word;

	while (ss >> word) {
    	word = removePunctuation(word); // Remove punctuation
    	word = toLowerCase(word); // Convert to lowercase
    	if (!word.empty()) {
        	++wordCount[word]; // Increment word count
    	}
	}

	// Print the frequencies
	cout << "Word frequencies:" << endl;
	for (const auto& pair : wordCount) {
    	cout << pair.first << ": " << pair.second << endl;
	}

	return 0;
}
