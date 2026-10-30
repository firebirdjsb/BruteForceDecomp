/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D6CEE3BD7A54BBBF54055800F7FF729CC8C7EC0344F5F1B79440DFC2CBD64A03
 * Entry: 0x0013cf10, Ghidra index: 4010, label: FUN_0013cf10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b54;
extern uint32_t PTR_LAB_0039d190;
void FUN_0013cf10(void)

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
  *unaff_ESI = &PTR_LAB_0039d190;
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  unaff_ESI[0xd] = *(undefined4 *)(iVar2 + 0x28c);
  iVar2 = (**(code **)(*DAT_00469b54 + 0x48))();
  piVar1 = DAT_00469b54;
  unaff_ESI[0xb] = *(undefined4 *)(iVar2 + 0x290);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  unaff_ESI[0xc] = *(undefined4 *)(iVar2 + 0x294);
  *(undefined1 *)(unaff_ESI + 8) = 0;
  unaff_ESI[9] = 0;
  unaff_ESI[10] = 0x3f800000;
  return;
}
