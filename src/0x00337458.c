/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DDAFD3EA285B2AD7BFAB0450AC623F9EAA86BB8E431D3C81A546F0D5DE49A953
 * Entry: 0x00337458, Ghidra index: 12461, label: FUN_00337458
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00337458(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  undefined1 local_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_10 = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x14) * 0xb8 + 0x12ec + in_ECX) = 1;
  local_8 = in_ECX;
  if ((*(int *)(param_1 + 0x5c) != 0) &&
     (iVar3 = FUN_00330c3e(*(int *)(param_1 + 0x5c)), iVar3 == 0x1500f1)) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) * 0xb8 + 0x12e8 + in_ECX) = 1;
  }
  iVar4 = local_8;
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 == 5) {
LAB_00337616:
    iVar5 = *(int *)(param_1 + 0x14) * 0xb8 + in_ECX;
    iVar3 = 2;
    bVar9 = true;
    piVar7 = (int *)(iVar5 + 0x1300);
    piVar8 = (int *)(iVar5 + 0x12f8);
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar9 = *piVar7 == *piVar8;
      piVar7 = piVar7 + 1;
      piVar8 = piVar8 + 1;
    } while (bVar9);
    if (!bVar9) {
      FUN_0033699b(*(undefined4 *)(iVar5 + 0x1310));
      iVar3 = *(int *)(param_1 + 0x14) * 0xb8 + iVar4;
      *(undefined4 *)(iVar3 + 0x1300) = *(undefined4 *)(iVar3 + 0x12f8);
      *(undefined4 *)(iVar3 + 0x1304) = *(undefined4 *)(iVar3 + 0x12fc);
      *(undefined4 *)(*(int *)(param_1 + 0x14) * 0xb8 + 0x12e8 + iVar4) = 1;
    }
    if (*(int *)(param_1 + 0x18) == 0) {
      if ((*(int *)(*(int *)(param_1 + 0x14) * 0xb8 + 0x12f0 + iVar4) == 0) &&
         (bVar2 = FUN_00347699(*(int *)(param_1 + 0x14)), (bVar2 & 3) == 0)) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) * 0xb8 + 0x12f0 + iVar4) = 1;
        *(undefined4 *)(*(int *)(param_1 + 0x14) * 0xb8 + 0x12e8 + iVar4) = 1;
        XAPILIB__SetEvent(*(undefined4 *)(param_1 + 8));
        in_ECX = local_8;
        goto LAB_00337716;
      }
      if ((*(int *)(param_1 + 0x34) == 0) ||
         (iVar3 = XAPILIB__GetTickCount(), 29999 < (uint)(iVar3 - *(int *)(param_1 + 0x34)))) {
        *(undefined4 *)(param_1 + 0x34) = 0;
        iVar3 = FUN_00335924(param_1);
        if (iVar3 < 0) {
          uVar6 = XAPILIB__GetTickCount();
          *(undefined4 *)(param_1 + 0x34) = uVar6;
          in_ECX = local_8;
          goto LAB_0033770e;
        }
        if (*(int *)(param_1 + 0x18) != 0) {
          XAPILIB__SetEvent(*(undefined4 *)(param_1 + 8));
        }
      }
    }
    if (*(undefined4 **)(param_1 + 0x18) == (undefined4 *)0x0) {
LAB_0033782a:
      if (*(int *)(param_1 + 0x10) == 6) {
        *(undefined4 *)(param_1 + 0x10) = 8;
        XAPILIB__SetEvent(*(undefined4 *)(param_1 + 8));
        *(undefined4 *)(*(int *)(param_1 + 0x14) * 0xb8 + 0x12e8 + iVar4) = 0;
        in_ECX = local_8;
        goto LAB_00337716;
      }
      if (((*(int *)(param_1 + 0x34) == 0) ||
          (iVar3 = XAPILIB__GetTickCount(), in_ECX = local_8,
          29999 < (uint)(iVar3 - *(int *)(param_1 + 0x34)))) &&
         (iVar3 = FUN_00335924(param_1), in_ECX = local_8, iVar3 < 0)) goto LAB_003378a5;
      goto LAB_0033787e;
    }
    iVar4 = FUN_00330c3e(**(undefined4 **)(param_1 + 0x18));
    iVar3 = 0;
    in_ECX = local_8;
    if (iVar4 != 0) {
      if (iVar4 == 0x1500f0) {
        iVar4 = FUN_003385e8(**(undefined4 **)(param_1 + 0x18),&local_c,0,&local_18,local_20,
                             &local_10,0);
        if ((local_c == 0) || (local_10 != 200)) {
          uVar6 = XAPILIB__GetTickCount();
          iVar4 = -0x7feafff9;
LAB_003377cb:
          *(undefined4 *)(param_1 + 0x34) = uVar6;
        }
        if (-1 < iVar4) goto LAB_003377d2;
      }
      else {
        if (iVar4 < 0) {
          uVar6 = XAPILIB__GetTickCount();
          goto LAB_003377cb;
        }
LAB_003377d2:
        iVar3 = local_8;
        iVar4 = FUN_00337110(local_c,local_18,local_14);
        if (iVar4 < 0) {
          uVar6 = XAPILIB__GetTickCount();
          *(undefined4 *)(param_1 + 0x34) = uVar6;
        }
        else {
          *(undefined4 *)(*(int *)(param_1 + 0x14) * 0xb8 + 0x12e8 + iVar3) = 1;
        }
      }
      iVar4 = local_8;
      if (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0) {
        FUN_00330c53(**(undefined4 **)(param_1 + 0x18));
        FUN_0033ea20(*(undefined4 *)(param_1 + 0x18));
        *(undefined4 *)(param_1 + 0x18) = 0;
        iVar4 = local_8;
      }
      goto LAB_0033782a;
    }
  }
  else {
    if (iVar3 == 6) {
      if (*(int *)(param_1 + 0x18) == 0) {
        *(undefined4 *)(param_1 + 0x10) = 8;
        XAPILIB__SetEvent(*(undefined4 *)(param_1 + 8));
        goto LAB_00337716;
      }
      goto LAB_00337616;
    }
    if (iVar3 == 8) {
      iVar3 = FUN_003353e9(param_1);
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0x10) = 9;
        goto LAB_003374fe;
      }
      XAPILIB__SetEvent(*(undefined4 *)(param_1 + 8));
      goto LAB_0033770e;
    }
    if (iVar3 == 9) {
LAB_003374fe:
      iVar3 = FUN_00330c3e(*(undefined4 *)(in_ECX + 0x15c0));
      if (iVar3 == 0x1500f0) {
        iVar3 = *(int *)(*(int *)(param_1 + 0x14) * 0xb8 + 0x1310 + in_ECX);
        if (iVar3 != 0) {
          iVar4 = FUN_00335afb(iVar3,0);
          if (iVar4 == 0) {
            *(undefined4 *)(iVar3 + 8) = 0;
          }
          puVar1 = (undefined4 *)(*(int *)(param_1 + 0x14) * 0xb8 + 0x1310 + in_ECX);
          *(undefined4 *)(param_1 + 0x30) = *puVar1;
          *puVar1 = 0;
          iVar3 = FUN_0033def3(*(undefined4 *)(in_ECX + 0x15bc),*(undefined4 *)(in_ECX + 0x15c0),
                               *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x30),1);
          if (iVar3 < 0) goto LAB_003378a5;
        }
        *(undefined4 *)(param_1 + 0x10) = 10;
LAB_00337581:
        iVar3 = FUN_00330c3e(*(undefined4 *)(in_ECX + 0x15c0));
        if (iVar3 == 0x1500f0) {
          if (*(int *)(param_1 + 0x30) != 0) {
            FUN_0033e9ea(*(int *)(param_1 + 0x30));
            *(undefined4 *)(param_1 + 0x30) = 0;
          }
          iVar3 = FUN_0033542b(param_1);
          if (iVar3 < 0) goto LAB_003378a5;
          *(undefined4 *)(param_1 + 0x10) = 0xb;
LAB_003375c8:
          iVar3 = FUN_00330c3e(*(undefined4 *)(in_ECX + 0x15c0));
          if (iVar3 == 0x1500f0) {
            FUN_00335451(param_1);
            *(undefined4 *)(param_1 + 0x10) = 0xc;
LAB_003375f2:
            iVar3 = 0x1500f0;
            goto LAB_003378a5;
          }
        }
      }
      goto LAB_0033770e;
    }
    if (iVar3 == 10) goto LAB_00337581;
    if (iVar3 == 0xb) goto LAB_003375c8;
    if (iVar3 == 0xc) goto LAB_003375f2;
LAB_0033787e:
    iVar3 = 0;
  }
LAB_0033770e:
  if (iVar3 < 0) {
LAB_003378a5:
    FUN_003356c8(param_1);
    return iVar3;
  }
LAB_00337716:
  iVar3 = *(int *)(param_1 + 0x14) * 0xb8 + in_ECX;
  piVar7 = (int *)(iVar3 + 0x12e8);
  if (((*piVar7 == 1) && (*(int *)(iVar3 + 0x12f0) != 0)) && (*(int *)(param_1 + 0x10) == 5)) {
    *piVar7 = 0;
    iVar3 = 0x1500f1;
  }
  else {
    iVar3 = 0;
  }
  *(uint *)(*(int *)(param_1 + 0x14) * 0xb8 + 0x12ec + in_ECX) =
       (uint)(*(int *)(param_1 + 0x10) != 5);
  return iVar3;
}
