/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7407592120D76A6A6D7F0AF1C5EA7942C339ADB2E33AD016F9C6F52EAA2A1139
 * Entry: 0x0025b8d0, Ghidra index: 8544, label: FUN_0025b8d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0044330c;
bool FUN_0025b8d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 unaff_retaddr;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return false;
  }
  (**(code **)(*DAT_0044330c + 0x18))(DAT_0044330c,*(undefined4 *)(param_1 + 8));
  iVar1 = (**(code **)(*DAT_0044330c + 0x2c))
                    (DAT_0044330c,*(undefined4 *)(param_1 + 0x10),unaff_retaddr,param_1,param_2,
                     param_3,param_4,param_5,0,param_6,param_7);
  return -1 < iVar1;
}
