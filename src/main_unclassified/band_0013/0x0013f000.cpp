/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8CF09921C4FA432A356D18DDB18276CB63E411CE3F1150A3A628E96D8BE2A9F8
 * Entry: 0x0013f000, Ghidra index: 4043, label: FUN_0013f000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b54;
extern uint32_t PTR_LAB_0039c5f0;
void FUN_0013f000(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  
  FUN_0013dd80();
  piVar1 = DAT_00469b54;
  *unaff_ESI = &PTR_LAB_0039c5f0;
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  unaff_ESI[8] = *(undefined4 *)(iVar2 + 0x424);
  iVar2 = (**(code **)(*DAT_00469b54 + 0x48))();
  piVar1 = DAT_00469b54;
  unaff_ESI[9] = *(undefined4 *)(iVar2 + 0x428);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  piVar1 = DAT_00469b54;
  unaff_ESI[10] = *(undefined4 *)(iVar2 + 0x42c);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  piVar1 = DAT_00469b54;
  unaff_ESI[0xf] = *(undefined4 *)(iVar2 + 0x43c);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  piVar1 = DAT_00469b54;
  unaff_ESI[0x10] = *(undefined4 *)(iVar2 + 0x440);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  piVar1 = DAT_00469b54;
  unaff_ESI[0xd] = *(undefined4 *)(iVar2 + 0x434);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  piVar1 = DAT_00469b54;
  unaff_ESI[0xe] = *(undefined4 *)(iVar2 + 0x438);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  piVar1 = DAT_00469b54;
  unaff_ESI[0xc] = *(undefined4 *)(iVar2 + 0x430);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  unaff_ESI[0x11] = *(undefined4 *)(iVar2 + 0x44c);
  return;
}
