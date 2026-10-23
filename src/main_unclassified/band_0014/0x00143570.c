/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 82D90CC945E725D39DFF50794B01F7F6772DC2BCE68C76E5FA29985D03076C65
 * Entry: 0x00143570, Ghidra index: 4141, label: FUN_00143570
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
undefined4 FUN_00143570(void)

{
  int iVar1;
  int iVar2;
  int *unaff_ESI;
  
  if (*unaff_ESI != 0) {
    (**(code **)(*DAT_00469940 + 0x20))(*unaff_ESI,1);
    *unaff_ESI = 0;
  }
  unaff_ESI[1] = 0;
  unaff_ESI[0x14] = 0;
  *(undefined1 *)(unaff_ESI + 0x15) = 0;
  if (unaff_ESI[0xd] == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = unaff_ESI[0xe] - unaff_ESI[0xd] >> 2;
  }
  iVar1 = 0;
  do {
    if (iVar2 <= iVar1) break;
    *(undefined4 *)(unaff_ESI[0xd] + iVar1 * 4) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xf);
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}
