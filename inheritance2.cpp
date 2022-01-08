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
        virtual bool check_answer(string user_response);
        virtual void display() const;
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
        virtual void display() const;
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

    const int number_of_quizzes = 2;
    Question* quiz[number_of_quizzes];
    quiz[0] = new Question;
    quiz[0]->set_text("Who is the inventor of C++");
    quiz[0]->set_answer("Bjarne Stroustrup");

    ChoiceQuestion* cq_ptr = new ChoiceQuestion;
    cq_ptr->set_text("Where is the birthplace of C++");
    cq_ptr->add_choice("Australia", false);
    cq_ptr->add_choice("USA", false);
    cq_ptr->add_choice("Denmark", true);
    cq_ptr->add_choice("Korea", false);
    quiz[1] = cq_ptr;

    for (int i = 0; i < number_of_quizzes; i++){
        quiz[i] -> display();
        cout << "Your answer: "; 
        getline(cin, response);
        cout << (*quiz[i]).check_answer(response) << endl;   
    }

    return 0;
}
