/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B4F4F787D81E1E8FAC845D7E4CA83C2BD42AD3C26EDB3CA047C63D33E429D68E
 * Entry: 0x00136240, Ghidra index: 3885, label: FUN_00136240
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
int FUN_00136240(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int local_10;
  uint local_c;
  
  if (*(int *)(param_4 + 4) != 0) {
    FUN_0001d590(param_4);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(param_4 + 4));
  }
  *(undefined4 *)(param_4 + 4) = 0;
  *(undefined4 *)(param_4 + 8) = 0;
  *(undefined4 *)(param_4 + 0xc) = 0;
  uVar4 = FUN_0013f570();
  do {
    if (uVar4 == 0) {
      if (*(undefined4 **)(param_2 + 0x18) == (undefined4 *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = **(undefined4 **)(param_2 + 0x18);
      }
      *(undefined4 *)(param_2 + 0x20) = uVar6;
      FUN_001357b0(param_1,param_2,param_3,param_4);
      if (*(int *)(param_4 + 4) == 0) {
        return 0;
      }
      return *(int *)(param_4 + 8) - *(int *)(param_4 + 4) >> 3;
    }
    local_c = 0;
    if ((uVar4 != 0) && (local_c = uVar4, (uVar4 & 1) == 0)) {
      uVar4 = uVar4 * 0x19660d + 0x3c6ef35f >> 0x15;
      local_10 = *(int *)(&DAT_00414da0 + uVar4 * 4);
      *(int **)(&DAT_00414da0 + uVar4 * 4) = &local_10;
    }
    iVar1 = *(int *)(param_4 + 4);
    if ((iVar1 == 0) ||
       ((uint)(*(int *)(param_4 + 0xc) - iVar1 >> 3) <= (uint)(*(int *)(param_4 + 8) - iVar1 >> 3)))
    {
      FUN_001f7620(param_4,*(undefined4 *)(param_4 + 8),1,&local_10);
    }
    else {
      iVar1 = *(int *)(param_4 + 8);
      FUN_0005ecb0(iVar1,1,&local_10,local_10);
      *(int *)(param_4 + 8) = iVar1 + 8;
    }
    if ((local_c != 0) && ((local_c & 1) == 0)) {
      iVar5 = local_c * 0x19660d;
      local_c = 0;
      iVar1 = *(int *)(&DAT_00414da0 + (iVar5 + 0x3c6ef35fU >> 0x15) * 4);
      piVar3 = (int *)(&DAT_00414da0 + (iVar5 + 0x3c6ef35fU >> 0x15) * 4);
      while (iVar1 != 0) {
        piVar2 = (int *)*piVar3;
        if (piVar2 == &local_10) {
          *piVar3 = *(int *)*piVar3;
          break;
        }
        piVar3 = piVar2;
        iVar1 = *piVar2;
      }
    }
    uVar4 = FUN_0013f570();
  } while( true );
}
