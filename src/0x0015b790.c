/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 26727070541649952966CFDB0E3919BF79A92BD1602C1B4627312AE1FA2B7FED
 * Entry: 0x0015b790, Ghidra index: 4529, label: FUN_0015b790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039af8c;
void FUN_0015b790(void)

{
  int *in_ECX;
  int iVar1;
  
  *in_ECX = (int)&PTR_FUN_0039af8c;
  iVar1 = 3;
  do {
    in_ECX = in_ECX + 1;
    if ((undefined4 *)*in_ECX != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*in_ECX)(1);
      *in_ECX = 0;
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}
