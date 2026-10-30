/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2722BEE698F8F77EB8A369965732982C31D3EA134DAFA7EA726039D007B94865
 * Entry: 0x003568e4, Ghidra index: 13144, label: FUN_003568e4
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_003568e4(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  bool bVar7;
  
  iVar4 = param_1[0x16];
  uVar1 = param_1[0x15];
  uVar2 = uVar1 & 0x1ff;
  bVar7 = *param_1 == 0x2035444d;
  param_1[(uVar2 >> 5) + 1] = param_1[(uVar2 >> 5) + 1] | 0x80 << ((byte)uVar2 & 0x1f);
  if (0x1c0 < uVar2 + 8) {
    if (bVar7) {
      iVar3 = FUN_00356526(param_1);
      bVar7 = true;
      if (iVar3 != 0) goto LAB_00356948;
    }
    bVar7 = false;
  }
LAB_00356948:
  param_1[0xf] = uVar1;
  param_1[0x10] = iVar4;
  if (bVar7) {
    iVar4 = FUN_00356526(param_1);
    if (iVar4 != 0) {
      uVar5 = 1;
      goto LAB_00356967;
    }
  }
  uVar5 = 0;
LAB_00356967:
  piVar6 = param_1 + 0x17;
  iVar4 = 4;
  do {
    iVar3 = piVar6[-6];
    *(char *)((int)piVar6 + 1) = (char)((uint)iVar3 >> 8);
    *(char *)piVar6 = (char)iVar3;
    *(char *)((int)piVar6 + 2) = (char)((uint)iVar3 >> 0x10);
    *(char *)((int)piVar6 + 3) = (char)((uint)iVar3 >> 0x18);
    piVar6 = piVar6 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *param_1 = 0;
  return uVar5;
}
