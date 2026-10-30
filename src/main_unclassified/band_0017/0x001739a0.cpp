/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BF55761EE904EA14AB18475C5ACF90C1C0D5B70ADC5176650F85B0A8E7C9FB51
 * Entry: 0x001739a0, Ghidra index: 4894, label: FUN_001739a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001739a0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  int *piVar12;
  
  iVar9 = FUN_000120f0();
  if (iVar9 != 0) {
    uVar10 = FUN_000120f0();
    piVar12 = (int *)(-(uint)((*(byte *)(uVar10 + 0x26) & 0x40) != 0) & uVar10);
    if (piVar12 != (int *)0x0) {
      puVar11 = (undefined4 *)(**(code **)(*piVar12 + 0x40))();
      uVar2 = puVar11[1];
      uVar3 = puVar11[2];
      uVar4 = puVar11[3];
      uVar1 = puVar11[8];
      uVar5 = puVar11[4];
      uVar6 = puVar11[5];
      uVar7 = puVar11[6];
      uVar8 = puVar11[7];
      *param_2 = *puVar11;
      param_2[1] = uVar2;
      param_2[2] = uVar3;
      param_2[3] = uVar4;
      param_2[8] = uVar1;
      param_2[4] = uVar5;
      param_2[5] = uVar6;
      param_2[6] = uVar7;
      param_2[7] = uVar8;
    }
  }
  return 0;
}
