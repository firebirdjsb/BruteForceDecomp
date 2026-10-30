/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E191AA83CEE321D6C36FAF41B73FE8C0049CBEEC1DA7095EDDD61096F148B385
 * Entry: 0x00261330, Ghidra index: 8631, label: FUN_00261330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00392d70;
extern uint32_t PTR_LAB_00392dd8;
void FUN_00261330(void)

{
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = PTR_FUN_00392d70;
  unaff_ESI[1] = 0;
  uVar1 = FUN_00061500(unaff_ESI + 2);
  unaff_ESI[3] = uVar1;
  unaff_ESI[4] = 0;
  unaff_ESI[6] = 0;
  unaff_ESI[7] = 0;
  unaff_ESI[8] = 0;
  FUN_0001b650();
  *unaff_ESI = &PTR_LAB_00392dd8;
  unaff_ESI[9] = 1;
  return;
}
