/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 782FE17C1F1A2DC72303FCBFC7B9B189E4A6C2849FDD80E930EAB61A0C73DE2E
 * Entry: 0x0004c2e0, Ghidra index: 632, label: FUN_0004c2e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00020100(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern void FUN_0004d5c0(undefined4 param_1,undefined4 *param_2);
extern void FUN_0004e150(int param_1,int param_2,int param_3);
extern void FUN_0004ce30(void);

undefined4 FUN_0004c2e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_144 [4];
  int local_140;
  int local_13c;
  undefined4 local_138;
  undefined1 local_134 [308];
  
  uVar5 = 0;
  local_140 = 0;
  local_13c = 0;
  local_138 = 0;
  FUN_00020100(0,0x41a00000,0x7f7fffff);
  FUN_0004d5c0(local_144,local_134);
  iVar2 = local_140;
  if (local_140 == 0) {
    return 0;
  }
  uVar4 = local_13c - local_140 >> 3;
  if (uVar4 != 0) {
    FUN_0004e150(local_140,local_13c,uVar4);
    for (; uVar5 < uVar4; uVar5 = uVar5 + 1) {
      iVar1 = *(int *)(iVar2 + uVar5 * 8);
      if ((*(byte *)(iVar1 + 0x28) & 4) != 0) {
        cVar3 = FUN_0004ce30(param_2,iVar1 + 0x14,*(float *)(iVar2 + 4 + uVar5 * 8) + 2.0);
        if (cVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(iVar2);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(iVar2);
}
