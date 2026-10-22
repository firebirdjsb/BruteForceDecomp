/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 924EA142953718BB80C9FBA9B43F75D507FF8A2CFD5C4493F48C35E8F0F76552
 * Entry: 0x002efd83, Ghidra index: 10729, label: FUN_002efd83
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0040f554;
extern uint32_t DAT_0040f558;
extern uint32_t DAT_0040f55c;
extern uint32_t DAT_0040f560;
void FUN_002efd83(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  DAT_0040f554 = (int *)FUN_002f1965(*param_1,param_1[1]);
  DAT_0040f55c = DAT_0040f554[1] + -1;
  pcVar2 = (char *)((uint)(*DAT_0040f554 == 0x2d) + param_2);
  FUN_002f182c(pcVar2,param_3,DAT_0040f554);
  iVar1 = DAT_0040f554[1] + -1;
  DAT_0040f560 = DAT_0040f55c < iVar1;
  DAT_0040f55c = iVar1;
  if ((iVar1 < -4) || (param_3 <= iVar1)) {
    DAT_0040f558 = 1;
    FUN_002efbb6(param_1,param_2,param_3,param_4);
  }
  else {
    if ((bool)DAT_0040f560) {
      do {
        pcVar3 = pcVar2;
        pcVar2 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      pcVar3[-1] = '\0';
    }
    DAT_0040f558 = 1;
    FUN_002efca4(param_1,param_2,param_3);
  }
  DAT_0040f558 = 0;
  return;
}
