/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 940A01314E93137A1CEA939657BF784E5565D611845BBA36267D04D913286868
 * Entry: 0x00026940, Ghidra index: 267, label: FUN_00026940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a3fb4;
undefined4 FUN_00026940(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int in_EAX;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined **local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)(in_EAX + 0x10);
  if (((-1 < (int)(iVar1 + 1U)) && (iVar3 = *(int *)(in_EAX + 4), iVar3 != 0)) &&
     (iVar1 + 1U < (uint)((*(int *)(in_EAX + 8) - iVar3) / 0x18))) {
    piVar2 = *(int **)(*(int *)(iVar3 + 0x14 + iVar1 * 0x18) + 0x4c);
    if (piVar2 == (int *)0x0) {
      return 1;
    }
    uVar4 = FUN_000120f0();
    FUN_001fe6c0(piVar2,uVar4);
    local_8 = FUN_000120f0();
    local_14 = &PTR_LAB_003a3fb4;
    local_4 = 0xffffffff;
    local_10 = 0;
    local_c = 0;
    (**(code **)(*piVar2 + 0x60))(&local_14);
    *(undefined1 *)(param_1 + 0x980) = 1;
    return 1;
  }
  if ((*(int *)(param_2 + 0x3c) == 0) || (*(int *)(param_2 + 0x44) == 0)) {
    FUN_00023320();
    if ((*(int *)(in_EAX + 4) == 0) || ((*(int *)(in_EAX + 8) - *(int *)(in_EAX + 4)) / 0x18 == 0))
    {
      iVar3 = -1;
    }
    else {
      iVar3 = 0;
    }
    bVar5 = *(int *)(in_EAX + 0x10) == iVar3;
  }
  else {
    iVar3 = FUN_00012650();
    bVar5 = iVar1 == iVar3;
  }
  if (bVar5) {
    return 1;
  }
  *(int *)(in_EAX + 0x10) = iVar3;
  *(undefined4 *)(in_EAX + 0x18) = 0x7f7fffff;
  *(undefined4 *)(in_EAX + 0x24) = 0;
  return 1;
}
