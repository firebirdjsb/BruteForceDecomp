/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2C98047A867F4CBEF0DA7A41AD78AA996C1168EB936A5B4E43092A83A850F358
 * Entry: 0x000656e0, Ghidra index: 1105, label: FUN_000656e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a3258;
extern uint32_t PTR_FUN_003a3318;
void FUN_000656e0(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  piVar1 = (int *)in_ECX[0x25];
  *in_ECX = &PTR_FUN_003a3318;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xdc))(piVar1);
  }
  piVar1 = (int *)in_ECX[0x25];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0x25] = 0;
  }
  *in_ECX = &PTR_FUN_003a3258;
  piVar1 = (int *)in_ECX[0x1e];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0x1e] = 0;
  }
  return;
}
