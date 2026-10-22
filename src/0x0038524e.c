/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BA4DE524EBFF03927E42ED838CEB60299918B3084090B89839C8D50589639BA9
 * Entry: 0x0038524e, Ghidra index: 13667, label: FUN_0038524e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8fc0;
extern uint32_t DAT_004a8fe2;
void FUN_0038524e(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int in_EDX;
  
  iVar2 = *(int *)(in_EDX + 0x18);
  if (*(char *)(in_EDX + 0x1e) == '\x01') {
    FUN_00384a53(*(int *)(in_EDX + 0xc) + -7 + DAT_004a8fc0);
    DAT_004a8fe2 = DAT_004a8fe2 + 1;
  }
  if ((*(byte *)(in_EDX + 3) & 0xf0) == 0) {
    if (*(uint *)(in_EDX + 4) == 0) {
      uVar3 = (uint)*(byte *)(in_EDX + 0x1d);
    }
    else {
      uVar3 = *(uint *)(in_EDX + 4) & 0xfff;
      uVar5 = *(uint *)(in_EDX + 0xc) & 0xfff;
      iVar4 = *(byte *)(in_EDX + 0x1d) - uVar5;
      if (uVar5 < uVar3) {
        iVar4 = iVar4 + -0x1000;
      }
      uVar3 = (iVar4 + uVar3) - 1;
    }
    *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + uVar3;
    bVar1 = *(byte *)(in_EDX + 0x1c);
    FUN_00384a53(in_EDX);
    FUN_00385128();
    if ((bVar1 & 2) != 0) {
      *(undefined4 *)(iVar2 + 4) = 0;
      FUN_003850ac(iVar2);
    }
  }
  else {
    FUN_0038515a();
  }
  return;
}
