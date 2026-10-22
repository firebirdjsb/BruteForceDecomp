/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B7B72503209BC27BAC57AE9E065AC33892DEF2BB5D1BA30E4292B24907943895
 * Entry: 0x002250b0, Ghidra index: 7627, label: FUN_002250b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469928;
undefined4 FUN_002250b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (*(uint *)(param_1 + 0x10) < *(uint *)(param_1 + 4)) {
    uVar2 = FUN_002242a0();
    iVar1 = *(int *)(param_1 + 0xc);
    iVar3 = FUN_00225ee0(param_1 + 8,iVar1,*(undefined4 *)(iVar1 + 4),uVar2);
    FUN_00225f70();
    *(int *)(iVar1 + 4) = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
    FUN_002248e0();
    uVar2 = FUN_00225000(param_1);
    DAT_00469928 = 0;
  }
  return uVar2;
}
