/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0F7A1202326097ED1DCFC81B654CA969CF53576A9D1EEBA813563AC20CDE27BE
 * Entry: 0x00065260, Ghidra index: 1100, label: FUN_00065260
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a3468;
void FUN_00065260(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_003a3468;
  piVar1 = (int *)in_ECX[0x12];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0x12] = 0;
  }
  piVar1 = (int *)in_ECX[0x10];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0x10] = 0;
  }
  piVar1 = (int *)in_ECX[0xf];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0xf] = 0;
  }
  piVar1 = (int *)in_ECX[0xe];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0xe] = 0;
  }
  piVar1 = (int *)in_ECX[0xd];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0xd] = 0;
  }
  piVar1 = (int *)in_ECX[0xc];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0xc] = 0;
  }
  FUN_00062050();
  return;
}
