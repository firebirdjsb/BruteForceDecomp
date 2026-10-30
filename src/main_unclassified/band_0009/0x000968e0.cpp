/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0144D044D67307F6BBFE271AFAB9348C6401A897176DD9A93814060F63E1EF2C
 * Entry: 0x000968e0, Ghidra index: 1831, label: FUN_000968e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a0f0c;
extern uint32_t PTR_LAB_003a14a0;
void FUN_000968e0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_EAX;
  int unaff_ESI;
  
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  *(undefined1 *)((int)in_EAX + 0x55) = 0;
  *(undefined1 *)(in_EAX + 0x15) = 0;
  *in_EAX = PTR_LAB_003a14a0;
  puVar1 = in_EAX + 0x17;
  *puVar1 = PTR_LAB_003a0f0c;
  in_EAX[0x18] = 1;
  in_EAX[0x19] = *in_EAX;
  iVar2 = *(int *)(unaff_ESI + 8);
  in_EAX[0x16] = iVar2;
  if (iVar2 == 0) {
    in_EAX[0x16] = *puVar1;
    return;
  }
  **(int **)(unaff_ESI + 0xc) = (int)puVar1;
  return;
}
