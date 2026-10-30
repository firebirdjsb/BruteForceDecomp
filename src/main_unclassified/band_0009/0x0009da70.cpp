/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5A3B1C7B2563FC7D6C4493E5DD748F94B2A0FBCB5E1DA387FED8E949293732A2
 * Entry: 0x0009da70, Ghidra index: 1872, label: FUN_0009da70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_DAT_003a0f28;
extern uint32_t PTR_LAB_003a0f0c;
void FUN_0009da70(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_EAX;
  int unaff_ESI;
  
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  *(undefined1 *)(in_EAX + 0x16) = 0;
  *(undefined1 *)((int)in_EAX + 0x59) = 0;
  *in_EAX = &PTR_DAT_003a0f28;
  puVar1 = in_EAX + 0x21;
  *puVar1 = &PTR_LAB_003a0f0c;
  in_EAX[0x22] = 1;
  in_EAX[0x23] = in_EAX;
  iVar2 = *(int *)(unaff_ESI + 8);
  in_EAX[0x20] = iVar2;
  if (iVar2 == 0) {
    in_EAX[0x20] = puVar1;
    return;
  }
  **(int **)(unaff_ESI + 0xc) = (int)puVar1;
  return;
}
