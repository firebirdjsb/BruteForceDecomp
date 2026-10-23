/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 887D5C1C2C73FD60878F0133A430A4A665ABA3BA91F57D3500A347FF65CDAA9C
 * Entry: 0x0013e980, Ghidra index: 4032, label: FUN_0013e980
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b54;
extern uint32_t PTR_LAB_0039c9a8;
void FUN_0013e980(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  
  *(byte *)(unaff_ESI + 7) = *(byte *)(unaff_ESI + 7) & 0xfe;
  piVar1 = DAT_00469b54;
  unaff_ESI[6] = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  unaff_ESI[5] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[3] = 0;
  *(byte *)(unaff_ESI + 7) = *(byte *)(unaff_ESI + 7) & 0xc1;
  *unaff_ESI = &PTR_LAB_0039c9a8;
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  unaff_ESI[9] = *(undefined4 *)(iVar2 + 0x3e4);
  iVar2 = (**(code **)(*DAT_00469b54 + 0x48))();
  piVar1 = DAT_00469b54;
  unaff_ESI[0xb] = *(undefined4 *)(iVar2 + 1000);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  unaff_ESI[10] = *(undefined4 *)(iVar2 + 0x3ec);
  unaff_ESI[8] = 0;
  unaff_ESI[0xc] = (float)unaff_ESI[0xb] + (float)unaff_ESI[9];
  return;
}
