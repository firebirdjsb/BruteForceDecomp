/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D22197E20BBB53CBE7A60635BA4E97998D482779A93F09DCD1BBA620CB3857AC
 * Entry: 0x002edb50, Ghidra index: 10690, label: _write_char
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    _write_char
   
   Library: Visual Studio 2003 Release */

void _write_char(void)

{
  int *piVar1;
  byte in_AL;
  uint uVar2;
  int *in_ECX;
  int *unaff_ESI;
  
  if (((*(byte *)(in_ECX + 3) & 0x40) == 0) || (in_ECX[2] != 0)) {
    piVar1 = in_ECX + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar2 = __flsbuf((int)(char)in_AL);
    }
    else {
      *(byte *)*in_ECX = in_AL;
      *in_ECX = *in_ECX + 1;
      uVar2 = (uint)in_AL;
    }
    if (uVar2 == 0xffffffff) {
      *unaff_ESI = -1;
      return;
    }
  }
  *unaff_ESI = *unaff_ESI + 1;
  return;
}
