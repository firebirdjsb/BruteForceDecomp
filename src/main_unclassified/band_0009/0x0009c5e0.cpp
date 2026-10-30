/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B3B00C206159F6F348B6EE1573F3E5E1F2AE9684A3B7EBACC303F16ED23624BC
 * Entry: 0x0009c5e0, Ghidra index: 1867, label: FUN_0009c5e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a0f0c;
extern uint32_t PTR_LAB_003a0fd8;
void FUN_0009c5e0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_EAX;
  int unaff_ESI;
  
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  *(undefined1 *)(in_EAX + 0x27) = 0;
  *(undefined1 *)((int)in_EAX + 0xc2) = 0;
  *in_EAX = PTR_LAB_003a0fd8;
  puVar1 = in_EAX + 0x37;
  *puVar1 = PTR_LAB_003a0f0c;
  in_EAX[0x38] = 1;
  in_EAX[0x39] = *in_EAX;
  iVar2 = *(int *)(unaff_ESI + 8);
  in_EAX[0x36] = iVar2;
  if (iVar2 == 0) {
    in_EAX[0x36] = *puVar1;
    return;
  }
  **(int **)(unaff_ESI + 0xc) = (int)puVar1;
  return;
}
