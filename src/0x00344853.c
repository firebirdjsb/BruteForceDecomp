/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ED609DE60B0B8B2254D6FAE0CDA2B25DB3E0F383DC2258198408A540468F060D
 * Entry: 0x00344853, Ghidra index: 12742, label: FUN_00344853
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b1430;
undefined4 FUN_00344853(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0034470a(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_003430ea(param_3,&DAT_004b1430,4);
  iVar2 = FUN_003447d5(param_1,iVar1);
  if (iVar2 != 0) {
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        if (iVar1 != 3) {
          if (iVar1 != 4) {
            if (iVar1 != 5) {
              return 1;
            }
            **(undefined1 **)(param_1 + 0x24) = 0;
            *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
          }
          **(undefined1 **)(param_1 + 0x24) = (char)((uint)param_3 >> 0x18);
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
        }
        **(undefined1 **)(param_1 + 0x24) = (char)((uint)param_3 >> 0x10);
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      }
      **(undefined1 **)(param_1 + 0x24) = (char)((uint)param_3 >> 8);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    }
    **(undefined1 **)(param_1 + 0x24) = (char)param_3;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    return 1;
  }
  return 0;
}
