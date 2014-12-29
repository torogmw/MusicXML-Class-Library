#pragma once

#include "XsdDocument.h"
#include "SequenceParser.h"
#include "FileInfo.h"
#include "mainConstants.h"
#include <fstream>
#include "IClassBldr.h"
#include "SequenceSmpBldr.h"
#include "fileStream.h"

inline void mainDoCreateMxSeqSmp()
{
#if 1
    Elements sequenceNodes = SequenceParser::getSequenceNodes();
    Elements simpleSequences;
    Elements implementedSequences;
    mjb::ClassBldrs bldrs;
    int counts = 1;
    for ( xparse::ElementPtr e : sequenceNodes )
    {
        if ( SequenceParser::getIsSequenceComposedOfElementsOnly( e ) )
        {
            if ( SequenceParser::getIsSequenceComposedOfRefElementsOnly( e ) )
            {
                simpleSequences.push_back( e );
                if ( SequenceParser::getIsSequenceComposedOfImplementedElementsOnly( e ) )
                {
                    std::shared_ptr<SequenceSmpBldr> bldr = std::make_shared<SequenceSmpBldr>( e );
                    bldrs.push_back( bldr );
                    implementedSequences.push_back( e );
                    
                    
                    std::stringstream cppFileContents;
                    cppFileContents << bldr->getCppFile();
                    
                    std::stringstream hFileContents;
                    hFileContents << bldr->getHFile();
                    
                    std::stringstream testFileContents;
                    testFileContents << bldr->getTestFile();
                    
                    FileInfo cppFileInfo = bldr->getCppFileInfo();
                    FileInfo hFileInfo = bldr->getHFileInfo();
                    FileInfo testFileInfo = bldr->getTestFileInfo();
                    
                    fileStream( hFileInfo.getFullpath(), hFileContents );
                    fileStream( cppFileInfo.getFullpath(), cppFileContents );
                    fileStream( testFileInfo.getFullpath(), testFileContents );
                    std::cout << "created " << counts << ": " << bldr->getName() << std::endl;
                    ++ counts;
                }
                
                
            }
        }
    }
#endif
}