/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E805E1BA7DF3574644C849BD018870B4AB3BDB33EC928D9D82F17BFD56259609
 * Entry: 0x00092330, Ghidra index: 1797, label: FUN_00092330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a19b0;
extern uint32_t PTR_LAB_003a19c0;
extern uint32_t PTR_LAB_003a19d0;
extern uint32_t PTR_LAB_003a1b10;
void FUN_00092330(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_EAX;
  int unaff_ESI;
  
  in_EAX[1] = 0;
  *(byte *)(in_EAX + 0xf) = *(byte *)(in_EAX + 0xf) | 3;
  in_EAX[2] = 0;
  in_EAX[0xe] = 0x3a83126f;
  *(undefined1 *)((int)in_EAX + 0x3d) = 0;
  *in_EAX = PTR_LAB_003a19d0;
  in_EAX[3] = PTR_LAB_003a19c0;
  in_EAX[4] = PTR_LAB_003a19b0;
  puVar1 = in_EAX + 0x11;
  *puVar1 = PTR_LAB_003a1b10;
  in_EAX[0x12] = 1;
  in_EAX[0x13] = *in_EAX;
  iVar2 = *(int *)(unaff_ESI + 8);
  in_EAX[0x10] = iVar2;
  if (iVar2 == 0) {
    in_EAX[0x10] = *puVar1;
    return;
  }
  **(int **)(unaff_ESI + 0xc) = (int)puVar1;
  return;
}
