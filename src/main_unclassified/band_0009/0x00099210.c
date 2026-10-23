/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B686AD91DFA8141678552F23C06FD0F2DF500FC9EDC3FC8F1EEC63E2F67B3AAB
 * Entry: 0x00099210, Ghidra index: 1845, label: FUN_00099210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a0f0c;
extern uint32_t PTR_LAB_003a12a8;
void FUN_00099210(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_EAX;
  int unaff_ESI;
  
  in_EAX[1] = 0;
  in_EAX[6] = 0x3f800000;
  in_EAX[0xc] = 0x3f800000;
  in_EAX[0xd] = 0x3f800000;
  in_EAX[2] = 0;
  *(undefined1 *)(in_EAX + 0xb) = 0;
  in_EAX[0xf] = 0;
  *(undefined1 *)((int)in_EAX + 0x2d) = 1;
  *in_EAX = &PTR_LAB_003a12a8;
  puVar1 = in_EAX + 0x12;
  *puVar1 = &PTR_LAB_003a0f0c;
  in_EAX[0x13] = 1;
  in_EAX[0x14] = in_EAX;
  iVar2 = *(int *)(unaff_ESI + 8);
  in_EAX[0x11] = iVar2;
  if (iVar2 == 0) {
    in_EAX[0x11] = puVar1;
    return;
  }
  **(int **)(unaff_ESI + 0xc) = (int)puVar1;
  return;
}
