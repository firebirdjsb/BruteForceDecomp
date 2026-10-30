/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 66EE35DD9DB59E15EB17CCBA73B5BB77DDD71951532234B98BAF7CBC7F8E6547
 * Entry: 0x0008d200, Ghidra index: 1711, label: FUN_0008d200
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0008d200(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int local_80;
  int local_7c;
  int local_78;
  int local_68;
  int local_64 [17];
  int local_20 [7];
  
  local_20[6] = (**(code **)(*in_ECX + 0x34))();
  if (local_20[6] != 0) {
    local_64[0] = 0;
    piVar5 = local_64;
    for (iVar4 = 0xf; piVar5 = piVar5 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar5 = 0;
    }
    local_20[0] = 0;
    local_20[1] = 0;
    local_20[2] = 0;
    local_20[3] = 0;
    local_20[4] = 1;
    local_20[5] = 1;
    cVar1 = FUN_001ec5c0();
    if (cVar1 != '\0') {
      local_20[4] = 4;
      local_20[5] = 0;
    }
    for (local_68 = 1; local_68 < 9; local_68 = local_68 + 1) {
      iVar4 = (**(code **)(*in_ECX + 8))(local_68);
      if (iVar4 != 0) {
        iVar2 = FUN_0008b9c0(iVar4);
        cVar1 = FUN_00078cc0();
        if (cVar1 != '\0') {
          local_64[(*(int *)(iVar2 + 8) + local_20[5]) * 4 + *(int *)(iVar2 + 4)] = iVar4;
          local_20[*(int *)(iVar2 + 8) + local_20[5]] =
               local_20[*(int *)(iVar2 + 8) + local_20[5]] + 1;
        }
      }
    }
    for (local_78 = 0; local_78 < local_20[4]; local_78 = local_78 + 1) {
      local_7c = 0;
      for (local_80 = 0; local_80 < 4; local_80 = local_80 + 1) {
        if (local_64[local_78 * 4 + local_80] != 0) {
          iVar4 = FUN_0008b790();
          if (iVar4 != 0) {
            uVar6 = *(undefined4 *)((local_20[local_78] + -1) * 0x10 + 0x3f7eb0 + local_7c * 4);
            uVar3 = FUN_0006aaa0(iVar4,uVar6);
            FUN_00073110(uVar3,iVar4,uVar6);
            local_7c = local_7c + 1;
          }
        }
      }
    }
  }
  return;
}
