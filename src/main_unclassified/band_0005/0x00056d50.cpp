/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CA7AE11E7C8F87C67F18DD4E83E07B78447B4C0EFA24CA5B39F0FC5FB937F39F
 * Entry: 0x00056d50, Ghidra index: 840, label: FUN_00056d50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
extern uint32_t PTR_FUN_003a3f80;
void FUN_00056d50(int param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 *unaff_EDI;
  
  *unaff_EDI = PTR_FUN_003a3f80;
  unaff_EDI[2] = 0;
  unaff_EDI[4] = 0;
  *(byte *)(unaff_EDI + 5) = *(byte *)(unaff_EDI + 5) & 0xf8;
  if (unaff_EDI[2] != 0) {
    FUN_0008f6a0(0);
  }
  if (unaff_EDI[4] != 0) {
    FUN_0008f6a0(0);
  }
  unaff_EDI[6] = 0;
  puVar2 = (uint *)(param_1 + 4);
  if (param_1 == 0) {
    puVar2 = &DAT_0046d064;
  }
  puVar1 = (uint *)(param_2 + 4);
  if (param_2 == 0) {
    puVar1 = &DAT_0046d064;
  }
  if (*puVar2 < *puVar1) {
    if (unaff_EDI[2] != param_1) {
      FUN_0008f6a0(param_1);
    }
    if (unaff_EDI[4] != param_2) {
      FUN_0008f6a0(param_2);
      return;
    }
  }
  else {
    if (unaff_EDI[2] != param_2) {
      FUN_0008f6a0(param_2);
    }
    if (unaff_EDI[4] != param_1) {
      FUN_0008f6a0(param_1);
    }
  }
  return;
}
