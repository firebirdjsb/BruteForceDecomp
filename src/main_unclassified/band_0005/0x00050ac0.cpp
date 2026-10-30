/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D25CC0645358B2FA65236F3CF310C0D62A1690CA921F80C54EF3CB86CA130BA7
 * Entry: 0x00050ac0, Ghidra index: 719, label: FUN_00050ac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_001d59e0(void);
extern void FUN_00248d00(void);

void FUN_00050ac0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_2 == param_3) {
    *param_1 = *param_4;
    return;
  }
  do {
    if (param_4 != param_2) {
      *param_4 = *param_2;
      param_4[1] = param_2[1];
      param_4[2] = param_2[2];
      param_4[0x17] = param_2[0x17];
      puVar2 = param_2 + 3;
      puVar3 = param_4 + 3;
      for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      FUN_001d59e0();
      FUN_00248d00();
    }
    param_2 = param_2 + 0x20;
    param_4 = param_4 + 0x20;
  } while (param_2 != param_3);
  *param_1 = param_4;
  return;
}
