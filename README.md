lexicon
=======

C++ binding for MusicXML.  This is a work in progress.  Initial commit coming before January 2015 (hopefully).
Right now this is a *big mess*.  I can barely make sense of it myself.  Check back later!

#### Current Status:
All elements that are "simple" in nature have been implemented.  This includes those elements that have either a "simpleContent" definition or that simply reference a simpleType (or a built-in xsd type such as xs:string).

#### Next Steps:
Start working on the building blocks of the more complex elements by building classes that represent sequences, groups and choices.