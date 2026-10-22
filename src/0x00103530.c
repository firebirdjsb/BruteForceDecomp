/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5511D222122FFB9D8E1523EBE9784F2B1404183314E4D88B2834671818FC1AF2
 * Entry: 0x00103530, Ghidra index: 3299, label: FUN_00103530
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00103530(void)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int unaff_EDI;
  undefined4 uVar4;
  int *piVar5;
  undefined1 local_28 [4];
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14 [5];
  
  local_14[0] = *(int *)(unaff_EDI + 0x7c);
  if (local_14[0] != 0) {
    local_14[3] = 0;
    local_14[1] = 0;
    local_14[4] = 0x3f800000;
    local_14[2] = 0x3f800000;
    if ((*(byte *)(unaff_EDI + 0x70) & 2) != 0) {
      local_14[1] = 0x3f800000;
      local_14[2] = 0;
    }
    if ((*(byte *)(unaff_EDI + 0x70) & 4) != 0) {
      local_14[3] = 0x3f800000;
      local_14[4] = 0;
    }
    FUN_001035f0();
    fVar1 = local_20 - local_24;
    piVar5 = local_14;
    uVar4 = *(undefined4 *)(unaff_EDI + 0x78);
    fVar2 = local_18 - local_1c;
    uVar3 = FUN_000ef3a0(local_28);
    FUN_000ee6e0(unaff_EDI,local_1c,local_24,fVar2,fVar1,uVar3,uVar4,piVar5);
  }
  return;
}
