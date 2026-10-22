/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 895CE711299B6A12E5E1ABCD7B0E278763A654EEE1E708AC7FA8FFE9FB8E7EBA
 * Entry: 0x0008c1b0, Ghidra index: 1696, label: FUN_0008c1b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
int FUN_0008c1b0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int unaff_ESI;
  
  iVar1 = 1;
  piVar3 = (int *)(DAT_00469948 + 0x230);
  while( true ) {
    if (*(int *)(*piVar3 + 0xc4) == 0) {
      iVar2 = 4;
    }
    else {
      iVar2 = *(int *)(*(int *)(*piVar3 + 0xc4) + 0xbc);
    }
    if (iVar2 == unaff_ESI) break;
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 1;
    if (8 < iVar1) {
      return 9;
    }
  }
  return iVar1;
}
