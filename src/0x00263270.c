/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2B1C3DB089EB9B0C47E1B121A630ABED77ECD5B9FFFD86259B9E69B39F3A7E7E
 * Entry: 0x00263270, Ghidra index: 8671, label: FUN_00263270
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00392ae8;
extern uint32_t PTR_LAB_00392c28;
void FUN_00263270(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_EAX;
  int unaff_EDI;
  
  in_EAX[1] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  in_EAX[5] = 0;
  in_EAX[7] = 0;
  in_EAX[8] = 0;
  in_EAX[9] = 0;
  *in_EAX = &PTR_LAB_00392ae8;
  puVar1 = in_EAX + 0x12;
  *puVar1 = &PTR_LAB_00392c28;
  in_EAX[0x13] = 1;
  in_EAX[0x14] = in_EAX;
  iVar2 = *(int *)(unaff_EDI + 8);
  in_EAX[0x11] = iVar2;
  if (iVar2 == 0) {
    in_EAX[0x11] = puVar1;
    return;
  }
  **(int **)(unaff_EDI + 0xc) = (int)puVar1;
  return;
}
