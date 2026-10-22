/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0DD9283AFD2EE5EB46D33DF4425A086B801A6A505AA18E28F3C3B50D52114350
 * Entry: 0x0013c9e0, Ghidra index: 4008, label: FUN_0013c9e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b54;
extern uint32_t PTR_LAB_0039d2c8;
void FUN_0013c9e0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  
  unaff_ESI[6] = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  *(byte *)(unaff_ESI + 7) = *(byte *)(unaff_ESI + 7) & 0xfe;
  unaff_ESI[5] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[3] = 0;
  *(byte *)(unaff_ESI + 7) = *(byte *)(unaff_ESI + 7) & 0xc1;
  piVar1 = DAT_00469b54;
  *unaff_ESI = &PTR_LAB_0039d2c8;
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  unaff_ESI[0x11] = *(undefined4 *)(iVar2 + 0x29c);
  iVar2 = (**(code **)(*DAT_00469b54 + 0x48))();
  piVar1 = DAT_00469b54;
  unaff_ESI[10] = *(undefined4 *)(iVar2 + 0x2a0);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  piVar1 = DAT_00469b54;
  unaff_ESI[9] = *(undefined4 *)(iVar2 + 0x2a4);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  piVar1 = DAT_00469b54;
  unaff_ESI[0xb] = *(undefined4 *)(iVar2 + 0x2a8);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  piVar1 = DAT_00469b54;
  unaff_ESI[0xc] = *(undefined4 *)(iVar2 + 0x2ac);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  piVar1 = DAT_00469b54;
  unaff_ESI[0xd] = *(undefined4 *)(iVar2 + 0x2b8);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  piVar1 = DAT_00469b54;
  unaff_ESI[0xe] = *(undefined4 *)(iVar2 + 0x2b0);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  piVar1 = DAT_00469b54;
  unaff_ESI[0xf] = *(undefined4 *)(iVar2 + 700);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  unaff_ESI[0x10] = *(undefined4 *)(iVar2 + 0x2c0);
  unaff_ESI[8] = 0;
  unaff_ESI[0x13] = 0;
  *(byte *)(unaff_ESI + 0x12) = *(byte *)(unaff_ESI + 0x12) & 0xfe;
  return;
}
