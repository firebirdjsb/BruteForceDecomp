/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2CBFE50FB70A9D4A9C129023849C809FCD873566DBDC360213B05DA44C4EA307
 * Entry: 0x000c8cc0, Ghidra index: 2479, label: FUN_000c8cc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000c8a30(void);
extern undefined4 FUN_0005be70(void);
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);
extern void FUN_000c9440(int *param_1);

extern uint32_t DAT_00469ab0;
undefined4 FUN_000c8cc0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  if ((*(int *)(*(int *)(*(int *)(param_1 + 0x28) + 8) + 0x30) == 0) ||
     (*(float *)(DAT_00469ab0 + 0x13f8) != 1.0)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_000c8a30();
    piVar4 = (int *)0x0;
    for (uVar3 = 0;
        ((*(int *)(param_1 + 0x8c) != 0 &&
         (uVar3 < (uint)(*(int *)(param_1 + 0x90) - *(int *)(param_1 + 0x8c) >> 3))) &&
        (piVar4 = *(int **)(*(int *)(param_1 + 0x8c) + 4 + uVar3 * 8),
        piVar4 != *(int **)(param_1 + 0x70))); uVar3 = uVar3 + 1) {
    }
    if ((piVar4 == (int *)0x0) || (piVar4 != *(int **)(param_1 + 0x70))) {
      return 0;
    }
    iVar1 = (**(code **)(*piVar4 + 0xf4))();
    if ((iVar1 != 0) && (iVar1 = (**(code **)(*piVar4 + 0xf4))(), *(int *)(iVar1 + 0x8ec) != 0)) {
      return 0;
    }
    uVar3 = uVar3 + 1;
    if ((*(int *)(param_1 + 0x8c) == 0) ||
       ((uint)(*(int *)(param_1 + 0x90) - *(int *)(param_1 + 0x8c) >> 3) <= uVar3)) {
      uVar3 = 0;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x8c) + 4 + uVar3 * 8);
    while (((iVar1 == 0 || ((*(byte *)(iVar1 + 0x70) & 1) != 0)) ||
           ((*(int *)(iVar1 + 0x59c) != 0 &&
            ((iVar2 = FUN_0005be70(), iVar2 != 0 && (iVar1 != *(int *)(param_1 + 0x68)))))))) {
      if (iVar1 == *(int *)(param_1 + 0x70)) {
        return 0;
      }
      uVar3 = uVar3 + 1;
      if ((*(int *)(param_1 + 0x8c) == 0) ||
         ((uint)(*(int *)(param_1 + 0x90) - *(int *)(param_1 + 0x8c) >> 3) <= uVar3)) {
        uVar3 = 0;
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0x8c) + 4 + uVar3 * 8);
    }
    if (*(int *)(param_1 + 0x70) != iVar1) {
      FUN_0008f6a0(iVar1);
    }
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x7c);
LAB_000c8d4d:
    if (*(int *)(param_1 + 0x84) == 0) {
      return 1;
    }
    FUN_000c9440(*(int *)(param_1 + 0x84),iVar1);
    return 1;
  }
  if (*(int *)(param_1 + 0x70) == 0) {
    for (uVar3 = 0;
        (*(int *)(param_1 + 0x8c) != 0 &&
        (uVar3 < (uint)(*(int *)(param_1 + 0x90) - *(int *)(param_1 + 0x8c) >> 3)));
        uVar3 = uVar3 + 1) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x8c) + 4 + uVar3 * 8);
      if (iVar1 != 0) {
        if (*(int *)(param_1 + 0x70) != iVar1) {
          FUN_0008f6a0(iVar1);
        }
        *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x7c);
        goto LAB_000c8d4d;
      }
    }
  }
  return 1;
}
