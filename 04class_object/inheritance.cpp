#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std; 

class Question{
    public: 
        Question();
        void set_text(string question_text);
        void set_answer(string correct_answer);
        bool check_answer(string user_response);
        void display() const;
    private: 
        string text; 
        string answer;
};

Question::Question(){}

void Question::set_text(string question_text){
    text = question_text;
}

void Question::set_answer(string correct_answer){
    answer = correct_answer;
}

bool Question::check_answer(string user_response){
    return user_response == answer;
}

void Question::display() const {
    cout << text << endl;
}


class ChoiceQuestion : public Question{
    public: 
        ChoiceQuestion(); 
        void add_choice(string choice, bool correct);
        void display() const;
    private: 
        vector<string> choices;
};


ChoiceQuestion::ChoiceQuestion(){}

void ChoiceQuestion::add_choice(string choice, bool correct){
    choices.push_back(choice);
    if (correct){
        ostringstream stream; 
        stream << choices.size();
        string num_str = stream.str();
        set_answer(num_str);
    }
}

void ChoiceQuestion::display() const {
    Question::display();
    for (int i = 0; i < choices.size(); i++){
        cout << i+1 << ": " << choices[i] << endl;
    }
}

int main(){
    string response;
    cout << boolalpha;

    Question q1; 
    q1.set_text("Who is the inventor of C++");
    q1.set_answer("Bjarne Stroustrup");
    q1.display();
    cout << "Your answer: ";
    getline(cin, response);
    cout << q1.check_answer(response) << endl;

    ChoiceQuestion q2;
    q2.set_text("Where is the birthplace of C++");
    q2.add_choice("Australia", false);
    q2.add_choice("USA", false);
    q2.add_choice("Denmark", true);
    q2.add_choice("Korea", false);

    q2.display();
    cout << "Your answer: "; 
    getline(cin, response);
    cout << q2.check_answer(response) << endl;

    return 0;
}
