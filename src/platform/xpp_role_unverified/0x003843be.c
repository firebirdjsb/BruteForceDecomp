/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8D186BFE77BE5315C03138F1B92FB70329FF2473CDB4FFB64E1663019DFA545E
 * Entry: 0x003843be, Ghidra index: 13645, label: FUN_003843be
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Matched to C-draft definitions, NOT verified original Xbox callback ABI. */
extern void FUN_00384293(byte *param_1,undefined4 param_2);
extern void FUN_003840c1(int param_1,undefined4 param_2);
void FUN_003843be(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  ushort uVar3;
  byte bVar4;
  
  iVar2 = FUN_00380fc4();
  uVar3 = 0;
  bVar4 = 1;
  *(undefined1 *)(iVar2 + 3) = 0;
  do {
    if ((*(byte *)(iVar2 + 4) & bVar4) != 0) {
      *(byte *)(iVar2 + 4) = ~bVar4 & *(byte *)(iVar2 + 4);
      break;
    }
    *(char *)(iVar2 + 3) = *(char *)(iVar2 + 3) + '\x01';
    bVar4 = bVar4 << 1;
  } while (*(byte *)(iVar2 + 3) <= *(byte *)(iVar2 + 2));
  bVar4 = *(byte *)(iVar2 + 3);
  *(undefined1 *)(iVar2 + 0x26) = 0;
  *(undefined1 *)(iVar2 + 0x24) = 2;
  *(undefined4 *)(iVar2 + 0x14) = param_1;
  puVar1 = (undefined1 *)(iVar2 + 8);
  if (*(byte *)(iVar2 + 2) < bVar4) {
    *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar2 + 0x3c);
    *(int *)(iVar2 + 0x20) = iVar2 + 0x38;
    *puVar1 = 0x28;
    *(undefined1 *)(iVar2 + 9) = 0x41;
    *(undefined1 **)(iVar2 + 0x10) = (uintptr_t)0x003841c7U;
    *(uint *)(iVar2 + 0x1c) = (uint)*(byte *)(iVar2 + 7);
    *(undefined1 *)(iVar2 + 0x25) = 1;
    FUN_00383c3a(iVar2,0);
  }
  else {
    *(int *)(iVar2 + 0x20) = iVar2 + 0x38;
    *(undefined2 *)(iVar2 + 0x32) = 0;
    *(undefined1 *)(iVar2 + 0x31) = 0;
    *(undefined1 *)(iVar2 + 0x25) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined1 *)(iVar2 + 9) = 0x40;
    *puVar1 = 0x30;
    *(undefined2 *)(iVar2 + 0x36) = 4;
    *(undefined4 *)(iVar2 + 0x1c) = 4;
    if (bVar4 == 0) {
      *(code **)(iVar2 + 0x10) = FUN_00384293;
      *(undefined1 *)(iVar2 + 0x30) = 0xa0;
    }
    else {
      *(code **)(iVar2 + 0x10) = FUN_003840c1;
      *(undefined1 *)(iVar2 + 0x30) = 0xa3;
      uVar3 = (ushort)bVar4;
    }
    *(ushort *)(iVar2 + 0x34) = uVar3;
  }
  FUN_00381379(puVar1);
  return;
}
