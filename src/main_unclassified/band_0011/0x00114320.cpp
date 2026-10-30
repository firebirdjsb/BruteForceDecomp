/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 76EF2161D8043E14D2B86239CB21ACF7FE720621FD2C3FFED58C7D91DF243CE9
 * Entry: 0x00114320, Ghidra index: 3569, label: FUN_00114320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00114320(float param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *in_ECX;
  int iVar4;
  int extraout_ECX;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if ((float)in_ECX[0x1f5] != param_1) {
    (**(code **)(*in_ECX + 0xbc))();
    if (0.5 <= param_1) {
      if ((in_ECX[0x136] == 0) || (in_ECX[0x137] - in_ECX[0x136] >> 2 == 0)) {
        FUN_00114010(in_ECX);
        in_ECX[0x1f5] = (int)param_1;
      }
      if (((*(byte *)(in_ECX + 0x1f6) & 4) == 0) && (cVar1 = FUN_00129660(), cVar1 == '\0')) {
        piVar2 = (int *)in_ECX[0x14d];
        if (piVar2 != (int *)in_ECX[0x14e]) {
          do {
            iVar4 = *piVar2;
            piVar2 = piVar2 + 2;
            if (*(int *)(iVar4 + 0x10) == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = *(int *)(*(int *)(iVar4 + 0x10) + 100);
            }
            piVar3 = (int *)in_ECX[0x14d];
            if (piVar3 != (int *)in_ECX[0x14e]) {
              do {
                if (*piVar3 == iVar4) {
                  if (piVar3[1] != 0) {
                    FUN_001376b0();
                    FUN_002339d0(&uStack_38);
                    uStack_24 = *(undefined4 *)(extraout_ECX + 0x28);
                    uStack_c = uStack_38;
                    uStack_18 = uStack_34;
                    uStack_14 = uStack_30;
                    uStack_28 = *(undefined4 *)(extraout_ECX + 0x24);
                    uStack_20 = *(undefined4 *)(extraout_ECX + 0x2c);
                    uStack_10 = uStack_2c;
                    uStack_1c = 0;
                    FUN_002b39f0(0);
                    FUN_002b3c60();
                  }
                  break;
                }
                piVar3 = piVar3 + 2;
              } while (piVar3 != (int *)in_ECX[0x14e]);
            }
          } while (piVar2 != (int *)in_ECX[0x14e]);
        }
        *(byte *)(in_ECX + 0x1f6) = *(byte *)(in_ECX + 0x1f6) | 4;
      }
    }
    else {
      FUN_00114210(in_ECX);
      in_ECX[0x1f5] = (int)param_1;
    }
    iVar4 = in_ECX[0x1b];
    if ((iVar4 != 0) && (iVar4 != -1)) {
      *(uint *)(iVar4 + 0x44) = *(uint *)(iVar4 + 0x44) | 0x80;
    }
    *(byte *)((int)in_ECX + 0x26) = *(byte *)((int)in_ECX + 0x26) | 0x80;
  }
  return;
}
