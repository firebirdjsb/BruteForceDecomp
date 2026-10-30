/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 85B52B1ACA00F4113293CB51AFFCF79C4DA886BC544CE744A7AAD84EE63A5B68
 * Entry: 0x00088c30, Ghidra index: 1637, label: FUN_00088c30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern int FUN_001f0090(int param_1);

extern uint32_t DAT_0046995c;
undefined4 FUN_00088c30(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int in_EDX;
  int unaff_ESI;
  int unaff_EDI;
  int local_20 [8];
  
  iVar2 = 0;
  puVar1 = (undefined4 *)(unaff_ESI * 0x20 + 0x58 + in_EDX);
  do {
    if (((int *)*puVar1 != (int *)0x0) && (unaff_EDI == *(int *)*puVar1)) {
      return 1;
    }
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 2;
  } while (iVar2 < 4);
  if (*(int *)(DAT_0046995c + 0x1c) != 0) {
    iVar2 = FUN_001f0090(local_20);
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        if ((*(int *)(local_20[iVar3] + 0x98) == unaff_ESI) &&
           (*(int *)(local_20[iVar3] + 0x10) == unaff_EDI)) {
          return 1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
  }
  return 0;
}
