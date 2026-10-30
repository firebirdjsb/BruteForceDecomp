/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1C7243D9BF5B03DE96A7F9E1CC6AEE0C942D1811E91DA023778515825F6774C3
 * Entry: 0x00094f20, Ghidra index: 1817, label: FUN_00094f20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a1870;
extern uint32_t PTR_LAB_003a16c8;
extern uint32_t PTR_LAB_003a16d8;
extern uint32_t PTR_LAB_003a1708;
extern uint32_t PTR_LAB_003a17a0;
void FUN_00094f20(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_EAX;
  int unaff_EDI;
  
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  in_EAX[3] = PTR_FUN_003a1870;
  in_EAX[6] = 0;
  in_EAX[7] = 0;
  in_EAX[0x34] = 0x3a83126f;
  in_EAX[5] = 2;
  *in_EAX = PTR_LAB_003a1708;
  in_EAX[3] = PTR_LAB_003a16d8;
  in_EAX[4] = PTR_LAB_003a16c8;
  puVar1 = in_EAX + 0x36;
  *puVar1 = PTR_LAB_003a17a0;
  in_EAX[0x37] = 1;
  in_EAX[0x38] = *in_EAX;
  iVar2 = *(int *)(unaff_EDI + 8);
  in_EAX[0x35] = iVar2;
  if (iVar2 == 0) {
    in_EAX[0x35] = *puVar1;
    return;
  }
  **(int **)(unaff_EDI + 0xc) = (int)puVar1;
  return;
}
