/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B8EE297F1573E86A5335ABB8289A24C7B4533C31975AA3E55768B6D9EC0E7446
 * Entry: 0x002dcdb0, Ghidra index: 10309, label: FUN_002dcdb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002dcdb0(void)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  uint *unaff_ESI;
  
  uVar2 = (uint)*(ushort *)(in_ECX + 0x3e);
  iVar4 = 0;
  if (-1 < (int)(uVar2 - 1)) {
    piVar3 = (int *)(*(int *)(in_ECX + 0x40) + (uVar2 - 1) * 4);
    do {
      iVar1 = *piVar3;
      if (((*(uint **)(iVar1 + 0x2c) == unaff_ESI) || (*(uint **)(iVar1 + 0x30) == unaff_ESI)) &&
         (((**(uint **)(iVar1 + 0x30) | **(uint **)(iVar1 + 0x2c)) & 0xc) == 0)) {
        iVar4 = iVar4 + 1;
      }
      piVar3 = piVar3 + -1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    if (1 < iVar4) {
      return 0;
    }
  }
  return 1;
}
