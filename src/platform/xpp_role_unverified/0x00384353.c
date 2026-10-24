/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B65EBA04AFF478E7F40E722804C5FF4EF4FE1A9419CCD0C8966FE22F42CEC5F8
 * Entry: 0x00384353, Ghidra index: 13644, label: FUN_00384353
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00384353(int param_1,undefined4 param_2)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_00380fc4();
  if (*(char *)(iVar1 + 3) == *(char *)(iVar1 + 2)) {
    *(undefined1 *)(iVar1 + 3) = 0;
    *(undefined1 *)(iVar1 + 0x26) = 0;
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar1 + 0x3c);
    *(int *)(iVar1 + 0x20) = iVar1 + 0x38;
    *(undefined1 *)(iVar1 + 8) = 0x28;
    *(undefined1 *)(iVar1 + 9) = 0x41;
    *(undefined1 **)(iVar1 + 0x10) = (uintptr_t)0x003841c7U;
    *(undefined4 *)(iVar1 + 0x14) = param_2;
    *(uint *)(iVar1 + 0x1c) = (uint)*(byte *)(iVar1 + 7);
    *(undefined1 *)(iVar1 + 0x24) = 2;
    *(undefined1 *)(iVar1 + 0x25) = 1;
  }
  else {
    bVar2 = *(char *)(iVar1 + 3) + 1;
    *(byte *)(iVar1 + 3) = bVar2;
    *(ushort *)(param_1 + 0x2c) = (ushort)bVar2;
  }
  FUN_00381379(iVar1 + 8);
  return;
}
