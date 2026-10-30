/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 41610DD7C67F2647EB73861EE2D7376849C76F0584857ACA982B57DF5DED62F3
 * Entry: 0x0031b247, Ghidra index: 12293, label: FUN_0031b247
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032ffe8;
extern uint32_t _DAT_fe8020d4;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0031b247(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int *in_ECX;
  undefined4 *puVar9;
  uint local_8;
  
  iVar5 = DAT_0032ffe8;
  uVar3 = in_ECX[1];
  iVar4 = *in_ECX;
  uVar6 = param_1 >> 0xc;
  if (uVar3 < uVar6) {
LAB_0031b29d:
    uVar8 = 0x8007000e;
  }
  else {
    if ((uint)in_ECX[7] < param_1) {
      iVar1 = in_ECX[5];
      iVar2 = in_ECX[7];
      in_ECX[7] = param_1;
      iVar7 = DSOUND__DSound_CMemoryManager_PoolAlloc(0x61645344,param_1,1);
      in_ECX[5] = iVar7;
      if (iVar7 == 0) goto LAB_0031b29d;
      MmLockUnlockBufferPages(iVar7,param_1,0);
      if (uVar6 != 0) {
        param_1 = 0;
        puVar9 = (undefined4 *)(iVar5 + (iVar4 - uVar3) * 8);
        local_8 = uVar6;
        do {
          uVar8 = MmGetPhysicalAddress(in_ECX[5] + param_1);
          puVar9[1] = 0;
          param_1 = param_1 + 0x1000;
          *puVar9 = uVar8;
          puVar9 = puVar9 + 2;
          local_8 = local_8 - 1;
        } while (local_8 != 0);
      }
      _DAT_fe8020d4 = (*in_ECX - in_ECX[1]) + uVar6;
      if (iVar2 != 0) {
        MmLockUnlockBufferPages(iVar1,iVar2,1);
        if (iVar1 != 0) {
          FUN_00314850(iVar1);
        }
      }
    }
    uVar8 = 0;
  }
  return uVar8;
}
