/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E9388D4FE47363653DF6366710FF06F991E2FF42900E584D020FC47E419B1FBD
 * Entry: 0x000b1d70, Ghidra index: 2134, label: FUN_000b1d70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000b1d70(float param_1,byte param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  int *unaff_ESI;
  undefined4 uStack_4;
  
  if ((float)unaff_ESI[0x13] <= 0.0) {
    unaff_ESI[0x13] = 0x3c23d70a;
  }
  else {
    param_1 = param_1 + (float)unaff_ESI[0x16];
  }
  if (param_1 <= 0.0) {
    (**(code **)(*unaff_ESI + 0x2c))();
    if (param_2 == 0) {
      uVar5 = 10;
      uStack_4 = 0xa00;
      uVar6 = 0x5a;
    }
    else {
      puVar3 = (undefined4 *)FUN_000b8820();
      uVar1 = *puVar3;
      puVar4 = (undefined1 *)FUN_000b8820();
      uVar6 = puVar4[2];
      iVar2 = unaff_ESI[0xb];
      uVar5 = *puVar4;
      *(undefined1 *)(iVar2 + 0x3a) = puVar4[1];
      *(undefined1 *)(iVar2 + 0x39) = uVar6;
      uStack_4._0_1_ = (undefined1)uVar1;
      *(undefined1 *)(iVar2 + 0x38) = uVar5;
      uStack_4._2_1_ = (undefined1)((uint)uVar1 >> 0x10);
      uVar6 = (undefined1)uStack_4;
      uVar5 = uStack_4._2_1_;
      uStack_4 = uVar1;
    }
  }
  else {
    (**(code **)(*unaff_ESI + 0x2c))();
    if (param_2 == 0) {
      puVar3 = (undefined4 *)FUN_000b87a0();
      uVar1 = *puVar3;
      uStack_4._2_1_ = (undefined1)((uint)uVar1 >> 0x10);
      uVar6 = (char)uVar1;
      uVar5 = uStack_4._2_1_;
      uStack_4 = uVar1;
    }
    else {
      uStack_4 = 0xbe00;
      uVar6 = 0x1e;
      uVar5 = 0x1e;
    }
  }
  iVar2 = unaff_ESI[0xb];
  *(undefined1 *)(iVar2 + 0x38) = uVar6;
  *(undefined1 *)(iVar2 + 0x39) = uVar5;
  *(undefined1 *)(iVar2 + 0x3a) = uStack_4._1_1_;
  unaff_ESI[0x16] = (int)param_1;
  *(byte *)(unaff_ESI + 0x17) = *(byte *)(unaff_ESI + 0x17) & 0xfc | param_2 & 1;
  *(byte *)((int)unaff_ESI + 0x13) = *(byte *)((int)unaff_ESI + 0x13) & 0xfe;
  return;
}
