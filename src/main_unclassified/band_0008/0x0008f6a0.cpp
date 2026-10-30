/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 339DC70ADE9DA431A03D8964268E2B983BF89DF209448A87B645006C63D4420D
 * Entry: 0x0008f6a0, Ghidra index: 1755, label: FUN_0008f6a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
void FUN_0008f6a0(uint param_1)

{
  uint uVar1;
  undefined4 *unaff_ESI;
  
  if (unaff_ESI[1] != 0) {
    FUN_0008f6e0();
  }
  unaff_ESI[1] = param_1;
  if ((param_1 != 0) && ((param_1 & 1) == 0)) {
    uVar1 = param_1 * 0x19660d + 0x3c6ef35f >> 0x15;
    *unaff_ESI = *(undefined4 *)(&DAT_00414da0 + uVar1 * 4);
    *(undefined4 **)(&DAT_00414da0 + uVar1 * 4) = unaff_ESI;
  }
  return;
}
