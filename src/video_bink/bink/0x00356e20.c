/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C6491DC14C76A00FC2FE20E398DD9745CEE1E79F12D1A625CB0FBD64C796BD24
 * Entry: 0x00356e20, Ghidra index: 13148, label: FUN_00356e20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_004b1680;
extern uint32_t DAT_004b1684;
extern uint32_t DAT_004b1688;
bool FUN_00356e20(code *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 == (code *)0x0) {
    return false;
  }
  if (DAT_004b1680 != (code *)0x0) {
    if (DAT_004b1680 == param_1) goto LAB_00356e4a;
    if (DAT_004b1688 != 0) {
      return false;
    }
  }
  DAT_004b1680 = param_1;
LAB_00356e4a:
  iVar1 = (*DAT_004b1680)(param_2);
  if (iVar1 != 0) {
    DAT_004b1684 = iVar1;
  }
  return DAT_004b1684 != 0;
}
