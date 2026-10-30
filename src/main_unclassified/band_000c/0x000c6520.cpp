/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3561A2E471B3E5CE38A7E6812943A0A30382179EDE86FE780818783491B02D88
 * Entry: 0x000c6520, Ghidra index: 2440, label: FUN_000c6520
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039f3cc;
extern uint32_t PTR_FUN_0039f8bc;
extern uint32_t PTR_FUN_003a0098;
void FUN_000c6520(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_0039f3cc;
  piVar1 = (int *)in_ECX[0xe];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0xe] = 0;
  }
  *in_ECX = &PTR_FUN_003a0098;
  piVar1 = (int *)in_ECX[0xd];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0xd] = 0;
  }
  *in_ECX = &PTR_FUN_0039f8bc;
  piVar1 = (int *)in_ECX[8];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[8] = 0;
  }
  return;
}
