/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1CD49BAC68CF647ECDBF7280B44E034E2386E08401700C6E9A0D3C6EE67B091D
 * Entry: 0x000cdf90, Ghidra index: 2547, label: FUN_000cdf90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000cdf90(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int local_10;
  undefined1 local_c [4];
  undefined4 *local_8;
  undefined4 local_4;
  
  iVar3 = param_1;
  puVar5 = (undefined4 *)0x0;
  if (*(int *)(param_1 + 8) != 0) {
    puVar2 = (undefined4 *)FUN_00061500(local_c);
    puVar1 = *(undefined4 **)(iVar3 + 4);
    local_4 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar5 = (undefined4 *)*puVar1;
    }
    local_8 = puVar2;
    if (puVar5 != puVar1) {
      do {
        local_10 = puVar5[2];
        if ((*(int *)(local_10 + 0x24) == 0) ||
           ((puVar1 = *(undefined4 **)(local_10 + 0x28), puVar1[0xd] == -0x62bf19e &&
            (*(float *)*puVar1 < (float)puVar1[0xe] != (*(float *)*puVar1 == (float)puVar1[0xe])))))
        {
          iVar3 = FUN_000ff730(local_c,puVar2,puVar2[1],&local_10);
          FUN_000b2a50();
          puVar2[1] = iVar3;
          **(int **)(iVar3 + 4) = iVar3;
          puVar2 = local_8;
          iVar3 = param_1;
        }
        puVar5 = (undefined4 *)*puVar5;
      } while (puVar5 != *(undefined4 **)(iVar3 + 4));
    }
    if (puVar2 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)*puVar2;
    }
    for (; puVar5 != puVar2; puVar5 = (undefined4 *)*puVar5) {
      FUN_000cdb10(puVar5[2]);
    }
    if (puVar2 == (undefined4 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *puVar2;
    }
    FUN_001298b0(&param_1,uVar4,puVar2);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_8);
  }
  return;
}
