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

##### Namespaces
Everything is contained in the *mx* namespace.  Within the *mx* namespace there are three sub namespaces.  These have names a single character in length for typing convenience.  The *t* namespace contains value types (t for types).  These are things like ranged integers, enums, strings, etc.  The *e* namespace contains all of the XML element classes (e for elements).  And the *d* namespace contains a few classes for representing the MusicXML document as a whole (d for document).  There are no name clashes between the three namespaces so it is OK to do this
```
using namespace mx::e;
using namespace mx::d;
using namespace mx::t;
```

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

##### Optional Member Data
Many of the elements in MusicXML are optional.  In these cases there is a bool which indicates whether or not the element is present.  The bool serves as a flag indicating whether or not the optional element will be output when you stream out your MusicXML document.  The bool has no side-effect on the element whos presence/absence it represents.  So for example we may set some data:
```
foo->setName( "David" );
bar->setFoo( foo );
```
But in this example, if Foo is an optional member of Bar, then we must also set HasFoo to *true* or else foo will not be in the XML output.
```
bar->toStream(...); /* Foo is not in the output! */
bar->setHasFoo( true );
bar->toStream(...); /* Now we see our Foo in the output. */
```
Also note that setting HasFoo to *false* does not mean that Foo's value is gone.
```
bar->setHasFoo( false ); /* The XML document no longer has a Foo */
bar->getFoo()->getName() == "Dave"; /* True! The value is still there even though it is not present in the XML document. */
```
##### Optional Member Data with Unbounded Ocurrences

##### Required Member Data with Unbounded Ocurrences

##### Required Member Data with Specific Number of Allowed Ocurrences

##### Handling of xs:choice Specifications
##### Handling of xs:group Specifications
##### Sample Program

### Unit Testing