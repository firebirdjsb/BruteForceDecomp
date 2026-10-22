/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3FA80533F11B87BE09C9DCB4E35540B24AC3FFB54983160C6402BB2748E9880E
 * Entry: 0x0033233c, Ghidra index: 12403, label: FUN_0033233c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x00332797) */
/* WARNING: Removing unreachable block (ram,0x0033253f) */

undefined4 FUN_0033233c(int *param_1)

{
  byte *pbVar1;
  int *piVar2;
  uint *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int in_ECX;
  int iVar9;
  undefined4 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 uVar13;
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  iVar5 = (int)param_1;
  local_8 = in_ECX;
LAB_0033234d:
  do {
    iVar6 = *(int *)(iVar5 + 0x10);
    bVar4 = false;
    if (iVar6 == 2) {
      iVar6 = *(int *)(in_ECX + 0x664);
      if (iVar6 == 1) goto LAB_0033293d;
      if ((iVar6 != 2) && (iVar9 = 4, iVar6 != 4)) {
LAB_003325f1:
        *(int *)(iVar5 + 0x10) = iVar9;
        goto LAB_0033234d;
      }
      *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) =
           *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) & 0xfdffffff | 0x1000000;
      puVar7 = (undefined4 *)FUN_0033ea0c(0x568,0x2014);
      *(undefined4 **)(iVar5 + 0xb0) = puVar7;
      if (puVar7 == (undefined4 *)0x0) {
        puVar3 = (uint *)(*(int *)(in_ECX + 0xb8) + 0x30);
        *puVar3 = *puVar3 | 8;
        *(undefined4 *)(iVar5 + 0xc) = 0x80150008;
        goto LAB_0033293d;
      }
      *puVar7 = *(undefined4 *)(iVar5 + 0x14);
      puVar7[1] = *(undefined4 *)(iVar5 + 0x18);
      uVar8 = 0;
      if (*(int *)(in_ECX + 0x538) != 0) {
        param_1 = (int *)(in_ECX + 0x53c);
        do {
          puVar7 = (undefined4 *)*param_1;
          iVar6 = *(int *)(iVar5 + 0xb0);
          param_1 = param_1 + 1;
          *(undefined4 *)(iVar6 + 8 + uVar8 * 8) = *puVar7;
          *(undefined4 *)(iVar6 + 0xc + uVar8 * 8) = puVar7[1];
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)(in_ECX + 0x538));
      }
      *(undefined4 *)(iVar5 + 0x8c) = 0;
      *(undefined4 *)(iVar5 + 0x90) = 0;
      *(undefined4 *)(iVar5 + 0x94) = 0;
      *(undefined4 *)(iVar5 + 0x98) = 0;
      *(undefined4 *)(iVar5 + 0x9c) = 0;
      *(undefined4 *)(iVar5 + 0x98) = 0x4b8;
      *(int *)(iVar5 + 0x9c) = *(int *)(iVar5 + 0xb0) + 0xb0;
      *(int *)(iVar5 + 0x94) = *(int *)(iVar5 + 0xb0);
      iVar6 = FUN_0033d2ef(*(undefined4 *)(in_ECX + 0x65c),(undefined4 *)(iVar5 + 0x8c));
      if ((-1 < iVar6) && (*(int *)(iVar5 + 0x8c) != 0)) {
        XAPILIB__GetSystemTimeAsFileTime(&local_18);
        iVar6 = *(int *)(iVar5 + 0xb0);
        if ((local_14 < *(int *)(iVar6 + 0x34)) ||
           ((local_14 <= *(int *)(iVar6 + 0x34) && (local_18 <= *(uint *)(iVar6 + 0x30))))) {
          if (*(int *)(iVar5 + 0x90) != 0) {
            iVar6 = FUN_0033d73c(*(undefined4 *)(in_ECX + 0x65c),*(undefined4 *)(in_ECX + 0x660),
                                 (int *)(iVar5 + 0x8c));
            iVar9 = (iVar6 < 0) + 3;
            goto LAB_003325f1;
          }
          iVar6 = FUN_0033121b(iVar6 + 0x140,iVar6 + 0x150);
          if (iVar6 != 0) {
            iVar6 = *(int *)(iVar5 + 0xb0);
            local_c = *(int *)(iVar6 + 0x2c);
            local_10 = *(uint *)(iVar6 + 0x28);
            if ((local_c <= local_14) && ((local_c < local_14 || (local_10 < local_18)))) {
              lVar11 = __allmul(*(uint *)(iVar6 + 0x30) - local_10,
                                (*(int *)(iVar6 + 0x34) - local_c) -
                                (uint)(*(uint *)(iVar6 + 0x30) < local_10),0x32,0);
              lVar12 = __allmul(local_18 - local_10,
                                (local_14 - local_c) - (uint)(local_18 < local_10),100,0);
              if (lVar11 < lVar12) goto LAB_00332544;
            }
            if (*(int *)(iVar5 + 0xa8) == 0) goto LAB_00332566;
            *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) =
                 *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) & 0xfeffffff | 0x2000000;
            *(undefined4 *)(iVar5 + 0xa4) = 1;
            *(undefined4 *)(iVar5 + 0xc) = 0x1500f0;
            goto LAB_0033293d;
          }
        }
        uVar13 = *(undefined4 *)(in_ECX + 0x65c);
        goto LAB_003327e2;
      }
      *(undefined4 *)(iVar5 + 0x10) = 4;
      bVar4 = true;
    }
    else {
      if (iVar6 == 3) {
        iVar6 = FUN_00330c3e(*(undefined4 *)(in_ECX + 0x660));
        if (iVar6 == 0x1500f0) {
          iVar6 = FUN_0033121b(*(int *)(iVar5 + 0xb0) + 0x140,*(int *)(iVar5 + 0xb0) + 0x150);
          if (iVar6 != 0) {
            iVar6 = *(int *)(iVar5 + 0xb0);
            local_c = *(int *)(iVar6 + 0x2c);
            local_10 = *(uint *)(iVar6 + 0x28);
            if ((local_14 < local_c) || ((local_14 <= local_c && (local_18 <= local_10)))) {
LAB_0033257c:
              if (*(int *)(iVar5 + 0xa8) != 0) {
                *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) =
                     *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) & 0xfeffffff | 0x2000000;
                *(undefined4 *)(iVar5 + 0xa4) = 1;
                *(undefined4 *)(iVar5 + 0xc) = 0x1500f0;
                *(undefined4 *)(in_ECX + 0x668) = 1;
                goto LAB_0033293d;
              }
            }
            else {
              lVar11 = __allmul(*(uint *)(iVar6 + 0x30) - local_10,
                                (*(int *)(iVar6 + 0x34) - local_c) -
                                (uint)(*(uint *)(iVar6 + 0x30) < local_10),0x32,0);
              lVar12 = __allmul(local_18 - local_10,
                                (local_14 - local_c) - (uint)(local_18 < local_10),100,0);
              if (lVar12 <= lVar11) goto LAB_0033257c;
LAB_00332544:
              if (*(int *)(iVar5 + 0xa8) != 0) goto LAB_0033254d;
              *(undefined4 *)(iVar5 + 0xb0) = 0;
              *(int *)(iVar5 + 0xac) = iVar6;
            }
LAB_00332566:
            pbVar1 = (byte *)(*(int *)(in_ECX + 0xb8) + 0x33);
            *pbVar1 = *pbVar1 & 0xfc;
            *(undefined4 *)(iVar5 + 0x10) = 5;
            goto LAB_0033234d;
          }
          uVar13 = *(undefined4 *)(in_ECX + 0x65c);
LAB_003327e2:
          FUN_0033d350(uVar13,iVar5 + 0x8c);
        }
        else if (-1 < iVar6) goto LAB_0033293d;
