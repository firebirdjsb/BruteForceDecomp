/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A1025D64D41F8A810C73220217BCAFA7E28B4E2937B9400EE2181CC3D97B6B94
 * Entry: 0x002ed305, Ghidra index: 10686, label: _write_char
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    _write_char
   
   Library: Visual Studio 2003 Release */

void _write_char(undefined4 param_1)

{
  short sVar1;
  int in_EAX;
  int *unaff_ESI;
  
  if (((*(byte *)(in_EAX + 0xc) & 0x40) == 0) || (*(int *)(in_EAX + 8) != 0)) {
    sVar1 = FUN_002f0c2f(param_1);
    if (sVar1 == -1) {
      *unaff_ESI = -1;
      return;
    }
  }
  *unaff_ESI = *unaff_ESI + 1;
  return;
}
