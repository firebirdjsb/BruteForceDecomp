/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5FD1700759317C479499B6CA8B2DB114826ACDDE81B43CD619FBF3F8ACAFC866
 * Entry: 0x00318b5c, Ghidra index: 12207, label: FUN_00318b5c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00386a44;
extern uint32_t PTR_LAB_003869e0;
void FUN_00318b5c(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00386a44;
  FUN_00318a55();
  if (in_ECX[0x1c] != 0) {
    FUN_00314937(in_ECX[0x1c]);
    in_ECX[0x1c] = 0;
  }
  if (in_ECX[0x1d] != 0) {
    FUN_00314937(in_ECX[0x1d]);
    in_ECX[0x1d] = 0;
  }
  piVar1 = (int *)in_ECX[0x1e];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0x1e] = 0;
  }
  piVar1 = (int *)in_ECX[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[2] = 0;
  }
  *in_ECX = &PTR_LAB_003869e0;
  return;
}
