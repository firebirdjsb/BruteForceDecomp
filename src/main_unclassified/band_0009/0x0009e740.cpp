/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 19352416C5DE929E8FC869C4B794B95AE0B27D1CDAC199EE4C8BEDF04BF6AC2F
 * Entry: 0x0009e740, Ghidra index: 1877, label: FUN_0009e740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a0e5c;
extern uint32_t PTR_LAB_003a0e68;
extern uint32_t PTR_LAB_003a0f00;
void FUN_0009e740(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_EAX;
  int unaff_ESI;
  
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  *(undefined1 *)((int)in_EAX + 0x59) = 0;
  *(undefined1 *)(in_EAX + 0x16) = 0;
  *in_EAX = PTR_LAB_003a0e68;
  in_EAX[3] = PTR_LAB_003a0e5c;
  puVar1 = in_EAX + 0x18;
  *puVar1 = PTR_LAB_003a0f00;
  in_EAX[0x19] = 1;
  in_EAX[0x1a] = *in_EAX;
  iVar2 = *(int *)(unaff_ESI + 8);
  in_EAX[0x17] = iVar2;
  if (iVar2 == 0) {
    in_EAX[0x17] = *puVar1;
    return;
  }
  **(int **)(unaff_ESI + 0xc) = (int)puVar1;
  return;
}
