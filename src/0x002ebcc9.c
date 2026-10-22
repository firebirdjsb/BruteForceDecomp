/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DE74B753D775D18041EFAB145D21EA9912D35852349A7329793D366133E6F694
 * Entry: 0x002ebcc9, Ghidra index: 10639, label: _strtol
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    _strtol
   
   Library: Visual Studio 2003 Release */

long __cdecl _strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = _strtoxl(__nptr,__endptr,__base,0);
  return lVar1;
}
