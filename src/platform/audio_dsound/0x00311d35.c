/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 26FC1E70A13B6EDC17E869BA5438CD612BA2357F8FB6BFE98DFC4B5986F28E15
 * Entry: 0x00311d35, Ghidra index: 11921, label: FUN_00311d35
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003869a0;
extern uint32_t PTR_LAB_003869e0;
void FUN_00311d35(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_003869a0;
  FUN_003118c0(in_ECX + 5);
  piVar1 = (int *)in_ECX[3];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[3] = 0;
  }
  piVar1 = (int *)in_ECX[4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[4] = 0;
  }
  piVar1 = (int *)in_ECX[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[2] = 0;
  }
  *in_ECX = &PTR_LAB_003869e0;
  return;
}
