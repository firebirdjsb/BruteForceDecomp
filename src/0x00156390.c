/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 20381204BC1FC391629423CA8B4ADA62DEA902C886BD4420E77DA35A10AD5102
 * Entry: 0x00156390, Ghidra index: 4477, label: FUN_00156390
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x001566f1) */
/* WARNING: Removing unreachable block (ram,0x00156761) */
/* WARNING: Removing unreachable block (ram,0x001567dd) */
/* WARNING: Removing unreachable block (ram,0x001564c4) */
/* WARNING: Removing unreachable block (ram,0x0015651d) */
/* WARNING: Removing unreachable block (ram,0x00156641) */
/* WARNING: Removing unreachable block (ram,0x0015664e) */

char FUN_00156390(undefined4 param_1,uint *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  int *piVar5;
  int *in_ECX;
  int *piVar6;
  uint uVar7;
  int iVar8;
  char local_39;
  uint local_34;
  undefined1 auStack_30 [48];
  
  local_39 = FUN_001552e0(param_1,param_2,param_3);
  if (local_39 == '\0') {
    bVar2 = *(byte *)(in_ECX + 0x1c) >> 3 & 1;
    if (*param_2 == 0x271950d) {
      if ((char)param_1 == '\0') {
        bVar2 = *param_3;
      }
      else {
        *param_3 = bVar2;
      }
      local_39 = '\x01';
    }
    bVar1 = *(byte *)(in_ECX + 0x1c);
    bVar3 = bVar1 >> 4 & 1;
    *(byte *)(in_ECX + 0x1c) = bVar1 ^ (bVar2 << 3 ^ bVar1) & 8;
    if ((local_39 == '\0') && (*param_2 == 0x17a554bf)) {
      if ((char)param_1 == '\0') {
        bVar3 = *param_3;
        local_39 = '\x01';
      }
      else {
        *param_3 = bVar3;
        local_39 = '\x01';
      }
    }
    bVar2 = *(byte *)((int)in_ECX + 0x71) >> 6 & 1;
    *(byte *)(in_ECX + 0x1c) =
         *(byte *)(in_ECX + 0x1c) ^ (bVar3 << 4 ^ *(byte *)(in_ECX + 0x1c)) & 0x10;
    if ((local_39 == '\0') && (*param_2 == 0xc3eae3f)) {
      if ((char)param_1 == '\0') {
        bVar2 = *param_3;
      }
      else {
        *param_3 = bVar2;
      }
      local_39 = '\x01';
    }
    *(byte *)((int)in_ECX + 0x71) =
         *(byte *)((int)in_ECX + 0x71) ^ (bVar2 << 6 ^ *(byte *)((int)in_ECX + 0x71)) & 0x40;
    if (local_39 == '\0') {
      uVar7 = *param_2;
      if (uVar7 == 0x1f07654b) {
        if ((char)param_1 != '\0') {
          param_3[0] = 0xdc;
          param_3[1] = 0x86;
          param_3[2] = 0xa7;
          param_3[3] = 0x17;
        }
        local_39 = '\x01';
      }
      else {
        if (uVar7 == 0x1905f381) {
          local_34 = uVar7;
          FUN_0006ebc0(param_1,&local_34,param_2);
        }
        if (*param_2 == 0x17939727) {
          local_34 = 0x17939727;
          FUN_0006ebc0(param_1,&local_34,param_2);
        }
      }
      if ((local_39 == '\0') && (*param_2 == 0xb8f1337)) {
        if ((char)param_1 == '\0') {
          in_ECX[0x44] = *(int *)param_3;
          local_39 = '\x01';
        }
        else {
          *(int *)param_3 = in_ECX[0x44];
          local_39 = '\x01';
        }
      }
    }
    if (local_39 == '\0') {
      if (*param_2 == 0xed287bc6) {
        if ((char)param_1 == '\0') {
          in_ECX[0x45] = *(int *)param_3;
        }
        else {
          *(int *)param_3 = in_ECX[0x45];
        }
        local_39 = '\x01';
      }
      if (local_39 == '\0') {
        if (*param_2 == 0xfe0c09e3) {
          if ((char)param_1 == '\0') {
            in_ECX[0x54] = *(int *)param_3;
          }
          else {
            *(int *)param_3 = in_ECX[0x54];
          }
          local_39 = '\x01';
        }
        if (local_39 == '\0') {
          if (*param_2 == 0x1eb6a442) {
            if ((char)param_1 == '\0') {
              in_ECX[0x11] = *(int *)param_3;
              local_39 = '\x01';
            }
            else {
              *(int *)param_3 = in_ECX[0x11];
              local_39 = '\x01';
            }
          }
          else {
            if (*param_2 == 0xe7ab1d8b) {
              iVar8 = (**(code **)(*in_ECX + 0x40))();
              FUN_0003d6c0(auStack_30,iVar8,iVar8 + 0x24);
              local_34 = 0xe7ab1d8b;
              FUN_0006eb80(param_1,&local_34);
            }
            if (*param_2 == 0x1c3d93fa) {
              (**(code **)(in_ECX[0x55] + 4))();
              local_34 = 0x1c3d93fa;
              FUN_0006ebc0(param_1,&local_34,param_2);
            }
            if (*param_2 == 0xf4c909b0) {
              (**(code **)(in_ECX[0x55] + 8))();
              local_34 = 0xf4c909b0;
              FUN_0006ebc0(param_1,&local_34,param_2);
            }
            if (*param_2 == 0x242a8bd) {
              (**(code **)(in_ECX[0x55] + 0xc))();
              local_34 = 0x242a8bd;
              FUN_0006ebc0(param_1,&local_34,param_2);
            }
          }
        }
      }
    }
    if (local_39 == '\0') {
      uVar7 = *param_2;
      if (uVar7 == 0xf77963d) {
        if ((char)param_1 != '\0') {
          FUN_0010bc40();
          return '\x01';
        }
        FUN_0010bc40();
        return '\x01';
      }
      if (uVar7 == 0x1e6b3e1a) {
        uVar7 = 0;
        piVar5 = in_ECX + 0x21;
        do {
          if ((*(int *)(param_3 + 4) == 0) ||
             ((uint)(*(int *)(param_3 + 8) - *(int *)(param_3 + 4) >> 2) <= uVar7)) {
            FUN_0015b7c0(param_3);
          }
          FUN_000d6ac0(in_ECX[2],piVar5,0);
          uVar7 = uVar7 + 1;
          piVar5 = piVar5 + 2;
        } while ((int)uVar7 < 8);
        return '\x01';
      }
      if (uVar7 == 0xf2990a77) {
        if ((*(byte *)(in_ECX[3] + 0xc) & 2) == 0) {
          *(undefined2 *)(in_ECX + 0x1f) = 0xffff;
        }
        else {
          if (*(int *)(param_3 + 4) == 0) {
            sVar4 = 0;
          }
          else {
            sVar4 = (short)(*(int *)(param_3 + 8) - *(int *)(param_3 + 4) >> 2);
          }
          *(short *)(in_ECX + 0x1f) = sVar4;
          if (0 < sVar4) {
            iVar8 = (int)sVar4;
            piVar5 = (int *)thunk_FUN_002ea01d(iVar8 * 8 + 4);
            if (piVar5 == (int *)0x0) {
              piVar6 = (int *)0x0;
            }
            else {
              piVar6 = piVar5 + 1;
              *piVar5 = iVar8;
              FUN_0001fe40(piVar6,8,iVar8,FUN_000c72a0);
            }
            uVar7 = 0;
            in_ECX[0x20] = (int)piVar6;
            if (0 < (short)in_ECX[0x1f]) {
              do {
                if ((*(int *)(param_3 + 4) == 0) ||
                   ((uint)(*(int *)(param_3 + 8) - *(int *)(param_3 + 4) >> 2) <= uVar7)) {
                  FUN_0015b7c0(param_3);
                }
                FUN_000d6ac0(in_ECX[2],in_ECX[0x20] + uVar7 * 8,0);
                uVar7 = uVar7 + 1;
              } while ((int)uVar7 < (int)(short)in_ECX[0x1f]);
              return '\x01';
            }
          }
        }
        return '\x01';
      }
    }
  }
  return local_39;
}
