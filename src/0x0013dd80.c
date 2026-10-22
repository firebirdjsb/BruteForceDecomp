/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 819CB865820E6A5F23EA45C59B5E00F7CA3626A00B7248B36F95669F7F1CEE10
 * Entry: 0x0013dd80, Ghidra index: 4022, label: FUN_0013dd80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b54;
extern uint32_t PTR_LAB_0039cc28;
void FUN_0013dd80(void)

{
  int *piVar1;
  undefined4 *in_EAX;
  int iVar2;
  
  FUN_0013bef0();
  piVar1 = DAT_00469b54;
  *in_EAX = &PTR_LAB_0039cc28;
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  in_EAX[8] = *(undefined4 *)(iVar2 + 0x450);
  iVar2 = (**(code **)(*DAT_00469b54 + 0x48))();
  piVar1 = DAT_00469b54;
  in_EAX[9] = *(undefined4 *)(iVar2 + 0x454);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  piVar1 = DAT_00469b54;
  in_EAX[10] = *(undefined4 *)(iVar2 + 0x458);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  piVar1 = DAT_00469b54;
  in_EAX[0xf] = *(undefined4 *)(iVar2 + 0x468);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  piVar1 = DAT_00469b54;
  in_EAX[0x10] = *(undefined4 *)(iVar2 + 0x46c);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  piVar1 = DAT_00469b54;
  in_EAX[0xd] = *(undefined4 *)(iVar2 + 0x460);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  piVar1 = DAT_00469b54;
  in_EAX[0xe] = *(undefined4 *)(iVar2 + 0x464);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  piVar1 = DAT_00469b54;
  in_EAX[0xc] = *(undefined4 *)(iVar2 + 0x45c);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  in_EAX[0x11] = *(undefined4 *)(iVar2 + 0x478);
  return;
}
