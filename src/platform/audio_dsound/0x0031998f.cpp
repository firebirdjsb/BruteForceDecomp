/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 786EACE50FEDFE50B78B91EC41EC1E8F8AC2DD5B7DC91722742A23BD416A5B93
 * Entry: 0x0031998f, Ghidra index: 12237, label: FUN_0031998f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00386a68;
void FUN_0031998f(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  uint uVar2;
  
  *in_ECX = &PTR_FUN_00386a68;
  FUN_00319896();
  uVar2 = 0;
  do {
    FUN_003193ba(uVar2);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 6);
  piVar1 = (int *)in_ECX[0x22];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0x22] = 0;
  }
  FUN_00318b5c();
  return;
}
