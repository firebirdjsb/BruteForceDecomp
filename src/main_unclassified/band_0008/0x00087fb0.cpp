/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4E5B7E3831B39CD23D62C5E130AF6E7B6403A3A996B39A5FEA6954CBEAF8E927
 * Entry: 0x00087fb0, Ghidra index: 1631, label: FUN_00087fb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
extern uint32_t PTR_LAB_003a21bc;
void FUN_00087fb0(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *unaff_EBX;
  int iVar6;
  
  iVar6 = 8;
  piVar5 = unaff_EBX + 0x25;
  do {
    uVar1 = piVar5[-1];
    if ((uVar1 != 0) && ((uVar1 & 1) == 0)) {
      piVar5[-1] = 0;
      iVar2 = *(int *)(&DAT_00414da0 + (uVar1 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
      piVar4 = (int *)(&DAT_00414da0 + (uVar1 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
      while (iVar2 != 0) {
        piVar3 = (int *)*piVar4;
        if (piVar3 == piVar5 + -2) {
          *piVar4 = *(int *)*piVar4;
          break;
        }
        piVar4 = piVar3;
        iVar2 = *piVar3;
      }
    }
    iVar6 = iVar6 + -1;
    piVar5 = piVar5 + -2;
    if (iVar6 == 0) {
      *unaff_EBX = &PTR_LAB_003a21bc;
      return;
    }
  } while( true );
}
