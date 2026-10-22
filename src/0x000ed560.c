/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F79E1E7EA3C29C3BFE5D3B5D9F47F5CE06A7336CBC77FE896260FC586F0C4474
 * Entry: 0x000ed560, Ghidra index: 2949, label: FUN_000ed560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
void FUN_000ed560(void)

{
  int **ppiVar1;
  int iVar2;
  uint uVar3;
  int **ppiVar4;
  int in_ECX;
  int *piVar5;
  uint uVar6;
  int *local_18;
  uint local_14;
  undefined1 auStack_10 [4];
  int iStack_c;
  
  if (*(undefined4 **)(in_ECX + 0x30) == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)**(undefined4 **)(in_ECX + 0x30);
  }
  if (piVar5 != *(int **)(in_ECX + 0x30)) {
    do {
      local_18 = (int *)piVar5[3];
      if ((local_18 != (int *)0x0) && (iVar2 = (**(code **)(*local_18 + 0x3c))(), iVar2 == 0x15)) {
        iStack_c = 0;
        FUN_0008f6a0(in_ECX);
        FUN_000e0950(auStack_10);
        if (iStack_c != 0) {
          FUN_0008f6e0();
        }
        FUN_001611d0();
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)*(int *)(in_ECX + 0x30));
  }
  uVar6 = 0;
  do {
    while( true ) {
      iVar2 = *(int *)(in_ECX + 0x94);
      if ((iVar2 == 0) || ((uint)(*(int *)(in_ECX + 0x98) - iVar2 >> 2) <= uVar6)) {
        return;
      }
      uVar3 = *(uint *)(iVar2 + uVar6 * 4);
      local_14 = 0;
      if ((uVar3 != 0) && (local_14 = uVar3, (uVar3 & 1) == 0)) {
        uVar3 = uVar3 * 0x19660d + 0x3c6ef35f >> 0x15;
        local_18 = *(int **)(&DAT_00414da0 + uVar3 * 4);
        *(int ***)(&DAT_00414da0 + uVar3 * 4) = &local_18;
      }
      FUN_000e0950(&local_18);
      if (((local_14 != 0) && ((local_14 & 1) == 0)) &&
         (ppiVar4 = (int **)(&DAT_00414da0 + (local_14 * 0x19660d + 0x3c6ef35f >> 0x15) * 4),
         *ppiVar4 != (int *)0x0)) break;
LAB_000ed6ad:
      uVar6 = uVar6 + 1;
    }
    do {
      ppiVar1 = (int **)*ppiVar4;
      if (ppiVar1 == &local_18) {
        *ppiVar4 = (int *)**ppiVar4;
        goto LAB_000ed6ad;
      }
      ppiVar4 = ppiVar1;
    } while (*ppiVar1 != (int *)0x0);
    uVar6 = uVar6 + 1;
  } while( true );
}
