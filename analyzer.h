/*
*   github.com/maravilla
*   8/9/19
*/

#ifndef ANALYZER_H_INCLUDED
#define ANALYZER_H_INCLUDED
#define toDigit(c) (c-'0')

#include <iostream>
#include <exception>

class AnalyzerException : public std::exception {

    private:
        std::string msg;
    public:
        explicit AnalyzerException(const char* message): msg(message){ }

        explicit AnalyzerException(const std::string& message) : msg(message) { }

        virtual ~AnalyzerException() throw() { }

        virtual const char* what() const throw () {
        return msg.c_str();
        }
};

class Analyzer{
    public:

        char lh;

        //Default constructor
        Analyzer();
        //Copy constructor
        Analyzer(const Analyzer& other);
        //Move constructor
        Analyzer(Analyzer&& other) noexcept;
        //Destructor
        ~Analyzer() noexcept; // explicitly specified destructors should be annotated noexcept as best-practice


        void match(char t);
        void expr();
        int L();
        int E();
        int Eprime();
        int D();
        int Dprime();
        int S();
        int Sprime();
        int T();
        int Tprime();
        int F();




};

#endif // ANALYZER_H_INCLUDED
