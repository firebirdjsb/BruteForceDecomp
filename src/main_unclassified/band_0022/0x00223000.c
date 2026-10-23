/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C66BCB3CC6DC4EA3C4E999ACC4CFBA634EF99EDE62B6B5A9B0ECA3F96334B60F
 * Entry: 0x00223000, Ghidra index: 7598, label: FUN_00223000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00394874;
extern uint32_t PTR_LAB_00394860;
extern uint32_t PTR_LAB_0039486c;
void FUN_00223000(void)

{
  int iVar1;
  int in_ECX;
  
  *(undefined ***)(in_ECX + -0x24) = &PTR_FUN_00394874;
  *(undefined ***)(*(int *)(*(int *)(in_ECX + -0x20) + 4) + -0x20 + in_ECX) = &PTR_LAB_0039486c;
  *(undefined ***)(*(int *)(*(int *)(in_ECX + -0x20) + 4) + -0x1c + in_ECX) = &PTR_LAB_00394860;
  iVar1 = *(int *)(*(int *)(in_ECX + -0x20) + 4);
  *(int *)(iVar1 + -0x24 + in_ECX) = iVar1 + -0x20;
  if (*(undefined4 **)(in_ECX + -0xc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + -0xc))(1);
    *(undefined4 *)(in_ECX + -0xc) = 0;
  }
  *(undefined4 *)(in_ECX + -0xc) = 0;
  return;
}
