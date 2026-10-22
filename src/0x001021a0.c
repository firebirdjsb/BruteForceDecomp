/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E1415DEBF0884B8A2C2FD93D35D23EB2D86FB3BD7E41AA50179F3647FBF86C09
 * Entry: 0x001021a0, Ghidra index: 3263, label: FUN_001021a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined4 FUN_001021a0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = **(int **)(DAT_00469b58 + 8);
  uVar1 = FUN_00102000();
  iVar2 = (**(code **)(iVar2 + 0x130))(uVar1);
  if (iVar2 != 0) {
    iVar2 = **(int **)(DAT_00469b58 + 8);
    uVar1 = FUN_00100fc0();
    (**(code **)(iVar2 + 0x148))(uVar1);
    iVar2 = **(int **)(DAT_00469b58 + 8);
    uVar1 = FUN_00102000();
    (**(code **)(iVar2 + 0x134))(uVar1);
    return 1;
  }
  return 0;
}
