/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F2A20142414876BFD7FB62EC898D3553B0CFFEADBB8BB0599DB761B2598E3612
 * Entry: 0x002edb83, Ghidra index: 10691, label: _write_multi_char
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    _write_multi_char
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

void _write_multi_char(undefined4 param_1,int param_2)

{
  int *in_EAX;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    _write_char();
  } while (*in_EAX != -1);
  return;
}
