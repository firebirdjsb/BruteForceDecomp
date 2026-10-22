/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0C22DD903379315444F209A76CDC48A3589C959E6BAAD5D0E4DE7F4066AE5D56
 * Entry: 0x00332b65, Ghidra index: 12406, label: FUN_00332b65
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b75d0;
/* WARNING: Removing unreachable block (ram,0x00332f1b) */
/* WARNING: Removing unreachable block (ram,0x00332d30) */

undefined4 FUN_00332b65(int param_1)

{
  byte *pbVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int in_ECX;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 uVar13;
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  iVar3 = param_1;
  local_8 = in_ECX;
  if (*(int *)(param_1 + 0x48) != 0) {
    iVar6 = param_1 + 0x38;
    iVar4 = FUN_0033136c(iVar6);
    *(int *)(iVar3 + 0x50) = iVar4;
    if (iVar4 == 0x1500f0) {
      FUN_00330ddd(iVar6,iVar3 + 0x54);
      *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) =
           *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) & 0xffefffff | 0x200000;
    }
  }
LAB_00332bb3:
  while (iVar6 = *(int *)(iVar3 + 0x10), iVar6 == 2) {
    iVar6 = *(int *)(in_ECX + 0xbdc);
    if (iVar6 == 1) goto LAB_0033329d;
    if ((iVar6 == 2) || (iVar4 = 4, iVar6 == 4)) {
      *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) =
           *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) & 0xf7ffffff | 0x4000000;
      *(undefined4 *)(iVar3 + 0x66c) = 0;
      *(undefined4 *)(iVar3 + 0x670) = 0;
      *(undefined4 *)(iVar3 + 0x674) = 0;
      *(undefined4 *)(iVar3 + 0x678) = 0;
      *(undefined4 *)(iVar3 + 0x67c) = 0;
      *(undefined4 *)(iVar3 + 0x678) = 0x528;
      *(int *)(iVar3 + 0x67c) = *(int *)(iVar3 + 0x694) + 0x1b8;
      *(int *)(iVar3 + 0x674) = *(int *)(iVar3 + 0x694);
      iVar6 = FUN_0033d2ef(*(undefined4 *)(in_ECX + 0xbd4),(undefined4 *)(iVar3 + 0x66c));
      if ((iVar6 < 0) || (*(int *)(iVar3 + 0x66c) == 0)) goto LAB_00332f55;
      XAPILIB__GetSystemTimeAsFileTime(&local_18);
      iVar6 = *(int *)(iVar3 + 0x694);
      if ((local_14 < *(int *)(iVar6 + 0x70)) ||
         ((local_14 <= *(int *)(iVar6 + 0x70) && (local_18 <= *(uint *)(iVar6 + 0x6c))))) {
        if (*(int *)(iVar3 + 0x670) != 0) {
          iVar6 = FUN_0033d73c(*(undefined4 *)(in_ECX + 0xbd4),*(undefined4 *)(in_ECX + 0xbd8),
                               (int *)(iVar3 + 0x66c));
          iVar4 = (iVar6 < 0) + 3;
          goto LAB_00332e9a;
        }
        iVar6 = FUN_0033121b(iVar6 + 0x2b8,iVar6 + 0x2c8);
        if (iVar6 != 0) {
          iVar6 = *(int *)(iVar3 + 0x694);
          local_c = *(int *)(iVar6 + 0x68);
          local_10 = *(uint *)(iVar6 + 100);
          if ((local_c <= local_14) && ((local_c < local_14 || (local_10 < local_18)))) {
            lVar11 = __allmul(*(uint *)(iVar6 + 0x6c) - local_10,
                              (*(int *)(iVar6 + 0x70) - local_c) -
                              (uint)(*(uint *)(iVar6 + 0x6c) < local_10),0x32,0);
            lVar12 = __allmul(local_18 - local_10,(local_14 - local_c) - (uint)(local_18 < local_10)
                              ,100,0);
            if (lVar11 < lVar12) goto LAB_00332d35;
          }
          if (*(int *)(iVar3 + 0x688) == 0) goto LAB_00332f31;
          *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) =
               *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) & 0xfbffffff | 0x8000000;
          *(undefined4 *)(iVar3 + 0x684) = 1;
          *(undefined4 *)(iVar3 + 0xc) = 0x1500f0;
          goto LAB_0033329d;
        }
      }
      uVar13 = *(undefined4 *)(in_ECX + 0xbd4);
