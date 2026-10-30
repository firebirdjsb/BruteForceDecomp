/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0E0F519CDB3FEE7324564E3D94E2B4E393423A2B91B9A12F3EDA4C25353B5399
 * Entry: 0x000a1e90, Ghidra index: 1915, label: FUN_000a1e90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a0bd8;
extern uint32_t PTR_LAB_003a0f0c;
void FUN_000a1e90(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_EAX;
  int unaff_EDI;
  
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[0xf] = 0;
  *in_EAX = PTR_LAB_003a0bd8;
  puVar1 = in_EAX + 0x11;
  *puVar1 = PTR_LAB_003a0f0c;
  in_EAX[0x12] = 1;
  in_EAX[0x13] = *in_EAX;
  iVar2 = *(int *)(unaff_EDI + 8);
  in_EAX[0x10] = iVar2;
  if (iVar2 == 0) {
    in_EAX[0x10] = *puVar1;
    return;
  }
  **(int **)(unaff_EDI + 0xc) = (int)puVar1;
  return;
}
