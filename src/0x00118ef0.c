/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B9211FFB1D3A3AACAE08787D694E30C1E69DBC2D0819B40A2BE5FBBEEC9E2FA5
 * Entry: 0x00118ef0, Ghidra index: 3603, label: FUN_00118ef0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00118ef0(int param_1,int *param_2,int param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  local_4 = 0;
  if (0 < param_3) {
    do {
      uVar1 = *(uint *)(param_4 + local_4 * 4);
      if (uVar1 < 0xfaea99ca) {
        if (uVar1 == 0xfaea99c9) {
          if ((*(undefined4 **)(param_1 + 0x404) == (undefined4 *)0x0) || (param_2[3] != 99)) {
            if (*param_2 == *(int *)(param_1 + 0x6c)) {
              *(undefined4 *)(param_1 + 0x6c) = 0;
            }
            else {
              piVar2 = (int *)(param_1 + 0x78);
              iVar4 = 3;
              do {
                if ((*param_2 == *piVar2) && (*piVar2 != 0)) {
                  *piVar2 = 0;
                  piVar2[3] = 0;
                }
                piVar2 = piVar2 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
              if (*param_2 == *(int *)(param_1 + 0x98)) {
                *(undefined4 *)(param_1 + 0x98) = 0;
              }
            }
          }
          else {
            (**(code **)**(undefined4 **)(param_1 + 0x404))();
            *(undefined4 *)(param_1 + 0x404) = 0;
          }
          if (*(int *)(param_1 + 0x40) == 4) {
            *(undefined4 *)(param_1 + 0x40) = 0;
          }
        }
        else if (uVar1 == 0xf2702e0c) {
          FUN_0012b630(param_1 + -0x1b0,0);
        }
        else if (uVar1 != 0xf376b9e4) goto LAB_00118fbc;
      }
      else if (uVar1 == 0xffe3b4c4) {
        if (*param_2 == *(int *)(param_1 + 0x6c)) {
          *(byte *)(param_1 + 0xb1) = *(byte *)(param_1 + 0xb1) | 2;
        }
      }
      else {
LAB_00118fbc:
        iVar4 = *param_2;
        if ((iVar4 == 0) || (iVar4 == *(int *)(param_1 + 0x6c))) {
LAB_00118fdf:
          FUN_00117660(param_1 + -0x1b0,uVar1);
        }
        else {
          iVar3 = 0;
          piVar2 = (int *)(param_1 + 0x78);
          do {
            if (iVar4 == *piVar2) goto LAB_00118fdf;
            iVar3 = iVar3 + 1;
            piVar2 = piVar2 + 1;
          } while (iVar3 < 3);
        }
      }
      local_4 = local_4 + 1;
    } while (local_4 < param_3);
  }
  return;
}
