/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 108B6E5C8501BA77F4103F4C1F62B26794BBBF52964AB0420062E929A45CB9DE
 * Entry: 0x00093480, Ghidra index: 1808, label: FUN_00093480
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a1870;
extern uint32_t PTR_LAB_003a17a0;
extern uint32_t PTR_LAB_003a18ac;
extern uint32_t PTR_LAB_003a18bc;
extern uint32_t PTR_LAB_003a18e8;
void FUN_00093480(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_EAX;
  int unaff_EDI;
  
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  in_EAX[3] = &PTR_FUN_003a1870;
  in_EAX[6] = 0;
  in_EAX[0x26] = 0;
  in_EAX[0x27] = 0;
  in_EAX[0x25] = 0x3a83126f;
  in_EAX[5] = 1;
  *in_EAX = &PTR_LAB_003a18e8;
  in_EAX[3] = &PTR_LAB_003a18bc;
  in_EAX[4] = &PTR_LAB_003a18ac;
  puVar1 = in_EAX + 0x29;
  *puVar1 = &PTR_LAB_003a17a0;
  in_EAX[0x2a] = 1;
  in_EAX[0x2b] = in_EAX;
  iVar2 = *(int *)(unaff_EDI + 8);
  in_EAX[0x28] = iVar2;
  if (iVar2 == 0) {
    in_EAX[0x28] = puVar1;
    return;
  }
  **(int **)(unaff_EDI + 0xc) = (int)puVar1;
  return;
}
