/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 19EC933135B3828E0FF8310B33D636CF7C601E209F056556EE6A1FFD9B752872
 * Entry: 0x000efdf0, Ghidra index: 2991, label: FUN_000efdf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined4 FUN_000efdf0(void)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  
  iVar1 = **(int **)(DAT_00469b58 + 8);
  uVar2 = FUN_00102000();
  pbVar3 = (byte *)(**(code **)(iVar1 + 0x130))(uVar2);
  if (pbVar3 != (byte *)0x0) {
    *pbVar3 = *pbVar3 & 0xdf;
    uVar2 = FUN_00102000();
    (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x134))(uVar2);
    return 1;
  }
  return 0;
}
