/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DD9C7AD9BE2653224CC7E9FAD7BF528A52BDFCCA6798951193B1D71EEFFB6A2D
 * Entry: 0x00116340, Ghidra index: 3584, label: FUN_00116340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_00116340(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  float unaff_EDI;
  float10 fVar3;
  float fVar4;
  undefined1 auStack_50 [4];
  float local_4c;
  float fStack_44;
  undefined1 auStack_38 [20];
  undefined1 auStack_24 [4];
  float fStack_20;
  int *piStack_4;
  
  fVar3 = (float10)1.0;
  iVar1 = *(int *)(param_2 + 0x8c);
  local_4c = (float)fVar3;
  if (((*(int *)(iVar1 + 0x54) == 1) && (piVar2 = *(int **)(iVar1 + 0x148), piVar2 != (int *)0x0))
     && (*(int *)(piVar2[3] + 4) == 3)) {
    (**(code **)(*(int *)(iVar1 + 0x48) + 0xc))();
    (**(code **)(*param_1 + 0xac))(auStack_24,auStack_50);
    (**(code **)(*piStack_4 + 0x40))();
    FUN_00039510();
    (**(code **)(*piVar2 + 0xac))(auStack_38,&stack0xffffffa4);
    (**(code **)(*piVar2 + 0x40))();
    FUN_00039510();
    (**(code **)(*(int *)(iVar1 + 0x48) + 0x14))();
    FUN_000621c0();
    if ((fStack_44 < 0.0) && (FUN_000621c0(), fStack_44 < fStack_20)) {
      fVar4 = ABS(fStack_20 / fStack_44);
      if (ABS(fStack_20 / fStack_44) <= 0.0) {
        fVar4 = 0.0;
      }
      if (1.0 <= fVar4) {
        fVar4 = 1.0;
      }
      return (float10)fVar4;
    }
    fVar3 = (float10)unaff_EDI;
  }
  return fVar3;
}
