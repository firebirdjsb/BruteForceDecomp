/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5D3EC82CE0415A761160548D390F1DE4660B90536FD743B1ABD9E19013C5956F
 * Entry: 0x00021840, Ghidra index: 189, label: FUN_00021840
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a400c;
undefined4 FUN_00021840(int param_1,undefined1 *param_2)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  int iStack_3a0;
  byte bStack_39c;
  undefined4 uStack_398;
  undefined **ppuStack_394;
  undefined1 *puStack_390;
  undefined4 uStack_38c;
  undefined1 auStack_374 [884];
  
  piVar6 = (int *)FUN_000120f0();
  if (piVar6[0x167] == 0) {
    return 0;
  }
  iVar7 = *(int *)(piVar6[0x167] + 0x28);
  if (iVar7 != 0) {
    iVar10 = *(int *)(iVar7 + 4);
    if ((((iVar10 == 0) || ((uint)(*(int *)(iVar7 + 8) - iVar10 >> 3) < 2)) ||
        (*(int **)(iVar10 + 0xc) == (int *)0x0)) ||
       ((piVar6 == *(int **)(iVar10 + 0xc) || (cVar5 = FUN_00020230(), cVar5 == '\0')))) {
      if (*(int *)(param_1 + 0x6c0) != 0) {
        FUN_001611d0();
      }
      iVar7 = (**(code **)(*piVar6 + 0x40))();
      FUN_00020170(piVar6,iVar7 + 0x24,0x40000000,0x41900000);
      uVar8 = FUN_0001bb00();
      FUN_000204e0(uVar8);
      puStack_390 = auStack_374;
      ppuStack_394 = &PTR_FUN_003a400c;
      uStack_38c = 10;
      iVar7 = FUN_0011dfa0(&ppuStack_394,0);
      iVar7 = FUN_000594a0(*(undefined4 *)(iVar7 + 0xc));
      if (iVar7 != 0) {
        bStack_39c = bStack_39c & 0xfc;
        uStack_3a4 = 0;
        uStack_3a8 = 0;
        uStack_3ac = 0;
        iStack_3a0 = iVar7;
        cVar5 = FUN_00041660(&uStack_3ac,param_1 + 0x930,0);
        if (cVar5 != '\0') {
          FUN_00058b40();
          FUN_00058740();
          FUN_00025730(param_1 + 0x930,1,1);
          FUN_00022ba0();
          *(undefined4 *)(param_1 + 0x6ac) = 0xc;
          *param_2 = 1;
          *(undefined4 *)(param_2 + 0x1c) = 4;
          uStack_398 = 1;
          FUN_0003f0e0(0);
          piVar9 = (int *)FUN_0005e250();
          if (piVar6 == piVar9) {
            FUN_0005e290(0,1);
          }
          iVar10 = (**(code **)(**(int **)(param_2 + 0x2c) + 0x40))();
          fVar2 = *(float *)(iVar10 + 0x2c) - *(float *)(iVar7 + 0x1c);
          fVar3 = *(float *)(iVar10 + 0x28) - *(float *)(iVar7 + 0x18);
          fVar4 = *(float *)(iVar10 + 0x24) - *(float *)(iVar7 + 0x14);
          *(float *)(param_1 + 0x734) = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
          return uStack_398;
        }
      }
    }
    *(undefined4 *)(param_1 + 0x6ac) = 7;
    if (*(int *)(param_1 + 0x6c0) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0x6c0) + 0x28);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    *(undefined4 *)(param_1 + 0x6c0) = 0;
    *param_2 = 1;
    return 0;
  }
  return 0;
}
