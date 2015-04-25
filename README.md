MusicXML Class Library
======================

Author: Matthew James Briggs

Datestamp: April 25, 2015

### Introduction
This project is a static C++ class library which represents MusicXML in object-oriented classes.  The scope of the project is intended to be limited to the representation of and manipulation of MusicXML data through an interface that is very closely aligned with the musicxml.xsd document (and thus the syntax for using this library is as verbose as the MusicXML language itself).

One of the goals of this project is to strongly-type all aspects of the MusicXML XSD specification such that **any program that compiles will represent a valid MusicXML document.**  Currently this principal is not extended to the proper use of XSID and XSIDREF identifiers, but I hope to find a way to do so in the future as this is a major violation of the stated purpose of the library.

Additionally it should be noted that the MusicXML specification allows for the creation of valid MusicXML documents which are nonetheless musical gibberish.  Again, future higher level libraries are expected to be implemented on top of this class library to deal with the higher-level domain of sensible music notation descriptions.

### Compiling
The project uses C++11 semantics, does not use any third-party libraries and does not employ any platform-specific commands.  It has been built with the following compilers successfully.
* Xcode 5.1.1 (5B1008) Apple LLVM version 5.1 (clang-503.0.40) (based on LLVM 3.4svn)
* Visual Studio 2013 (note use /bigobj flag due to the large size of the Elements.h/cpp translation unit)
* GCC Version 4.8

Currently the project will remain as an Xcode workspace as I have not yet had the time to explore using CMake to make the repository IDE-agnostic.  It is a simple build though and shouldn't be hard to bring it into another IDE.  The MxTest project must link to libMx.a (or Mx.lib) and must be able to find the headers from the Mx library.

### Usage
If you are not familiar with MusicXML then it will be difficult to use this library.  However one of the aims of this library is to make proper MusicXML construction "discoverable" in the sense that IDE code-completion will show you what can and cannot be done.

##### Partwise vs. Timewise
There are two types of MusicXML documents, "partwise" and "timewise".  A partwise document consists of a set of parts which contain measures.  A timewise document consists of a set of measures which contain parts.  Partwise is used more often by MusicXML applications and I will only use Partwise in this tutorial.

##### Elements
Each XML element is represented by a class which derives from ElementInterface.  Elements are created and used by way of shared pointers.  Each element comes with a set of using/typedef statements as well as a convenience function for making the shared pointers.

##### Shared Pointers
Many elements contain other elements.  When they do, these data members will also be shared pointers.  Get/set functions will allow access to the data members by accepting and returning shared pointers.  If you attempt to set a data member to a nullptr, the setter function will silently do nothing.  Thus we can be resonably assured our objects will never return nullptr.

For example

```
std::shared_ptr<Foo> foo; /* nullptr! */
bar->setFoo( foo ); /* no-op because you passed a nullptr */
auto x = bar->getFoo(); /* guaranteed not to bee null */
x->somefuntion(); /* OK to dereference without checking for nullptr */
```

In many 