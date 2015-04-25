MusicXML Class Library
======================

Author: Matthew James Briggs

Datestamp: April 25, 2015

### Introduction
This project is a static C++ class library which represents MusicXML in object-oriented classes.  The scope of the project is intended to be limited to the representation of and manipulation of MusicXML data through an interface that is very closely aligned with the musicxml.xsd document (and thus the syntax for using this library is as verbose as the MusicXML language itself).

One of the goals of this project is to strongly-type all aspects of the MusicXML XSD specification such that **any program that compiles will represent a valid MusicXML document.**  Currently this principal is not extended to the proper use of XSID and XSIDREF identifiers, but I hope to find a way to do so in the future as this is a major violation of the stated purpose of the library.

Additionally it should be noted that the MusicXML specification allows for the creation of valid MusicXML documents which are nonetheless musical gibberish.  Again, future higher level libraries are expected to be implemented on top of this class library to deal with the higher-level domain of sensible music notation descriptions.

### Compiling
The project uses C++11 semantics and has been compiled sucessfully with
* Xcode 5.1.1 (5B1008) Apple LLVM version 5.1 (clang-503.0.40) (based on LLVM 3.4svn)
* Visual Studio 2013 (note use /bigobj flag due to the large size of the Elements.h/cpp translation unit)
* GCC Version 4.8