LAB_00332f4e:
      FUN_0033d350(uVar13,iVar3 + 0x66c);
      goto LAB_00332f55;
    }
LAB_00332e9a:
    *(int *)(iVar3 + 0x10) = iVar4;
  }
  if (iVar6 == 3) {
    iVar6 = FUN_00330c3e(*(undefined4 *)(in_ECX + 0xbd8));
    if (iVar6 == 0x1500f0) {
      iVar6 = FUN_0033121b(*(int *)(iVar3 + 0x694) + 0x2b8,*(int *)(iVar3 + 0x694) + 0x2c8);
      if (iVar6 == 0) {
        uVar13 = *(undefined4 *)(in_ECX + 0xbd4);
        goto LAB_00332f4e;
      }
      iVar6 = *(int *)(iVar3 + 0x694);
      local_c = *(int *)(iVar6 + 0x68);
      local_10 = *(uint *)(iVar6 + 100);
      if ((local_c <= local_14) && ((local_c < local_14 || (local_10 < local_18)))) {
        lVar11 = __allmul(*(uint *)(iVar6 + 0x6c) - local_10,
                          (*(int *)(iVar6 + 0x70) - local_c) -
                          (uint)(*(uint *)(iVar6 + 0x6c) < local_10),0x32,0);
        lVar12 = __allmul(local_18 - local_10,(local_14 - local_c) - (uint)(local_18 < local_10),100
                          ,0);
        if (lVar11 < lVar12) {
LAB_00332d35:
          if (*(int *)(iVar3 + 0x688) == 0) {
            uVar13 = *(undefined4 *)(iVar3 + 0x68c);
            *(undefined4 *)(iVar3 + 0x68c) = 0;
            *(int *)(iVar3 + 0x690) = iVar6;
            *(undefined4 *)(iVar3 + 0x694) = uVar13;
            goto LAB_00332f31;
          }
          goto LAB_00332f55;
        }
      }
      if (*(int *)(iVar3 + 0x688) != 0) {
        *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) =
             *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) & 0xfbffffff | 0x8000000;
        *(undefined4 *)(iVar3 + 0x684) = 1;
        *(undefined4 *)(iVar3 + 0xc) = 0x1500f0;
        *(undefined4 *)(in_ECX + 0xbe0) = 1;
        goto LAB_0033329d;
      }
LAB_00332f31:
      pbVar1 = (byte *)(*(int *)(in_ECX + 0xb8) + 0x33);
      *pbVar1 = *pbVar1 & 0xf3;
