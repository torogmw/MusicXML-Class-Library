#pragma once

/**
  * @file       MxSeqSmpNode4261.h
  * @class      lexicon::MxSeqSmpNode4261
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-11 13:05:32
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 4261
  * 
  * @brief This class represents an xs:sequence object from musicxml.xsd.
  * 
  * This class represents an xs:sequence object from musicxml.xsd.
  * 
 **/


namespace lexicon
{
/* MxSeqSmpNode4261 ------------------------------------------------------------------- */

	class MxSeqSmpNode4261 : public MxSeq
	{
	public:

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

		MxSeqSmpNode4261();
		virtual ~MxSeqSmpNode4261();
		MxSeqSmpNode4261( const MxSeqSmpNode4261& other );
		MxSeqSmpNode4261& operator=( const MxSeqSmpNode4261& other );

/* StaffDistance Functions ------------------------------------------------------------ */

		/** Tells you whether or not <StaffDistance> is present. If <StaffDistance>
		    is required, this will always return 'true'. If <StaffDistance> is
		    required, no corresponding 'setIsStaffDistancePresent' will exist. **/
		bool getIsStaffDistancePresent() const;
		void setIsStaffDistancePresent( const bool& value_in );

		/** Returns a shared pointer handle to the <StaffDistance> element. Note
		    that if getIsStaffDistancePresent is false, this value will still exist
		    (even though it is not in the xml document) and you should ignore it. **/
		HMxEmStaffDistance getStaffDistance() const;

		/** Sets the internal shared pointer handle for the <StaffDistance> element.
		    Note that if setIsStaffDistancePresent is false, the internal shared
		    pointer will not be altered and will hold a value that does not exist
		    in xml. **/
		int setStaffDistance( const HMxEmStaffDistance&& value_in );

		/** Returns the minimum number of occurences of the <StaffDistance> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getStaffDistanceMinOccurs() const;

		/** Returns the maximum number of occurences of the <StaffDistance> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsStaffDistanceUnbounded'
		    will return 'true' and the return value of 'getStaffDistanceMaxOccurs'
		    should be ignored. **/
		int getStaffDistanceMaxOccurs() const;

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <StaffDistance> element is 'unbounded'.When this
		    function returns 'true', the value returned by 'getStaffDistanceMaxOccurs'
		    should be ignored. **/
		int getIsStaffDistanceUnbounded() const;

/* Stringing and Streaming ------------------------------------------------------------ */

		virtual void stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in = "\t" ) const;

/* Impl ------------------------------------------------------------------------------- */

	private:
		class Impl;
		std::unique_ptr<Impl> myImpl;

	}; // class MxSeqSmpNode4261

} // namespace lexicon

