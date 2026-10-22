/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6CA9A99F6D8AC6E81E5443E2EC34C974E34019C73EF77F0D0734420DED14C543
 * Entry: 0x002ed34f, Ghidra index: 10688, label: _write_string
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    _write_string
   
   Library: Visual Studio 2003 Release */

void _write_string(int param_1)

{
  int *in_EAX;
  undefined2 *in_ECX;
  int unaff_EDI;
  
  if (((*(byte *)(unaff_EDI + 0xc) & 0x40) == 0) || (*(int *)(unaff_EDI + 8) != 0)) {
    do {
      if (param_1 < 1) {
        return;
      }
      param_1 = param_1 + -1;
      _write_char(*in_ECX);
      in_ECX = in_ECX + 1;
    } while (*in_EAX != -1);
  }
  else {
    *in_EAX = *in_EAX + param_1;
  }
  return;
}
