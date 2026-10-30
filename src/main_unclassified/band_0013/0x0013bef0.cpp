/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 028FE65AFAFB4C7ED4F143D87A906F1440CFF0B48C5D71028D2240E8718294D1
 * Entry: 0x0013bef0, Ghidra index: 3999, label: FUN_0013bef0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b54;
extern uint32_t PTR_LAB_0039d678;
void FUN_0013bef0(void)

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
  *unaff_ESI = &PTR_LAB_0039d678;
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  unaff_ESI[8] = *(undefined4 *)(iVar2 + 0x260);
  iVar2 = (**(code **)(*DAT_00469b54 + 0x48))();
  piVar1 = DAT_00469b54;
  unaff_ESI[9] = *(undefined4 *)(iVar2 + 0x264);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  piVar1 = DAT_00469b54;
  unaff_ESI[10] = *(undefined4 *)(iVar2 + 0x268);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  piVar1 = DAT_00469b54;
  unaff_ESI[0xf] = *(undefined4 *)(iVar2 + 0x278);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  piVar1 = DAT_00469b54;
  unaff_ESI[0x10] = *(undefined4 *)(iVar2 + 0x27c);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  piVar1 = DAT_00469b54;
  unaff_ESI[0xd] = *(undefined4 *)(iVar2 + 0x270);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  piVar1 = DAT_00469b54;
  unaff_ESI[0xe] = *(undefined4 *)(iVar2 + 0x274);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  piVar1 = DAT_00469b54;
  unaff_ESI[0xc] = *(undefined4 *)(iVar2 + 0x26c);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  unaff_ESI[0x11] = *(undefined4 *)(iVar2 + 0x288);
  unaff_ESI[0xb] = 0;
  return;
}
