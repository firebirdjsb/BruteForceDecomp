/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0CDF3D4D3228628C316167D19F76D4F3184E7F67CB1D6A74E9078098A4586362
 * Entry: 0x00295530, Ghidra index: 9318, label: FUN_00295530
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; original Xbox guest ABI remains ABI_UNVERIFIED. */
extern int FUN_00294b90(undefined4 param_1,int param_2);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
void FUN_00295530(void)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  
  while (in_EAX != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*in_EAX;
    *(int *)(DAT_00469888 + 0x78) = *(int *)(DAT_00469888 + 0x78) + -1;
    FUN_00294b90(in_EAX,0);
    in_EAX = puVar1;
  }
  return;
}
