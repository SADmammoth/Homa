#pragma once


#include <string>
#include <exception>
using namespace std;

class Exception: public exception{
private:
    const char* function_name;
    string output;
const char* message;

    void CreateOutput(){
        output = "ERROR in function \"";
        output += function_name;
        output += "\": ";
        output += message;
    }

public:
    Exception(const char* message, const char* function_name) : exception (), function_name(function_name){
    }
    const char* GetFuncName()const{
        return function_name;
    }
    virtual const char* what(){
        CreateOutput();
        return output.c_str();
    }
};

class RepeatException: public Exception{
public:
    RepeatException(const char* what, const char* function_name):Exception(what, function_name){}
};

class BadArgument : public Exception{
private:
    double arg;
public:
    BadArgument(const char* what, const char* function_name, double argument) : Exception(what, function_name), arg(argument){}
    double GetArg()const { return arg; }
    virtual const char* what_arg()const{
        return to_string(arg).c_str();
    }
};

class NotRightDate : public BadArgument{
    int month;
    int year;
public:
    NotRightDate(const char* what, const char* function_name, int day, int month, int year) : BadArgument(what, function_name, day), month(month), year(year){}
    const char* what_arg()const {
        string s;
        s = to_string(GetArg());
        s += ".";
        s += to_string(month);
        s += ".";
        s += to_string(year);
        return s.c_str();
    }
};


class NotRightIndex : public BadArgument{
public:
    NotRightIndex(const char* function_name, int current_index_value, const char* what_arg = "bad argument") :BadArgument(what_arg, function_name, current_index_value){}

};

class BadAlloc :public Exception{
public:
    BadAlloc(const char* function_name, const char* what_arg = "bad allocation") : Exception(what_arg, function_name){}
};

class NotRightSize : public BadArgument{
public:
    NotRightSize(const char* function_name, int current_size_value, const char* what_arg = "not right size") :BadArgument(what_arg, function_name, current_size_value){}
};

class NotRightRange : public BadArgument{
private:
    int current_to_value;
public:
    NotRightRange(const char* function_name, int current_from_value, int current_to_value, const char* what_arg = "not right range ")
        :BadArgument(what_arg, function_name, current_from_value), current_to_value(current_to_value){}
    const char* what_arg()const{
        string range;
        range = "(";
        range += to_string(GetArg());

        range += ")-(";
        range += to_string(current_to_value);
        range += ")";
        return range.c_str();
    }

};

class NotSorted : public Exception{
public:
    NotSorted(const char* function_name, const char* what = "not sorted") :Exception(what, function_name){}
};

class NullPointer : public Exception{
public:
    NullPointer(const char* function_name, const char* what = "NULL pointer") :Exception(what, function_name){}
};

class UnexpectedType: public Exception{
public:
    UnexpectedType(const char* function_name, string type_name):Exception((type_name += "- type unexpected").c_str(), function_name){}
};
