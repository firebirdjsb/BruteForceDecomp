/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E3EA4F67BD41F969858CBC89BE5A4FA92E724B76DE2846D2809D6461DB706298
 * Entry: 0x002954d0, Ghidra index: 9317, label: FUN_002954d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
void FUN_002954d0(void)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  
  while (in_EAX != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*in_EAX;
    *(int *)(DAT_00469888 + 0x78) = *(int *)(DAT_00469888 + 0x78) + -5;
    FUN_00294b90(in_EAX[4],0);
    FUN_00294b90(in_EAX[7],0);
    FUN_00294b90(in_EAX[2],0);
    FUN_00294b90(in_EAX,0);
    in_EAX = puVar1;
  }
  return;
}
