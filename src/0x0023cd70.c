/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1BB1513C093D73490FC7024C0EB3187C51C1A1654B0FD3B162942B2FC4E651C6
 * Entry: 0x0023cd70, Ghidra index: 7945, label: FUN_0023cd70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443310;
undefined4 FUN_0023cd70(void)

{
  undefined4 in_EAX;
  int iVar1;
  undefined4 in_ECX;
  undefined4 in_EDX;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + 0x34) = in_ECX;
  *(undefined4 *)(unaff_EDI + 0x38) = in_EDX;
  *(undefined4 *)(unaff_EDI + 0x1c) = in_EAX;
  *(undefined4 *)(unaff_EDI + 0x3c) = 0;
  *(undefined4 *)(unaff_EDI + 0x40) = 0;
  *(undefined4 *)(unaff_EDI + 0x14) = 0;
  iVar1 = (**(code **)(*DAT_00443310 + 0x68))(DAT_00443310);
  *(int *)(unaff_EDI + 0x20) = iVar1;
  if ((iVar1 != 0) && (iVar1 != -1)) {
    iVar1 = *(int *)(*(int *)(unaff_EDI + 0x1c) + 0xc);
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 4) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0xc;
      }
      FUN_0023daf0();
      if (0 < iVar1) {
        do {
          FUN_0023e2f0();
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
    *(undefined4 *)(*(int *)(unaff_EDI + 0x20) + 0x70) = 0;
    return 1;
  }
  return 0;
}
