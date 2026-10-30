/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 30F1291CBAF2C2666FA11B1172323BD6D2FB3D259BC283AEDF0074D168169D18
 * Entry: 0x0027d3f0, Ghidra index: 9001, label: FUN_0027d3f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0027d3f0(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  int in_EAX;
  byte bVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint local_c;
  ushort *local_8;
  int local_4;
  
  uVar6 = 0xffffffff;
  iVar4 = 7;
  iVar5 = 4;
  if (*(ushort *)(in_ECX + 2) == 0) {
    iVar4 = 0x8a;
    iVar5 = 3;
  }
  if (-1 < param_1) {
    local_8 = (ushort *)(in_ECX + 6);
    local_4 = param_1 + 1;
    iVar8 = 0;
    local_c = (uint)*(ushort *)(in_ECX + 2);
    do {
      uVar9 = (uint)*local_8;
      iVar7 = iVar8 + 1;
      if ((iVar4 <= iVar7) || (local_c != uVar9)) {
        if (iVar7 < iVar5) {
          do {
            uVar6 = (uint)*(ushort *)(in_EAX + 0xa76 + local_c * 4);
            iVar4 = *(int *)(in_EAX + 0x16b4);
            if ((int)(0x10 - uVar6) < iVar4) {
              uVar1 = *(ushort *)(in_EAX + 0xa74 + local_c * 4);
              *(ushort *)(in_EAX + 0x16b0) =
                   *(ushort *)(in_EAX + 0x16b0) | uVar1 << ((byte)iVar4 & 0x1f);
              *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                   *(undefined1 *)(in_EAX + 0x16b0);
              iVar4 = *(int *)(in_EAX + 0x14) + 1;
              *(int *)(in_EAX + 0x14) = iVar4;
              *(undefined1 *)(iVar4 + *(int *)(in_EAX + 8)) = *(undefined1 *)(in_EAX + 0x16b1);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              iVar4 = *(int *)(in_EAX + 0x16b4) + -0x10;
              *(ushort *)(in_EAX + 0x16b0) =
                   uVar1 >> (0x10U - (char)*(int *)(in_EAX + 0x16b4) & 0x1f);
            }
            else {
              *(ushort *)(in_EAX + 0x16b0) =
                   *(ushort *)(in_EAX + 0x16b0) |
                   *(short *)(in_EAX + 0xa74 + local_c * 4) << ((byte)iVar4 & 0x1f);
            }
            iVar7 = iVar7 + -1;
            *(uint *)(in_EAX + 0x16b4) = iVar4 + uVar6;
          } while (iVar7 != 0);
        }
        else if (local_c == 0) {
          iVar4 = *(int *)(in_EAX + 0x16b4);
          bVar3 = (byte)iVar4;
          if (iVar7 < 0xb) {
            uVar1 = *(ushort *)(in_EAX + 0xaba);
            if ((int)(0x10 - (uint)uVar1) < iVar4) {
              uVar2 = *(ushort *)(in_EAX + 0xab8);
              *(ushort *)(in_EAX + 0x16b0) = *(ushort *)(in_EAX + 0x16b0) | uVar2 << (bVar3 & 0x1f);
              *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                   *(undefined1 *)(in_EAX + 0x16b0);
              iVar4 = *(int *)(in_EAX + 0x14) + 1;
              *(int *)(in_EAX + 0x14) = iVar4;
              *(undefined1 *)(iVar4 + *(int *)(in_EAX + 8)) = *(undefined1 *)(in_EAX + 0x16b1);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              iVar4 = *(int *)(in_EAX + 0x16b4) + -0x10;
              *(ushort *)(in_EAX + 0x16b0) =
                   uVar2 >> (0x10U - (char)*(int *)(in_EAX + 0x16b4) & 0x1f);
            }
            else {
              *(ushort *)(in_EAX + 0x16b0) =
                   *(ushort *)(in_EAX + 0x16b0) | *(short *)(in_EAX + 0xab8) << (bVar3 & 0x1f);
            }
            iVar4 = iVar4 + (uint)uVar1;
            iVar8 = iVar8 + -2;
            *(int *)(in_EAX + 0x16b4) = iVar4;
            if (iVar4 < 0xe) {
              *(ushort *)(in_EAX + 0x16b0) =
                   *(ushort *)(in_EAX + 0x16b0) | (ushort)(iVar8 << ((byte)iVar4 & 0x1f));
              iVar4 = iVar4 + 3;
LAB_0027d8a0:
              *(int *)(in_EAX + 0x16b4) = iVar4;
            }
            else {
              *(ushort *)(in_EAX + 0x16b0) =
                   *(ushort *)(in_EAX + 0x16b0) | (ushort)(iVar8 << ((byte)iVar4 & 0x1f));
              *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                   *(undefined1 *)(in_EAX + 0x16b0);
              iVar4 = *(int *)(in_EAX + 0x14) + 1;
              *(int *)(in_EAX + 0x14) = iVar4;
              *(undefined1 *)(iVar4 + *(int *)(in_EAX + 8)) = *(undefined1 *)(in_EAX + 0x16b1);
              iVar4 = *(int *)(in_EAX + 0x16b4);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              *(int *)(in_EAX + 0x16b4) = iVar4 + -0xd;
              *(ushort *)(in_EAX + 0x16b0) = (ushort)iVar8 >> (0x10U - (char)iVar4 & 0x1f);
            }
          }
          else {
            uVar1 = *(ushort *)(in_EAX + 0xabe);
            if ((int)(0x10 - (uint)uVar1) < iVar4) {
              uVar2 = *(ushort *)(in_EAX + 0xabc);
              *(ushort *)(in_EAX + 0x16b0) = *(ushort *)(in_EAX + 0x16b0) | uVar2 << (bVar3 & 0x1f);
              *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                   *(undefined1 *)(in_EAX + 0x16b0);
              iVar4 = *(int *)(in_EAX + 0x14) + 1;
              *(int *)(in_EAX + 0x14) = iVar4;
              *(undefined1 *)(iVar4 + *(int *)(in_EAX + 8)) = *(undefined1 *)(in_EAX + 0x16b1);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              iVar4 = *(int *)(in_EAX + 0x16b4) + -0x10;
              *(ushort *)(in_EAX + 0x16b0) =
                   uVar2 >> (0x10U - (char)*(int *)(in_EAX + 0x16b4) & 0x1f);
            }
            else {
              *(ushort *)(in_EAX + 0x16b0) =
                   *(ushort *)(in_EAX + 0x16b0) | *(short *)(in_EAX + 0xabc) << (bVar3 & 0x1f);
            }
            iVar4 = iVar4 + (uint)uVar1;
            iVar8 = iVar8 + -10;
            *(int *)(in_EAX + 0x16b4) = iVar4;
            if (iVar4 < 10) {
              *(ushort *)(in_EAX + 0x16b0) =
                   *(ushort *)(in_EAX + 0x16b0) | (ushort)(iVar8 << ((byte)iVar4 & 0x1f));
              iVar4 = iVar4 + 7;
              goto LAB_0027d8a0;
            }
            *(ushort *)(in_EAX + 0x16b0) =
                 *(ushort *)(in_EAX + 0x16b0) | (ushort)(iVar8 << ((byte)iVar4 & 0x1f));
            *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                 *(undefined1 *)(in_EAX + 0x16b0);
            iVar4 = *(int *)(in_EAX + 0x14) + 1;
            *(int *)(in_EAX + 0x14) = iVar4;
            *(undefined1 *)(iVar4 + *(int *)(in_EAX + 8)) = *(undefined1 *)(in_EAX + 0x16b1);
            iVar4 = *(int *)(in_EAX + 0x16b4);
            *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
            *(int *)(in_EAX + 0x16b4) = iVar4 + -9;
            *(ushort *)(in_EAX + 0x16b0) = (ushort)iVar8 >> (0x10U - (char)iVar4 & 0x1f);
          }
        }
        else {
          if (local_c != uVar6) {
            uVar6 = (uint)*(ushort *)(in_EAX + 0xa76 + local_c * 4);
            iVar4 = *(int *)(in_EAX + 0x16b4);
            if ((int)(0x10 - uVar6) < iVar4) {
              uVar1 = *(ushort *)(in_EAX + 0xa74 + local_c * 4);
              *(ushort *)(in_EAX + 0x16b0) =
                   *(ushort *)(in_EAX + 0x16b0) | uVar1 << ((byte)iVar4 & 0x1f);
              *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                   *(undefined1 *)(in_EAX + 0x16b0);
              iVar4 = *(int *)(in_EAX + 0x14) + 1;
              *(int *)(in_EAX + 0x14) = iVar4;
              *(undefined1 *)(iVar4 + *(int *)(in_EAX + 8)) = *(undefined1 *)(in_EAX + 0x16b1);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              iVar4 = *(int *)(in_EAX + 0x16b4) + -0x10;
              *(ushort *)(in_EAX + 0x16b0) =
                   uVar1 >> (0x10U - (char)*(int *)(in_EAX + 0x16b4) & 0x1f);
            }
            else {
              *(ushort *)(in_EAX + 0x16b0) =
                   *(ushort *)(in_EAX + 0x16b0) |
                   *(short *)(in_EAX + 0xa74 + local_c * 4) << ((byte)iVar4 & 0x1f);
            }
            *(uint *)(in_EAX + 0x16b4) = iVar4 + uVar6;
            iVar7 = iVar8;
          }
          uVar1 = *(ushort *)(in_EAX + 0xab6);
          iVar4 = *(int *)(in_EAX + 0x16b4);
          if ((int)(0x10 - (uint)uVar1) < iVar4) {
            uVar2 = *(ushort *)(in_EAX + 0xab4);
            *(ushort *)(in_EAX + 0x16b0) =
                 *(ushort *)(in_EAX + 0x16b0) | uVar2 << ((byte)iVar4 & 0x1f);
            *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                 *(undefined1 *)(in_EAX + 0x16b0);
            iVar4 = *(int *)(in_EAX + 0x14) + 1;
            *(int *)(in_EAX + 0x14) = iVar4;
            *(undefined1 *)(iVar4 + *(int *)(in_EAX + 8)) = *(undefined1 *)(in_EAX + 0x16b1);
            *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
            iVar4 = *(int *)(in_EAX + 0x16b4) + -0x10;
            *(ushort *)(in_EAX + 0x16b0) = uVar2 >> (0x10U - (char)*(int *)(in_EAX + 0x16b4) & 0x1f)
            ;
          }
          else {
            *(ushort *)(in_EAX + 0x16b0) =
                 *(ushort *)(in_EAX + 0x16b0) | *(short *)(in_EAX + 0xab4) << ((byte)iVar4 & 0x1f);
          }
          iVar4 = iVar4 + (uint)uVar1;
          iVar7 = iVar7 + -3;
          *(int *)(in_EAX + 0x16b4) = iVar4;
          if (iVar4 < 0xf) {
            *(ushort *)(in_EAX + 0x16b0) =
                 *(ushort *)(in_EAX + 0x16b0) | (ushort)(iVar7 << ((byte)iVar4 & 0x1f));
            iVar4 = iVar4 + 2;
            goto LAB_0027d8a0;
          }
          *(ushort *)(in_EAX + 0x16b0) =
               *(ushort *)(in_EAX + 0x16b0) | (ushort)(iVar7 << ((byte)iVar4 & 0x1f));
          *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
               *(undefined1 *)(in_EAX + 0x16b0);
          iVar4 = *(int *)(in_EAX + 0x14) + 1;
          *(int *)(in_EAX + 0x14) = iVar4;
          *(undefined1 *)(iVar4 + *(int *)(in_EAX + 8)) = *(undefined1 *)(in_EAX + 0x16b1);
          iVar4 = *(int *)(in_EAX + 0x16b4);
          *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
          *(int *)(in_EAX + 0x16b4) = iVar4 + -0xe;
          *(ushort *)(in_EAX + 0x16b0) = (ushort)iVar7 >> (0x10U - (char)iVar4 & 0x1f);
        }
        iVar7 = 0;
        uVar6 = local_c;
        if (uVar9 == 0) {
          iVar4 = 0x8a;
          iVar5 = 3;
        }
        else if (local_c == uVar9) {
          iVar4 = 6;
          iVar5 = 3;
        }
        else {
          iVar4 = 7;
          iVar5 = 4;
        }
      }
      local_8 = local_8 + 2;
      local_4 = local_4 + -1;
      iVar8 = iVar7;
      local_c = uVar9;
    } while (local_4 != 0);
  }
  return;
}
