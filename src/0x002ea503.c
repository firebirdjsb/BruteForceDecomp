/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6096F35F4AA8D4B7B425A9047B55E38BB08091A9BCE2EB2B0DB207AB3960F7A2
 * Entry: 0x002ea503, Ghidra index: 10584, label: _abort
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2003 Release */

void _abort(void)

{
  code *pcVar1;
  
  FUN_002ec3c9(10);
  _raise(0x16);
  FUN_002eba2f(3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
