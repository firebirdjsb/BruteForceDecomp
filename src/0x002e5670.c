/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 14F8EE31803BCF54317565DFC55EB263B404A37AC3A53A8B7E4C2C454232A465
 * Entry: 0x002e5670, Ghidra index: 10473, label: FUN_002e5670
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b68f0;
extern uint32_t DAT_003b68f8;
int FUN_002e5670(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x14))();
  iVar3 = 0;
  uVar2 = 0;
  do {
    if (iVar1 == *(int *)((int)&DAT_003b68f8 + uVar2)) {
      iVar1 = (**(code **)(&DAT_003b68f0 + iVar3 * 0x18))(param_1);
      if (iVar1 != 1) {
        FUN_002e8b90();
      }
      return iVar1;
    }
    uVar2 = uVar2 + 0x18;
    iVar3 = iVar3 + 1;
  } while (uVar2 < 0x78);
  return 1;
}
