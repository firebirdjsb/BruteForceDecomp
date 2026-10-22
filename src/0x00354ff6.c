/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 31EC306F27706C405DB259A41CAECD4741A111A766267B17FB2215AA7D6B7302
 * Entry: 0x00354ff6, Ghidra index: 13117, label: FUN_00354ff6
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00354ff6(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,uint *param_5,
                 int param_6,int param_7)

{
  byte bVar1;
  byte bVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int local_c;
  int local_8;
  
  puVar3 = param_5;
  local_c = (((byte)param_5[2] & 0xf0) >> 2) - 0x14;
  iVar4 = FUN_00346c3a(param_4,*(undefined4 *)(param_2 + 0xc),param_3,1,
                       *(byte *)((int)param_5 + 9) & 2);
  if ((((byte)*(uint *)(param_1 + 8) & 7) < 4) && ((*(uint *)(param_1 + 8) & 0x2000000) == 0)) {
    if (iVar4 == 0) {
      return;
    }
    if ((*(uint *)(iVar4 + 0xc) & 0x2000000) == 0) {
      return;
    }
  }
  if (iVar4 != 0) {
    bVar1 = *(byte *)(iVar4 + 0x7c);
    if ((3 < bVar1) && ((*(byte *)((int)puVar3 + 9) & 7) == 0)) {
      iVar4 = FUN_0035493f(iVar4,puVar3,param_6,param_7);
LAB_00355084:
      if (iVar4 == 0) {
        return;
      }
      if (*(uint *)(iVar4 + 0x88) == 0) {
        return;
      }
      if ((*(uint *)(iVar4 + 0x88) < (uint)(*(int *)(iVar4 + 0xcc) << 1)) &&
         (*(int *)(iVar4 + 200) != 0)) {
        FUN_0034c35a(iVar4 + 0x6c,*(undefined4 *)(local_8 + 0x1d8));
        return;
      }
      FUN_00353aaf(iVar4);
      return;
    }
    if (bVar1 != 0) {
      bVar2 = *(byte *)((int)puVar3 + 9);
      param_5 = (uint *)CONCAT13(bVar2,param_5._0_3_);
      if (bVar1 == 1) {
        if ((bVar2 & 4) != 0) {
          return;
        }
        if ((bVar2 & 0x10) != 0) goto LAB_00355193;
        if ((bVar2 & 2) == 0) {
          return;
        }
        iVar5 = FUN_00354f4a(iVar4,puVar3,*(undefined4 *)(param_2 + 0xc),param_3,param_6 - local_c,
                             local_c);
      }
      else {
        if (bVar1 != 2) {
          uVar6 = *puVar3;
          uVar6 = (uVar6 & 0xff0000 | uVar6 >> 0x10) >> 8 | (uVar6 << 0x10 | uVar6 & 0xff00) << 8;
          iVar5 = FUN_0035303b(iVar4,uVar6,(bVar2 & 1) + uVar6 + (bVar2 >> 1 & 1) + param_7,&param_1
                               ,&local_c);
          if (iVar5 == 0) {
            if (((uint)param_5 & 0x4000000) == 0) {
              *(int *)(iVar4 + 0x88) = *(int *)(iVar4 + 0x88) + 0x20000;
            }
            goto LAB_00355084;
          }
          if (((uint)param_5 & 0x4000000) != 0) goto LAB_00355163;
          if (((uint)param_5 & 0x2000000) == 0) {
            if (((uint)param_5 & 0x10000000) == 0) {
              return;
            }
            if (*(char *)(iVar4 + 0x7c) == '\x03') {
              uVar6 = puVar3[1];
              uVar6 = (uVar6 & 0xff0000 | uVar6 >> 0x10) >> 8 |
                      (uVar6 << 0x10 | uVar6 & 0xff00) << 8;
              if ((uVar6 == *(uint *)(iVar4 + 0x9c) || (int)(uVar6 - *(uint *)(iVar4 + 0x9c)) < 0)
                 || (0 < (int)(uVar6 - *(int *)(iVar4 + 0xa0)))) goto LAB_00355193;
              FUN_00353d20(iVar4,puVar3);
            }
            iVar4 = FUN_0035493f(iVar4,puVar3,param_6,param_7);
            if (iVar4 == 0) {
              return;
            }
            if ((*(byte *)((int)puVar3 + 9) & 1) != 0) {
              FUN_00353c57(iVar4,local_c + -1);
            }
            goto LAB_00355084;
          }
          if (uVar6 != param_1) {
            return;
          }
          FUN_00353845(iVar4,0x80072746);
          goto LAB_00355193;
        }
        if ((bVar2 & 0x10) != 0) {
          uVar6 = puVar3[1];
          uVar6 = (uVar6 & 0xff0000 | uVar6 >> 0x10) >> 8 | (uVar6 << 0x10 | uVar6 & 0xff00) << 8;
          if ((uVar6 == *(uint *)(iVar4 + 0x9c) || (int)(uVar6 - *(uint *)(iVar4 + 0x9c)) < 0) ||
             (0 < (int)(uVar6 - *(int *)(iVar4 + 0xa0)))) goto LAB_00355193;
        }
        if ((bVar2 & 4) != 0) {
          if ((bVar2 & 0x10) == 0) {
            return;
          }
LAB_00355163:
          FUN_00353845(iVar4,0x80072746);
          return;
        }
        if ((bVar2 & 2) == 0) {
          return;
        }
        iVar5 = FUN_00354393(iVar4,puVar3,param_6 - local_c,local_c);
      }
      if (iVar5 != 0) goto LAB_00355084;
    }
  }
LAB_00355193:
  bVar1 = *(byte *)((int)puVar3 + 9);
  if ((bVar1 & 4) == 0) {
    if ((bVar1 & 0x10) == 0) {
      uVar6 = *puVar3;
      iVar5 = (bVar1 & 1) +
              (bVar1 >> 1 & 1) + param_7 +
              ((uVar6 & 0xff0000 | uVar6 >> 0x10) >> 8 | (uVar6 << 0x10 | uVar6 & 0xff00) << 8);
      uVar6 = 0;
      param_6 = CONCAT31(param_6._1_3_,0x10);
    }
    else {
      uVar6 = puVar3[1];
      iVar5 = 0;
      uVar6 = (uVar6 & 0xff0000 | uVar6 >> 0x10) >> 8 | (uVar6 << 0x10 | uVar6 & 0xff00) << 8;
      param_6 = (uint)param_6._1_3_ << 8;
    }
    FUN_003539cf(iVar4,*(undefined4 *)(param_2 + 0xc),param_4,param_3,uVar6,iVar5,param_6);
  }
  return;
}
