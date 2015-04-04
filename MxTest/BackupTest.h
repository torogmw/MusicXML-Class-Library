#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::BackupPtr tgenBackup( variant v );
    void tgenBackupExpected( std::ostream& os, int indentLevel, variant v );
}