#pragma once

/**
  * @file       MxSeqSmpNode6156.h
  * @class      lexicon::MxSeqSmpNode6156
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-11 13:05:35
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 6156
  * 
  * @brief This class represents an xs:sequence object from musicxml.xsd.
  * 
  * This class represents an xs:sequence object from musicxml.xsd.
  * 
 **/


namespace lexicon
{
/* MxSeqSmpNode6156 ------------------------------------------------------------------- */

	class MxSeqSmpNode6156 : public MxSeq
	{
	public:

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

		MxSeqSmpNode6156();
		virtual ~MxSeqSmpNode6156();
		MxSeqSmpNode6156( const MxSeqSmpNode6156& other );
		MxSeqSmpNode6156& operator=( const MxSeqSmpNode6156& other );

/* Cancel Functions ------------------------------------------------------------------- */

		/** Tells you whether or not <Cancel> is present. If <Cancel> is required,
		    this will always return 'true'. If <Cancel> is required, no corresponding
		    'setIsCancelPresent' will exist. **/
		bool getIsCancelPresent() const;
		void setIsCancelPresent( const bool& value_in );

		/** Returns a shared pointer handle to the <Cancel> element. Note that
		    if getIsCancelPresent is false, this value will still exist (even though
		    it is not in the xml document) and you should ignore it. **/
		HMxEsCancel getCancel() const;

		/** Sets the internal shared pointer handle for the <Cancel> element. Note
		    that if setIsCancelPresent is false, the internal shared pointer will
		    not be altered and will hold a value that does not exist in xml. **/
		int setCancel( const HMxEsCancel&& value_in );

		/** Returns the minimum number of occurences of the <Cancel> element. 
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getCancelMinOccurs() const;

		/** Returns the maximum number of occurences of the <Cancel> element. Typically
		    the MaxOccurs is specified as either '1' or 'unbounded'.  When the
		    specification says 'unbounded' 'getIsCancelUnbounded' will return 'true'
		    and the return value of 'getCancelMaxOccurs' should be ignored. **/
		int getCancelMaxOccurs() const;

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <Cancel> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getCancelMaxOccurs' should be
		    ignored. **/
		int getIsCancelUnbounded() const;

/* Fifths Functions ------------------------------------------------------------------- */

		/** Tells you whether or not <Fifths> is present. If <Fifths> is required,
		    this will always return 'true'. If <Fifths> is required, no corresponding
		    'setIsFifthsPresent' will exist. **/
		bool getIsFifthsPresent() const;

		/** Returns a shared pointer handle to the <Fifths> element. Note that
		    if getIsFifthsPresent is false, this value will still exist (even though
		    it is not in the xml document) and you should ignore it. **/
		HMxEmFifths getFifths() const;

		/** Sets the internal shared pointer handle for the <Fifths> element.  **/
		int setFifths( const HMxEmFifths&& value_in );

		/** Returns the minimum number of occurences of the <Fifths> element. 
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getFifthsMinOccurs() const;

		/** Returns the maximum number of occurences of the <Fifths> element. Typically
		    the MaxOccurs is specified as either '1' or 'unbounded'.  When the
		    specification says 'unbounded' 'getIsFifthsUnbounded' will return 'true'
		    and the return value of 'getFifthsMaxOccurs' should be ignored. **/
		int getFifthsMaxOccurs() const;

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <Fifths> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getFifthsMaxOccurs' should be
		    ignored. **/
		int getIsFifthsUnbounded() const;

/* Mode Functions --------------------------------------------------------------------- */

		/** Tells you whether or not <Mode> is present. If <Mode> is required,
		    this will always return 'true'. If <Mode> is required, no corresponding
		    'setIsModePresent' will exist. **/
		bool getIsModePresent() const;
		void setIsModePresent( const bool& value_in );

		/** Returns a shared pointer handle to the <Mode> element. Note that if
		    getIsModePresent is false, this value will still exist (even though
		    it is not in the xml document) and you should ignore it. **/
		HMxEmMode getMode() const;

		/** Sets the internal shared pointer handle for the <Mode> element. Note
		    that if setIsModePresent is false, the internal shared pointer will
		    not be altered and will hold a value that does not exist in xml. **/
		int setMode( const HMxEmMode&& value_in );

		/** Returns the minimum number of occurences of the <Mode> element.  i.e.
		    MinOccurs > 0 means the element is required, MinOccurs == 0 means the
		    element is optional. **/
		int getModeMinOccurs() const;

		/** Returns the maximum number of occurences of the <Mode> element. Typically
		    the MaxOccurs is specified as either '1' or 'unbounded'.  When the
		    specification says 'unbounded' 'getIsModeUnbounded' will return 'true'
		    and the return value of 'getModeMaxOccurs' should be ignored. **/
		int getModeMaxOccurs() const;

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <Mode> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getModeMaxOccurs' should be
		    ignored. **/
		int getIsModeUnbounded() const;

/* Stringing and Streaming ------------------------------------------------------------ */

		virtual void stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in = "\t" ) const;

/* Impl ------------------------------------------------------------------------------- */

	private:
		class Impl;
		std::unique_ptr<Impl> myImpl;

	}; // class MxSeqSmpNode6156

} // namespace lexicon

