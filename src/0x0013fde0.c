/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6696CA5AEB28EBB44B762561589F5EC17EF27B96F6D06F1ADD52EBD59B4B49BE
 * Entry: 0x0013fde0, Ghidra index: 4068, label: FUN_0013fde0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfd8;
int FUN_0013fde0(void)

{
  int iVar1;
  uint uVar2;
  int unaff_ESI;
  int iVar3;
  
  iVar1 = *(int *)(unaff_ESI + 0x28);
  iVar3 = 0;
  if (iVar1 != *(int *)(unaff_ESI + 0x2c)) {
    DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
    if (*(int *)(unaff_ESI + 0x28) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*(int *)(unaff_ESI + 0x2c) - *(int *)(unaff_ESI + 0x28)) / 0x2c;
    }
    uVar2 = DAT_0046cfd8 % uVar2;
    iVar3 = iVar1;
    if (uVar2 != 0) {
      do {
        iVar3 = iVar3 + 0x2c;
        if (iVar3 == *(int *)(unaff_ESI + 0x2c)) {
          iVar3 = *(int *)(unaff_ESI + 0x28);
        }
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
  }
  return iVar3;
}
