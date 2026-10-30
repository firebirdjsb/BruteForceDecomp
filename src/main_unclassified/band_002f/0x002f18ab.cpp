/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6473F9DFD544AAB6A4AAB656BC5CDCFC6BA28DBC80E2FC7946B55F48853EA792
 * Entry: 0x002f18ab, Ghidra index: 10782, label: ___dtold
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    ___dtold
   
   Library: Visual Studio 2003 Release */

void ___dtold(uint *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  uint local_8;
  
  uVar1 = *(ushort *)((int)param_2 + 6);
  local_8 = 0x80000000;
  uVar3 = uVar1 >> 4;
  uVar4 = uVar3 & 0x7ff;
  uVar2 = *param_2;
  if ((uVar3 & 0x7ff) == 0) {
    if (((param_2[1] & 0xfffff) == 0) && (uVar2 == 0)) {
      param_1[1] = 0;
      *param_1 = 0;
      *(undefined2 *)(param_1 + 2) = 0;
      return;
    }
    uVar4 = uVar4 + 0x3c01;
    local_8 = 0;
  }
  else if (uVar4 == 0x7ff) {
    uVar4 = 0x7fff;
  }
  else {
    uVar4 = uVar4 + 0x3c00;
  }
  param_1[1] = uVar2 >> 0x15 | (param_2[1] & 0xfffff) << 0xb | local_8;
  *param_1 = uVar2 << 0xb;
  while (local_8 == 0) {
    uVar2 = param_1[1];
    uVar4 = uVar4 - 1;
    param_1[1] = uVar2 << 1 | *param_1 >> 0x1f;
    *param_1 = *param_1 * 2;
    local_8 = uVar2 << 1 & 0x80000000;
  }
  *(ushort *)(param_1 + 2) = uVar1 & 0x8000 | uVar4;
  return;
}
