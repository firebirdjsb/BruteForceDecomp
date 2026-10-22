/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9492A3744A7E1F798C4F95169FFC1054CDB9D168EECA1796ACE442A8DB9DD4F4
 * Entry: 0x00149bd0, Ghidra index: 4276, label: FUN_00149bd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a5c88;
extern uint32_t DAT_004a5c8c;
void FUN_00149bd0(void)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar2 = 0;
  do {
    iVar1 = FUN_002ea01d(0x10);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 4) = 0;
      *(undefined4 *)(iVar1 + 8) = 0;
      *(undefined4 *)(iVar1 + 0xc) = 0;
    }
    *(int *)(unaff_EDI + iVar2 * 4) = iVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 10);
  if ((DAT_004a5c8c & 1) == 0) {
    DAT_004a5c8c = DAT_004a5c8c | 1;
    DAT_004a5c88 = 0xff2020a0;
  }
  *(undefined4 *)(unaff_EDI + 0x40) = DAT_004a5c88;
  *(undefined4 *)(unaff_EDI + 0x44) = 0xff32b4b4;
  *(undefined4 *)(unaff_EDI + 0x4c) = 0xff32d232;
  return;
}
