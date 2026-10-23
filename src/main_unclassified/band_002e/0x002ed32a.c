/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 644CEFD9D652892B5E3EC3D961EF75B10F2D0091DAE85BAFD70D1986ACFA08D1
 * Entry: 0x002ed32a, Ghidra index: 10687, label: _write_multi_char
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    _write_multi_char
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void _write_multi_char(undefined4 param_1,int param_2)

{
  int *in_EAX;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    _write_char(param_1);
  } while (*in_EAX != -1);
  return;
}
