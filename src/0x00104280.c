/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 233A131EDCB0A5C55F19CBCD16A3DEF3F4ECDDA162B3454C35C943C1E0D7102E
 * Entry: 0x00104280, Ghidra index: 3313, label: FUN_00104280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039e204;
void FUN_00104280(void)

{
  undefined4 *in_ECX;
  int *piVar1;
  int iVar2;
  
  *in_ECX = &PTR_FUN_0039e204;
  piVar1 = in_ECX + 0x21;
  iVar2 = 0x20;
  do {
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
