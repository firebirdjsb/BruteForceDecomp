/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9E01448186421F2BDC377EDF93A5B993302EB4466E653D30BD0218AD9BEA541C
 * Entry: 0x001744f0, Ghidra index: 4909, label: FUN_001744f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
undefined4 FUN_001744f0(void)

{
  uint uVar1;
  uint *in_EAX;
  int *piVar2;
  int unaff_ESI;
  int local_8;
  int local_4;
  
  uVar1 = *in_EAX;
  if (uVar1 != DAT_0046d064) {
    local_8 = FUN_000a2840(in_EAX);
    local_4 = *(int *)(unaff_ESI + 4);
    if ((local_8 == local_4) || (uVar1 < *(uint *)(local_8 + 0xc))) {
      piVar2 = &local_4;
    }
    else {
      piVar2 = &local_8;
    }
    if (*piVar2 != local_4) {
      return *(undefined4 *)(*piVar2 + 0x10);
    }
  }
  return 0;
}