LAB_0033254d:
        *(undefined4 *)(iVar5 + 0x10) = 4;
        goto LAB_0033234d;
      }
      if (iVar6 != 4) {
        if (iVar6 == 5) goto LAB_0033243f;
        if (iVar6 != 7) {
          if ((((iVar6 == 99) && (*(int *)(iVar5 + 0xc) == 0x1500f0)) &&
              (*(int *)(iVar5 + 0xa4) == 0)) &&
             ((*(int *)(iVar5 + 0xa0) == 0 &&
              (((iVar6 = *(int *)(in_ECX + 0x664), iVar6 == 2 || (iVar6 == 4)) || (iVar6 == 6))))))
          {
            puVar7 = *(undefined4 **)(iVar5 + 0xb0);
            puVar10 = (undefined4 *)(local_8 + 0x66c);
            for (iVar6 = 0x15a; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar10 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar10 = puVar10 + 1;
            }
            FUN_003310cc(local_8 + 0x7ac,local_8 + 0x7bc);
            iVar6 = FUN_0033def3(*(undefined4 *)(local_8 + 0x65c),*(undefined4 *)(local_8 + 0x660),
                                 local_8 + 0x66c,local_8 + 0x71c,1);
            if (-1 < iVar6) {
              *(undefined4 *)(local_8 + 0x664) = 3;
              *(undefined4 *)(local_8 + 0x668) = 1;
            }
            *(undefined4 *)(iVar5 + 0xa0) = 1;
            in_ECX = local_8;
          }
          goto LAB_0033293d;
        }
        piVar2 = (int *)(iVar5 + 0x88);
        if (*piVar2 == 0) {
LAB_003323f9:
          if (*piVar2 != 0) goto LAB_0033293d;
          if (*(int *)(iVar5 + 0x84) != *(int *)(in_ECX + 0x538)) {
            *(undefined4 *)(iVar5 + 0x10) = 99;
            *(undefined4 *)(iVar5 + 0xc) = 0x1500f0;
            goto LAB_0033234d;
          }
          iVar6 = FUN_00331a19(1,*(undefined4 *)(iVar5 + 0xb0),iVar5 + 0x14,
                               *(undefined4 *)(iVar5 + 8),iVar5 + 0x88);
          if (-1 < iVar6) {
            *(undefined4 *)(iVar5 + 0xb0) = 0;
            *(int *)(iVar5 + 0x84) = *(int *)(iVar5 + 0x84) + 1;
            goto LAB_0033293d;
          }
        }
        else {
          iVar6 = FUN_00331694(*piVar2);
          if (iVar6 == 0x1500f0) {
            FUN_00330e05(*piVar2,iVar5 + 0xb0);
            FUN_00330c53(*piVar2);
            *piVar2 = 0;
            puVar3 = (uint *)(iVar5 + 0x84);
            *puVar3 = *puVar3 + 1;
            if (*puVar3 < *(uint *)(in_ECX + 0x538)) {
              iVar6 = FUN_00331a19(0,*(undefined4 *)(iVar5 + 0xb0),
                                   *(undefined4 *)(in_ECX + 0x53c + *puVar3 * 4),
                                   *(undefined4 *)(iVar5 + 8),piVar2);
              if (iVar6 < 0) goto LAB_00332491;
              *(undefined4 *)(iVar5 + 0xb0) = 0;
            }
            goto LAB_003323f9;
          }
          if (-1 < iVar6) goto LAB_003323f9;
          if ((*(uint *)(in_ECX + 0x538) < *(uint *)(iVar5 + 0x84)) && (iVar6 == -0x7feae6f8)) {
            iVar6 = -0x7feae6ec;
          }
        }
LAB_00332491:
        *(int *)(iVar5 + 0xc) = iVar6;
        goto LAB_0033293d;
      }
      if (*(int *)(iVar5 + 0xa8) == 0) {
        pbVar1 = (byte *)(*(int *)(in_ECX + 0xb8) + 0x33);
        *pbVar1 = *pbVar1 & 0xfc;
      }
      else {
        pbVar1 = (byte *)(*(int *)(in_ECX + 0xb8) + 0x33);
        *pbVar1 = *pbVar1 | 3;
      }
