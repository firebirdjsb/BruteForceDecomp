/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CC6B2E0886E116535A74D0F8FD836B4166217579FE27DE6E6893CDA6DF15FA10
 * Entry: 0x002c0150, Ghidra index: 10008, label: FUN_002c0150
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_00469f34;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002c0150(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_EBX;
  uint uVar5;
  int iVar6;
  
  uVar5 = (uint)*(ushort *)(unaff_EBX + 0xe);
  while (uVar5 = uVar5 - 1, -1 < (int)uVar5) {
    iVar2 = *(int *)(*(int *)(unaff_EBX + 0x10) + uVar5 * 4);
    FUN_002c0fc0();
    iVar3 = (*(uint *)(iVar2 + 0x14) >> 8 & 3) * 0x1c;
    iVar1 = iVar3 + 0x18 + iVar2;
    iVar6 = ((*(uint *)(iVar2 + 0x14) ^ 0x100) >> 8 & 3) * 0x1c + 0x18 + iVar2;
    iVar4 = iVar1;
    if (*(short *)(iVar3 + 0x32 + iVar2) != 3) {
      iVar4 = iVar6;
      iVar6 = iVar1;
    }
    if ((((*(int *)(iVar6 + 0x14) != *(int *)(iVar2 + 0x7c)) && (*(short *)(iVar6 + 0x1a) == 2)) &&
        (*(short *)(iVar4 + 0x1a) == 3)) && (*(float *)(iVar2 + 0x54) < _DAT_00469f34)) {
      FUN_002c09d0(iVar2,*(undefined4 *)(iVar4 + 0x10),*(float *)(iVar2 + 0x54));
      *(undefined4 *)(iVar2 + 0x7c) = *(undefined4 *)(iVar6 + 0x14);
    }
  }
  return;
}
