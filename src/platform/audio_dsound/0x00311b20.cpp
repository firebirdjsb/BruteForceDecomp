/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EC80BA60A912108D3D711FE13C4E8625334E5889F9833178E35A6BF7AAA0E94D
 * Entry: 0x00311b20, Ghidra index: 11915, label: FUN_00311b20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032fe68;
extern uint32_t PTR_FUN_00386988;
extern uint32_t PTR_LAB_003869e0;
void FUN_00311b20(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00386988;
  DAT_0032fe68 = 0;
  piVar1 = (int *)in_ECX[3];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[3] = 0;
  }
  piVar1 = (int *)in_ECX[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[2] = 0;
  }
  *in_ECX = &PTR_LAB_003869e0;
  return;
}