LAB_0033243f:
      if (*(int *)(iVar5 + 0xa8) != 0) {
        *(undefined4 *)(iVar5 + 0xc) = 0x80151916;
        goto LAB_0033293d;
      }
      iVar6 = *(int *)(iVar5 + 0xb0);
      if (iVar6 != 0) {
        FUN_0033ea20(iVar6);
        *(int *)(iVar5 + 0xb0) = 0;
      }
      if (*(int *)(in_ECX + 0x538) == 0) {
        bVar4 = true;
      }
      else {
        iVar6 = FUN_00331a19(0,0,*(undefined4 *)(in_ECX + 0x53c + *(int *)(iVar5 + 0x84) * 4),
                             *(undefined4 *)(iVar5 + 8),iVar5 + 0x88);
        if (iVar6 < 0) goto LAB_00332491;
      }
      *(undefined4 *)(iVar5 + 0x10) = 7;
    }
    if (!bVar4) {
LAB_0033293d:
      if ((((*(int *)(iVar5 + 0xc) != 0) &&
           (*(undefined4 *)(iVar5 + 0x10) = 99, *(int *)(iVar5 + 0xc) < 0)) &&
          (iVar6 = *(int *)(in_ECX + 0xb8), *(int *)(iVar6 + 0x44) == 0)) &&
         (*(int *)(iVar5 + 0xac) != 0)) {
        piVar2 = (int *)(iVar5 + 0xb0);
        *(uint *)(iVar6 + 0x30) = *(uint *)(iVar6 + 0x30) & 0xfeffffff | 0x2000000;
        if (*piVar2 != 0) {
          FUN_0033ea20(*piVar2);
          *piVar2 = 0;
        }
        iVar6 = *(int *)(iVar5 + 0xac);
        *(undefined4 *)(iVar5 + 0xac) = 0;
        *piVar2 = iVar6;
        *(undefined4 *)(iVar5 + 0xa4) = 1;
        *(undefined4 *)(iVar5 + 0xc) = 0x1500f0;
      }
      return *(undefined4 *)(iVar5 + 0xc);
    }
  } while( true );
}
