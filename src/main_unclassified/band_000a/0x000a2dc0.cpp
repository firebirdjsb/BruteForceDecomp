/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F87750C4AC884185F10CE87D6BF8778047D919E17A41AD117ED20CB35729B7CA
 * Entry: 0x000a2dc0, Ghidra index: 1934, label: FUN_000a2dc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a0af8;
extern uint32_t PTR_LAB_003a0f0c;
void FUN_000a2dc0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_EAX;
  int unaff_EDI;
  
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *in_EAX = PTR_LAB_003a0af8;
  puVar1 = in_EAX + 7;
  *puVar1 = PTR_LAB_003a0f0c;
  in_EAX[8] = 1;
  in_EAX[9] = *in_EAX;
  iVar2 = *(int *)(unaff_EDI + 8);
  in_EAX[6] = iVar2;
  if (iVar2 == 0) {
    in_EAX[6] = *puVar1;
    return;
  }
  **(int **)(unaff_EDI + 0xc) = (int)puVar1;
  return;
}
