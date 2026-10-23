/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2700FFB7F14BA3A8679314853598D8D1E97028F9FED986E8906DECD6484448A8
 * Entry: 0x0010a420, Ghidra index: 3426, label: FUN_0010a420
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010a420(void)

{
  int *piVar1;
  float *pfVar2;
  uint uVar3;
  byte bVar5;
  int in_EAX;
  float *pfVar4;
  int *piVar6;
  undefined1 uStack_18;
  byte bStack_15;
  float local_14;
  int *local_10;
  undefined4 uStack_c;
  int *local_8;
  float fStack_4;
  
  local_10 = (int *)0x0;
  local_14 = 0.0;
  if (*(int **)(in_EAX + 8) != (int *)0x0) {
    (**(code **)(**(int **)(in_EAX + 8) + 8))(&local_8);
    local_10 = local_8;
    local_14 = fStack_4;
  }
  if (*(undefined4 **)(in_EAX + 0x80) == (undefined4 *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)**(undefined4 **)(in_EAX + 0x80);
  }
  piVar1 = *(int **)(in_EAX + 0x80);
  local_8 = piVar1;
  FUN_000ef3a0(&uStack_c);
  if (piVar6 != piVar1) {
    do {
      pfVar2 = (float *)piVar6[2];
      if (((*(byte *)(in_EAX + 0x28) & 1) != 0) && (*(char *)(in_EAX + 0xa8) != '\0')) {
        FUN_0010a2e0(pfVar2,local_10,local_14);
      }
      if (CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(in_EAX + 0x97),*(undefined1 *)(in_EAX + 0x94)),
                            *(undefined1 *)(in_EAX + 0x95)),*(undefined1 *)(in_EAX + 0x96)) != 0) {
        uVar3 = *(uint *)(in_EAX + 0x94);
        bStack_15 = (byte)(uVar3 >> 0x18);
        bVar5 = (byte)(uStack_c >> 0x18);
        if (bVar5 < bStack_15) {
          bStack_15 = bVar5;
        }
        if ((uint)pfVar2[9] < 8) {
          pfVar4 = pfVar2 + 4;
        }
        else {
          pfVar4 = (float *)pfVar2[4];
        }
        uStack_18 = (undefined1)uVar3;
        FUN_000ccd20(*(undefined4 *)(in_EAX + 0xf0),(float)local_10 + *pfVar2 + 1.0,
                     local_14 + pfVar2[1] + 1.0,
                     ((uint)CONCAT11(bStack_15,uStack_18) * 0x100 + (uVar3 >> 8 & 0xff)) * 0x100 +
                     (uVar3 >> 0x10 & 0xff),pfVar4,pfVar2[2],0x3f800000,0,0,0xffffffff);
      }
      if ((uint)pfVar2[9] < 8) {
        pfVar4 = pfVar2 + 4;
      }
      else {
        pfVar4 = (float *)pfVar2[4];
      }
      FUN_000ccd20(*(undefined4 *)(in_EAX + 0xf0),(float)local_10 + *pfVar2,local_14 + pfVar2[1],
                   (((uint)(uStack_c._2_2_ >> 8) * 0x100 + (uStack_c & 0xff)) * 0x100 +
                   (uStack_c >> 8 & 0xff)) * 0x100 + (uStack_c._2_2_ & 0xff),pfVar4,pfVar2[2],
                   0x3f800000,*(undefined4 *)(in_EAX + 0xa0),*(undefined4 *)(in_EAX + 0xa4),
                   0xffffffff);
      piVar6 = (int *)*piVar6;
    } while (piVar6 != local_8);
  }
  return;
}