LAB_00332f3b:
      *(undefined4 *)(iVar3 + 0x10) = 5;
    }
    else {
      if (-1 < iVar6) goto LAB_0033329d;
LAB_00332f55:
      *(undefined4 *)(iVar3 + 0x10) = 4;
    }
    goto LAB_00332bb3;
  }
  if (iVar6 == 4) {
    if (*(int *)(iVar3 + 0x688) == 0) {
      pbVar1 = (byte *)(*(int *)(in_ECX + 0xb8) + 0x33);
      *pbVar1 = *pbVar1 & 0xf3;
    }
    else {
      pbVar1 = (byte *)(*(int *)(in_ECX + 0xb8) + 0x33);
      *pbVar1 = *pbVar1 | 0xc;
    }
LAB_003330a7:
    if ((*(int *)(iVar3 + 0x688) != 0) || (*(int *)(iVar3 + 0x34) == 0)) {
      *(undefined4 *)(iVar3 + 0xc) = 0x80151916;
      goto LAB_0033329d;
    }
    if (*(int *)(iVar3 + 0x50) < 0) {
      pbVar1 = (byte *)(*(int *)(in_ECX + 0xb8) + 0x32);
      *pbVar1 = *pbVar1 | 0x30;
      iVar6 = *(int *)(iVar3 + 0x50);
      goto LAB_00333291;
    }
    if (*(int *)(iVar3 + 0x50) != 0x1500f0) goto LAB_0033329d;
    piVar7 = (int *)(iVar3 + 0x6c);
    if (*piVar7 == 0) {
      *(int *)(iVar3 + 0x70) = iVar3 + 0xac;
      *piVar7 = 0x5c0;
      FUN_0033f147(*(undefined4 *)(*(int *)(in_ECX + 0xb8) + 0x4c),piVar7,1,0,
                   *(undefined4 *)(iVar3 + 8),iVar3 + 0x74);
    }
    iVar6 = FUN_00332a47(iVar3);
    if (iVar6 < 0) goto LAB_00333291;
    uVar5 = FUN_0033f0ca(iVar3 + 0x74,0);
    if (-1 < (int)uVar5) {
      *(undefined4 *)(iVar3 + 0x10) = 8;
      goto LAB_0033329d;
    }
LAB_0033318e:
    iVar6 = *(int *)(in_ECX + 0xb8);
    uVar10 = *(uint *)(iVar6 + 0x30) & 0xffff9fff | 0x8000;
LAB_00333267:
    *(uint *)(iVar6 + 0x30) = uVar10;
    *(uint *)(*(int *)(in_ECX + 0xb8) + 0x34) = uVar5;
  }
  else {
    if (iVar6 == 5) goto LAB_003330a7;
    if (iVar6 != 8) {
      if ((((iVar6 != 99) || (*(int *)(iVar3 + 0xc) != 0x1500f0)) ||
          (bVar2 = false, *(int *)(iVar3 + 0x684) != 0)) ||
         ((*(int *)(iVar3 + 0x680) != 0 ||
          (((iVar6 = *(int *)(in_ECX + 0xbdc), iVar6 != 2 && (iVar6 != 4)) && (iVar6 != 6))))))
      goto LAB_0033329d;
      puVar8 = *(undefined4 **)(iVar3 + 0x694);
      if (puVar8[0xc] == 0) goto LAB_00332fd5;
      iVar6 = puVar8[0xc];
      piVar7 = puVar8 + 0x80;
      do {
        if (*piVar7 < 0) {
          bVar2 = true;
        }
        piVar7 = piVar7 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      if (!bVar2) {
LAB_00332fd5:
        puVar9 = (undefined4 *)(local_8 + 0xbe4);
        for (iVar6 = 0x1b8; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        FUN_003310cc(local_8 + 0xe9c,local_8 + 0xeac);
        iVar6 = FUN_0033def3(*(undefined4 *)(local_8 + 0xbd4),*(undefined4 *)(local_8 + 0xbd8),
                             local_8 + 0xbe4,local_8 + 0xd9c,1);
        in_ECX = local_8;
        if (-1 < iVar6) {
          *(undefined4 *)(local_8 + 0xbdc) = 3;
          *(undefined4 *)(local_8 + 0xbe0) = 1;
        }
      }
      *(undefined4 *)(iVar3 + 0x680) = 1;
      goto LAB_0033329d;
    }
    uVar5 = FUN_00330c3e(iVar3 + 0x74);
    if (uVar5 != 0x1500f0) {
      if ((int)uVar5 < 0) {
        iVar6 = *(int *)(in_ECX + 0xb8);
        uVar10 = *(uint *)(iVar6 + 0x30) & 0xffffbfff | 0xa000;
        goto LAB_00333267;
      }
      uVar5 = XAPILIB__GetTickCount();
      if (uVar5 < *(uint *)(iVar3 + 0x1c)) goto LAB_0033329d;
      *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + 1;
      if (*(uint *)(iVar3 + 0x18) < DAT_003b75d0) {
        iVar6 = FUN_00332a47(iVar3);
        if (iVar6 < 0) goto LAB_00333291;
      }
      else {
        pbVar1 = (byte *)(*(int *)(in_ECX + 0xb8) + 0x31);
        *pbVar1 = *pbVar1 | 0xe0;
        *(undefined4 *)(iVar3 + 0xc) = 0x8015190b;
      }
      goto LAB_0033329d;
    }
    param_1 = 0;
    FUN_0033eec2(iVar3 + 0x74,&param_1,0,0);
    uVar5 = FUN_0034107d(*(undefined4 *)(iVar3 + 0x34),iVar3 + 0xac,param_1,
                         *(undefined4 *)(iVar3 + 0x694));
    if ((uVar5 & 0xffff) == 0x25) {
      if (*(uint *)(iVar3 + 0x14) < 2) {
        *(uint *)(iVar3 + 0x14) = *(uint *)(iVar3 + 0x14) + 1;
        goto LAB_00332f3b;
      }
      iVar6 = *(int *)(in_ECX + 0xb8);
      uVar10 = *(uint *)(iVar6 + 0x30) & 0xffff7fff | 0x6000;
      goto LAB_00333267;
    }
    if (uVar5 == 0xc000006d) {
      uVar5 = FUN_0033f0ca(iVar3 + 0x74,0);
      if ((int)uVar5 < 0) goto LAB_0033318e;
      goto LAB_0033329d;
    }
    if (uVar5 == 0xc000009a) {
      *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) =
           *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) & 0xffffdfff | 0xc000;
      *(undefined4 *)(iVar3 + 0xc) = 0x80150008;
      goto LAB_0033329d;
    }
    if (-1 < (int)uVar5) {
      if (*(int *)(*(int *)(iVar3 + 0x694) + 0xd8) < 0) {
        iVar6 = *(int *)(in_ECX + 0xb8);
        *(uint *)(iVar6 + 0x30) = *(uint *)(iVar6 + 0x30) & 0xffff7fff | 0x6000;
        *(undefined4 *)(*(int *)(in_ECX + 0xb8) + 0x34) =
             *(undefined4 *)(*(int *)(iVar3 + 0x694) + 0xd8);
        iVar6 = *(int *)(*(int *)(iVar3 + 0x694) + 0xd8);
LAB_00333291:
        *(int *)(iVar3 + 0xc) = iVar6;
LAB_0033329d:
        if ((((*(int *)(iVar3 + 0xc) != 0) &&
             (*(undefined4 *)(iVar3 + 0x10) = 99, *(int *)(iVar3 + 0xc) < 0)) &&
            (iVar6 = *(int *)(in_ECX + 0xb8), *(int *)(iVar6 + 0x44) == 0)) &&
           (*(int *)(iVar3 + 0x690) != 0)) {
          piVar7 = (int *)(iVar3 + 0x694);
          *(uint *)(iVar6 + 0x30) = *(uint *)(iVar6 + 0x30) & 0xfbffffff | 0x8000000;
          if (*piVar7 != 0) {
            FUN_0033ea20(*piVar7);
            *piVar7 = 0;
          }
          iVar6 = *(int *)(iVar3 + 0x690);
          *(undefined4 *)(iVar3 + 0x690) = 0;
          *piVar7 = iVar6;
          *(undefined4 *)(iVar3 + 0x684) = 1;
          *(undefined4 *)(iVar3 + 0xc) = 0x1500f0;
        }
        return *(undefined4 *)(iVar3 + 0xc);
      }
      *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) =
           *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) & 0xffff5fff | 0x4000;
      *(undefined4 *)(iVar3 + 0xc) = 0x1500f0;
      *(undefined4 *)(iVar3 + 0x10) = 99;
      goto LAB_00332bb3;
    }
    iVar6 = *(int *)(in_ECX + 0xb8);
    *(uint *)(iVar6 + 0x30) = *(uint *)(iVar6 + 0x30) & 0xffff7fff | 0x6000;
    *(uint *)(*(int *)(in_ECX + 0xb8) + 0x34) = uVar5;
    uVar5 = uVar5 & 0xffff;
    if (((uVar5 == 0x14) || (uVar5 == 0x20)) || (uVar5 == 0x1f)) {
      *(undefined4 *)(iVar3 + 0xc) = 0x80151915;
      goto LAB_0033329d;
    }
  }
  *(undefined4 *)(iVar3 + 0xc) = 0x8015190a;
  goto LAB_0033329d;
}
