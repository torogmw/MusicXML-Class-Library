#include "MsItem.h"
#include "MsItemWeb.h"
#include "XpItem.h"
#include <set>
#include "File.h"
#include "globals.h"

namespace go
{
    void goRecursivelyBuildMsItems( const xsd::XpItemPtr& i, xsd::MsItemSet& output );
    
    inline void goMsItemTest()
    {
        fs::Directory dir( globals::getOutputDirectory() );
        
        xsd::MsItemWeb xdoc;
        xsd::XpItemPtr root = xdoc.getXpDom()->getRootItem();
        
        fs::writeStringToFile(globals::getOutputDirectory(),
                              "xsd_allitems.csv",
                              xsd::toString( xdoc.getMsItemSet() ) );
        
        xsd::MsItemKind kind = xsd::MsItemKind::unknown;
        fs::writeStringToFile(globals::getOutputDirectory(),
                              "xsd_unknown.csv",
                              xsd::toString( xdoc.getFilteredMsItemSet( kind ) ) );
        
        kind = xsd::MsItemKind::annotation;
        fs::writeStringToFile(globals::getOutputDirectory(),
                              "xsd_annotation.csv",
                              xsd::toString( xdoc.getFilteredMsItemSet( kind ) ) );
        
        kind = xsd::MsItemKind::attribute;
        fs::writeStringToFile(globals::getOutputDirectory(),
                              "xsd_attribute.csv",
                              xsd::toString( xdoc.getFilteredMsItemSet( kind ) ) );
        
        kind = xsd::MsItemKind::attributeGroup;
        fs::writeStringToFile(globals::getOutputDirectory(),
                              "xsd_attributeGroup.csv",
                              xsd::toString( xdoc.getFilteredMsItemSet( kind ) ) );
        
        kind = xsd::MsItemKind::choice;
        fs::writeStringToFile(globals::getOutputDirectory(),
                              "xsd_choice.csv",
                              xsd::toString( xdoc.getFilteredMsItemSet( kind ) ) );
        
        kind = xsd::MsItemKind::complexContent;
        fs::writeStringToFile(globals::getOutputDirectory(),
                              "xsd_complexContent.csv",
                              xsd::toString( xdoc.getFilteredMsItemSet( kind ) ) );
        
        kind = xsd::MsItemKind::complexType;
        fs::writeStringToFile(globals::getOutputDirectory(),
                              "xsd_complexType.csv",
                              xsd::toString( xdoc.getFilteredMsItemSet( kind ) ) );
        
        kind = xsd::MsItemKind::documentation;
        fs::writeStringToFile(globals::getOutputDirectory(),
                              "xsd_documentation.csv",
                              xsd::toString( xdoc.getFilteredMsItemSet( kind ) ) );
        
        kind = xsd::MsItemKind::element;
        fs::writeStringToFile(globals::getOutputDirectory(),
                              "xsd_element.csv",
                              xsd::toString( xdoc.getFilteredMsItemSet( kind ) ) );
        
        kind = xsd::MsItemKind::enumeration;
        fs::writeStringToFile(globals::getOutputDirectory(),
                              "xsd_enumeration.csv",
                              xsd::toString( xdoc.getFilteredMsItemSet( kind ) ) );
        
        kind = xsd::MsItemKind::extension;
        fs::writeStringToFile(globals::getOutputDirectory(),
                              "xsd_extension.csv",
                              xsd::toString( xdoc.getFilteredMsItemSet( kind ) ) );
        
        kind = xsd::MsItemKind::group;
        fs::writeStringToFile(globals::getOutputDirectory(),
                              "xsd_group.csv",
                              xsd::toString( xdoc.getFilteredMsItemSet( kind ) ) );
        
        kind = xsd::MsItemKind::import;
        fs::writeStringToFile(globals::getOutputDirectory(),
                              "xsd_import.csv",
                              xsd::toString( xdoc.getFilteredMsItemSet( kind ) ) );
        
        kind = xsd::MsItemKind::maxInclusive;
        fs::writeStringToFile(globals::getOutputDirectory(),
                              "xsd_maxInclusive.csv",
                              xsd::toString( xdoc.getFilteredMsItemSet( kind ) ) );
        
        kind = xsd::MsItemKind::minExclusive;
        fs::writeStringToFile(globals::getOutputDirectory(),
                              "xsd_minExclusive.csv",
                              xsd::toString( xdoc.getFilteredMsItemSet( kind ) ) );
        
        kind = xsd::MsItemKind::minInclusive;
        fs::writeStringToFile(globals::getOutputDirectory(),
                              "xsd_minInclusive.csv",
                              xsd::toString( xdoc.getFilteredMsItemSet( kind ) ) );
        
        kind = xsd::MsItemKind::pattern;
        fs::writeStringToFile(globals::getOutputDirectory(),
                              "xsd_pattern.csv",
                              xsd::toString( xdoc.getFilteredMsItemSet( kind ) ) );
        
        kind = xsd::MsItemKind::restriction;
        fs::writeStringToFile(globals::getOutputDirectory(),
                              "xsd_restriction.csv",
                              xsd::toString( xdoc.getFilteredMsItemSet( kind ) ) );
        
        kind = xsd::MsItemKind::schema;
        fs::writeStringToFile(globals::getOutputDirectory(),
                              "xsd_schema.csv",
                              xsd::toString( xdoc.getFilteredMsItemSet( kind ) ) );
        
        kind = xsd::MsItemKind::sequence;
        fs::writeStringToFile(globals::getOutputDirectory(),
                              "xsd_sequence.csv",
                              xsd::toString( xdoc.getFilteredMsItemSet( kind ) ) );
        
        kind = xsd::MsItemKind::simpleContent;
        fs::writeStringToFile(globals::getOutputDirectory(),
                              "xsd_simpleContent.csv",
                              xsd::toString( xdoc.getFilteredMsItemSet( kind ) ) );
        
        kind = xsd::MsItemKind::simpleType;
        fs::writeStringToFile(globals::getOutputDirectory(),
                              "xsd_simpleType.csv",
                              xsd::toString( xdoc.getFilteredMsItemSet( kind ) ) );
        
        kind = xsd::MsItemKind::union_;
        fs::writeStringToFile(globals::getOutputDirectory(),
                              "xsd_union_.csv",
                              xsd::toString( xdoc.getFilteredMsItemSet( kind ) ) );

        int breakhere = 1;
    }

}
