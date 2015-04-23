#ifndef TEST_H
#define TEST_H

// Test is a base class for all tests.  It provides a command interface for
// running tests (run) as well as a data member for recording the name of
// the test.
//
// Tests are constructed using the TEST macro.  TEST creates a subclass of
// Test and static instance of that subclass.  If you look at the constructor
// for the Test class, you'll notice that it registers the created object
// with a global TestRegistry.  These features combine to make test creation
// particularly easy.

#include <cmath>
#include <vector>
#include <sstream>
#include <string>

class TestResult;

class Test
{
public:
    Test (const std::string& testName,
          std::string fileName,
          long lineNumber);

	virtual ~Test();

    const std::string& getFileName() const;
    const long& getLineNumber() const;
    const std::string& getName() const;
    void run (TestResult& result);
    virtual void runTest (TestResult& result) = 0;

private:
    std::string     myFileName;
    long            myLineNumber;
    std::string     myName;
};

#define TEST(name,classUnderTest)\
    class classUnderTest##name##Test : public Test\
    { \
        public: \
            classUnderTest##name##Test () \
            : \
                Test ("TEST(" #name ", " #classUnderTest ")", \
                      __FILE__, __LINE__) {} \
            void runTest (TestResult& rEsUlT_); \
    } classUnderTest##name##Instance; \
    void classUnderTest##name##Test::runTest (TestResult& rEsUlT_)


// Here is a collection of testing macros that can be used in the
// bodies of tests.  CHECK tests a boolean expression and records
// a failure if the expression evaluates to false.  CHECK_LONGS_EQUAL
// and CHECK_DOUBLES_EQUAL compare longs and doubles respectively.
//
// To make this an industrial strength test harness, you should
// add equals macros for various low level types as you develop them.
// If, for instance, you have a daterange class, the ability to compare
// them directly and print out their values in the test output is
// invaluable.

#define CHECK(condition) \
{\
    if (!(condition)) { \
        rEsUlT_.addFailure (Failure (#condition, __FILE__, __LINE__)); \
        return; \
    }\
}

#define CHECK_LONGS_EQUAL(expected,actual)\
{\
    long _expected = (expected);\
    long _actual = (actual);\
    if (_expected != _actual) {\
        std::ostringstream message; \
        message << "expected '" << (_expected) << "' but was '" << (_actual) << "'"; \
        rEsUlT_.addFailure (Failure (message.str(), __FILE__, __LINE__));\
        return; \
    }\
}

#define CHECK_DOUBLES_EQUAL(expected,actual,threshold)\
{\
    double _expected = (expected);\
    double _actual = (actual);\
    if (fabs ((_expected)-(_actual)) > (threshold)) {\
        std::ostringstream message; \
        message << "expected '" << (_expected) << "' but was '" << (_actual) << "'"; \
        rEsUlT_.addFailure (Failure (message.str(), __FILE__, __LINE__));\
        return; \
    }\
}

/* Matthew James Briggs added this 06/02/2014 */
#define CHECK_LONG_DOUBLES_EQUAL(expected,actual,threshold)\
{\
    long double _expected = (expected);\
    long double _actual = (actual);\
    if (fabs ((_expected)-(_actual)) > (threshold)) {\
        std::ostringstream message; \
        message << "expected '" << (_expected) << "' but was '" << (_actual) << "'"; \
        rEsUlT_.addFailure (Failure (message.str(), __FILE__, __LINE__));\
        return; \
    }\
}
        
#define CHECK_FAIL(text) \
{\
    rEsUlT_.addFailure (Failure ((text), __FILE__, __LINE__)); \
    return; \
}

// The following check for equality.
//
// The things being compared must have an ostream or wostream inserters.
//
// BEWARE: The arguments are evaluated more than once!
//         If this is a problem then use CHECK instead.


// Use this when the things being compared have a wostream inserter.

#define CHECK_WEQUAL(expected, actual)\
{\
    if (! ((expected) == (actual))) {\
        std::wostringstream message; \
        message << L"expected '" << (expected) << L"' but was '" << (actual) << L"'"; \
        rEsUlT_.addFailure (Failure (message.str(), __FILE__, __LINE__));\
        return; \
    }\
}

// Use this when the things being compared have an ostream inserter.

#define CHECK_EQUAL(expected, actual)\
{\
    if (! ((expected) == (actual))) {\
        std::ostringstream message; \
        message << "expected '" << (expected) << "' but was '" << (actual) << "'"; \
        rEsUlT_.addFailure (Failure (message.str(), __FILE__, __LINE__));\
        return; \
    }\
}

#endif
