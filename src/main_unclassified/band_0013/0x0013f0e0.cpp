/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F7BDDBCD1AA92A54EC39DB7AE34C9492AA85D55E39E2AA900F35EEFEBD7A6F5E
 * Entry: 0x0013f0e0, Ghidra index: 4044, label: FUN_0013f0e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b54;
extern uint32_t PTR_LAB_0039c4b0;
void FUN_0013f0e0(void)

{
  int *piVar1;
  undefined4 *in_EAX;
  int iVar2;
  
  FUN_0013c9e0();
  piVar1 = DAT_00469b54;
  *in_EAX = &PTR_LAB_0039c4b0;
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  in_EAX[0x11] = *(undefined4 *)(iVar2 + 0x47c);
  iVar2 = (**(code **)(*DAT_00469b54 + 0x48))();
  piVar1 = DAT_00469b54;
  in_EAX[10] = *(undefined4 *)(iVar2 + 0x480);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  piVar1 = DAT_00469b54;
  in_EAX[9] = *(undefined4 *)(iVar2 + 0x484);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  piVar1 = DAT_00469b54;
  in_EAX[0xb] = *(undefined4 *)(iVar2 + 0x488);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  piVar1 = DAT_00469b54;
  in_EAX[0xc] = *(undefined4 *)(iVar2 + 0x48c);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  piVar1 = DAT_00469b54;
  in_EAX[0xd] = *(undefined4 *)(iVar2 + 0x498);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  piVar1 = DAT_00469b54;
  in_EAX[0xe] = *(undefined4 *)(iVar2 + 0x490);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  piVar1 = DAT_00469b54;
  in_EAX[0xf] = *(undefined4 *)(iVar2 + 0x49c);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  in_EAX[0x10] = *(undefined4 *)(iVar2 + 0x4a0);
  return;
}
