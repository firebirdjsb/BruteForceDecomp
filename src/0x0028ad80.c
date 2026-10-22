/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 552CF8EB73BE5EC54C0771F634FBB7D3A8E1EB2CF112090C6B9AD3BDEB65C6F0
 * Entry: 0x0028ad80, Ghidra index: 9174, label: FUN_0028ad80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
int FUN_0028ad80(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  int iVar4;
  
  uVar1 = *(undefined4 *)(DAT_00469888 + 0x34);
  iVar2 = DAT_00469888;
  do {
    if (*(uint *)(iVar2 + 0x74) <= *(uint *)(iVar2 + 0x78)) {
      FUN_002942f0(0);
      iVar2 = DAT_00469888;
    }
    iVar4 = *(int *)(iVar2 + 0x78);
    iVar2 = FUN_0028ac70(param_1);
    if (iVar2 == 1) {
      return 1;
    }
    if (iVar2 == 2) {
      return 0;
    }
    iVar4 = *(int *)(DAT_00469888 + 0x78) - iVar4;
    *(int *)(DAT_00469888 + 0x74) = *(int *)(DAT_00469888 + 0x74) + iVar4 * 2;
    iVar3 = FUN_0028ab90();
    iVar2 = DAT_00469888;
    *(int *)(DAT_00469888 + 0x74) = *(int *)(DAT_00469888 + 0x74) + iVar4 * -2;
  } while ((unaff_EBX != 0) && (iVar3 == 0));
  *(undefined4 *)(iVar2 + 0x34) = uVar1;
  return iVar3;
}
