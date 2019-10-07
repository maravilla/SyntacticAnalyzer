# include "analyzer.h"

Analyzer::Analyzer()
{
    std::cout << "Write the expression to be evaluated: " << std::endl;
    std::cin >> lh;

}
Analyzer::Analyzer(const Analyzer& other)
{

}

Analyzer::Analyzer(Analyzer&& other) noexcept
{

}

Analyzer::~Analyzer()
{

}

void Analyzer::match(char t)
{
    if((int)lh == t){
        std::cin >> lh;
    }
    else {
        throw AnalyzerException("Syntax Error");
    }
}

void Analyzer::expr()
{
    L();
    match(110);

}

int Analyzer::L()
{

    int val = E();
    std::cout << std::endl << "The result is: " << val;
    return val;
}

int Analyzer::E()
{
    int d = D();
    int e = Eprime();
    return d-e;
}

int Analyzer::Eprime()
{       ///-

        if((int)lh == 45){
            std::cout << lh;
            match(45);


            int d = D();
            int e = Eprime();

            int val = d - e;
            return val;
        }
        else{
           return 0;
        }

}
int Analyzer::D()
{
    int s = S();
    int d = Dprime();
    return s+d;
}

int Analyzer::Dprime()
{       ///+

        if((int)lh == 43){
            std::cout << lh;
            match(43);


            int s = S();
            int d = Dprime();

            int val = s + d;
            return val;
        }
        else{
           return 0;
        }



}
int Analyzer::S()
{
    int t = T();
    int s = Sprime();

    return t/s;

}

int Analyzer::Sprime()
{       /// /
        if((int)lh == 47){
        std::cout << lh;
        match(47);
        int t = T();
        int s = Sprime();

//        std::cout <<" S PRIME FUNCTION CHOLO DEBUG  " << std::endl;
//
//        std::cout << t << "<- normal t" << std::endl;
//        std::cout << toDigit(t) << "<- todigit t" << std::endl;
//        std::cout << s << "<- normal s" << std::endl;
//        std::cout << toDigit(s) << "<- todigit s" << std::endl;
        return t/s;
        }
        else{
            return 1;
        }
}
int Analyzer::T()
{
    int f = F();
    int t = Tprime();

    return toDigit(f)*t;

}

int Analyzer::Tprime()
{       ///*
        if((int)lh == 42){
        std::cout << lh;
        match(42);
        int f = F();
        int t = Tprime();

//        std::cout <<" T PRIME FUNCTION CHOLO DEBUG " << std::endl;
//
//        std::cout << f << "<- normal f" << std::endl;
//        std::cout << toDigit(f) << "<- todigit f" << std::endl;
//        std::cout << t << "<- normal t" << std::endl;
//        std::cout << toDigit(t) << "<- todigit t" << std::endl;
        return toDigit(f)*t;
        }
        else{
            return 1;
        }
}

int Analyzer::F()
{
   std::cout << lh;
   int f = lh;
   std::cin >> lh;
   return f;

}


