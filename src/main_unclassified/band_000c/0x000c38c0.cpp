/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 806C493DD8869C741D16A9222A5DE34023C4F6F5B4313E33D64FB4F89BDE34F1
 * Entry: 0x000c38c0, Ghidra index: 2391, label: FUN_000c38c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039f460;
extern uint32_t PTR_FUN_0039f8bc;
void FUN_000c38c0(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_0039f460;
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
  *in_ECX = &PTR_FUN_0039f8bc;
  piVar1 = (int *)in_ECX[8];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[8] = 0;
  }
  return;
}
