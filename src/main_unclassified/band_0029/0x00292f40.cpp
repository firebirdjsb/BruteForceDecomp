/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 62D6A3F758FA9E7F3795625DAA9389223A840286FF65A17EDA7601AF2DC9C322
 * Entry: 0x00292f40, Ghidra index: 9264, label: FUN_00292f40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
extern char s_unexpected_type_in_comparison_004048ec[];
void FUN_00292f40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  double dVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = DAT_00469888;
  iVar3 = *DAT_00469888;
  if ((*(int *)(iVar3 + -0x20) == -1) && (*(int *)(iVar3 + -0x10) == -1)) {
    dVar1 = *(double *)(iVar3 + -0x18) - *(double *)(iVar3 + -8);
  }
  else {
    if ((*(int *)(iVar3 + -0x20) != -2) || (*(int *)(iVar3 + -0x10) != -2)) {
      FUN_00292dd0(s_unexpected_type_in_comparison_004048ec);
      return;
    }
    iVar3 = FUN_00292ed0(*(undefined4 *)(*(int *)(iVar3 + -8) + 0x20));
    dVar1 = (double)iVar3;
  }
  iVar3 = *piVar2;
  *piVar2 = iVar3 + -0x10;
  *(undefined4 *)(iVar3 + -0x18) = 0;
  *(undefined4 *)(iVar3 + -0x14) = 0x3ff00000;
  if (dVar1 < 0.0) {
    *(undefined4 *)(*piVar2 + -0x10) = param_1;
    return;
  }
  if (dVar1 != 0.0) {
    param_2 = param_3;
  }
  *(undefined4 *)(*piVar2 + -0x10) = param_2;
  return;
}
