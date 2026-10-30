/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BE37C455B522530D5375528B397E6444DDF9061B04C9DC0A12758FC433F8E661
 * Entry: 0x003391c5, Ghidra index: 12489, label: FUN_003391c5
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_003391c5(undefined4 param_1,int param_2,byte *param_3)

{
  byte *pbVar1;
  int iVar2;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar2 = param_2;
  if (param_2 == 0) {
    iVar2 = 0x4000001e;
  }
  iVar2 = FUN_00343bd0(param_1,iVar2,&local_14,&local_1c);
  if ((iVar2 == 0) ||
     (iVar2 = FUN_00343bd0(local_14,0x10,&local_8,&local_18), pbVar1 = param_3, iVar2 == 0)) {
    return false;
  }
  *param_3 = 0;
  iVar2 = FUN_00343bd0(local_8,0x80000000,&param_2,&local_c);
  if ((((iVar2 != 0) && (iVar2 = FUN_003444d6(param_2,2,pbVar1 + 4), iVar2 != 0)) &&
      (iVar2 = FUN_00343dcb(local_8,param_2,local_c), iVar2 != 0)) &&
     (((iVar2 = FUN_00343bd0(local_8,0x80000001,&param_2,&local_c), iVar2 != 0 &&
       (iVar2 = FUN_003444d6(param_2,2,pbVar1 + 8), iVar2 != 0)) &&
      (iVar2 = FUN_00343dcb(local_8,param_2,local_c), iVar2 != 0)))) {
    FUN_00343c3f(local_8,&local_10);
    if (local_10 == -0x7ffffffe) {
      *pbVar1 = *pbVar1 | 0x80;
      iVar2 = FUN_00343bd0(local_8,0x80000002,&param_2,&local_c);
      if (iVar2 == 0) {
        return false;
      }
      iVar2 = FUN_00344c2e(param_2,0x18,pbVar1 + 0xc);
      if (iVar2 == 0) {
        return false;
      }
      iVar2 = FUN_00343dcb(local_8,param_2,local_c);
      if (iVar2 == 0) {
        return false;
      }
    }
    FUN_00343c3f(local_8,&local_10);
    if (local_10 == -0x7ffffffd) {
      *pbVar1 = *pbVar1 | 0x40;
      iVar2 = FUN_00343bd0(local_8,0x80000003,&param_2,&local_c);
      if (iVar2 == 0) {
        return false;
      }
      iVar2 = FUN_003444d6(param_2,2,pbVar1 + 0x1c);
      if (iVar2 == 0) {
        return false;
      }
      iVar2 = FUN_00343dcb(local_8,param_2,local_c);
      if (iVar2 == 0) {
        return false;
      }
    }
    iVar2 = FUN_00343bd0(local_8,0x80000004,&param_2,&local_c);
    if (((iVar2 != 0) && (iVar2 = FUN_00344c2e(param_2,0x18,pbVar1 + 0x20), iVar2 != 0)) &&
       ((((iVar2 = FUN_00343dcb(local_8,param_2,local_c), iVar2 != 0 &&
          (((iVar2 = FUN_00343bd0(local_8,0x80000005,&param_2,&local_c), iVar2 != 0 &&
            (iVar2 = FUN_003444d6(param_2,2,pbVar1 + 0x30), iVar2 != 0)) &&
           (iVar2 = FUN_00343dcb(local_8,param_2,local_c), iVar2 != 0)))) &&
         ((iVar2 = FUN_00343bd0(local_8,0x80000006,&param_2,&local_c), iVar2 != 0 &&
          (iVar2 = FUN_003444d6(param_2,2,pbVar1 + 0x34), iVar2 != 0)))) &&
        (iVar2 = FUN_00343dcb(local_8,param_2,local_c), iVar2 != 0)))) {
      FUN_00343c3f(local_8,&local_10);
      if (local_10 == -0x7ffffff9) {
        *pbVar1 = *pbVar1 | 0x20;
        iVar2 = FUN_00343bd0(local_8,0x80000007,&param_2,&local_c);
        if (iVar2 == 0) {
          return false;
        }
        iVar2 = FUN_003445aa(param_2,0x1b,pbVar1 + 0x38);
        if (iVar2 == 0) {
          return false;
        }
        iVar2 = FUN_00343dcb(local_8,param_2,local_c);
        if (iVar2 == 0) {
          return false;
        }
      }
      FUN_00343c3f(local_8,&local_10);
      if (local_10 == -0x7ffffff8) {
        *pbVar1 = *pbVar1 | 0x10;
        iVar2 = FUN_00343bd0(local_8,0x80000008,&param_2,&local_c);
        if (iVar2 == 0) {
          return false;
        }
        iVar2 = FUN_00338ff2(param_2);
        if (iVar2 == 0) {
          return false;
        }
        iVar2 = FUN_00343dcb(local_8,param_2,local_c);
        if (iVar2 == 0) {
          return false;
        }
      }
      iVar2 = FUN_00343bd0(local_8,0x80000009,&param_2,&local_c);
      if (((iVar2 != 0) && (iVar2 = FUN_003445aa(param_2,0x1b,pbVar1 + 0x44), iVar2 != 0)) &&
         ((iVar2 = FUN_00343dcb(local_8,param_2,local_c), iVar2 != 0 &&
          (((iVar2 = FUN_00343bd0(local_8,0x8000000a,&param_2,&local_c), iVar2 != 0 &&
            (iVar2 = FUN_00338ff2(param_2), iVar2 != 0)) &&
           (iVar2 = FUN_00343dcb(local_8,param_2,local_c), iVar2 != 0)))))) {
        FUN_00343c3f(local_8,&local_10);
        if (local_10 == -0x7ffffff5) {
          *pbVar1 = *pbVar1 | 8;
          iVar2 = FUN_00343bd0(local_8,0x8000000b,&param_2,&local_c);
          if (iVar2 == 0) {
            return false;
          }
          iVar2 = FUN_003443b5(param_2,0x1b,pbVar1 + 0x50);
          if (iVar2 == 0) {
            return false;
          }
          iVar2 = FUN_00343dcb(local_8,param_2,local_c);
          if (iVar2 == 0) {
            return false;
          }
        }
        FUN_00343c3f(local_8,&local_10);
        if (local_10 == -0x7ffffff4) {
          *pbVar1 = *pbVar1 | 4;
          iVar2 = FUN_00343bd0(local_8,0x8000000c,&param_2,&local_c);
          if (iVar2 == 0) {
            return false;
          }
          iVar2 = FUN_003449e9(param_2,4,pbVar1 + 0x58);
          if (iVar2 == 0) {
            return false;
          }
          iVar2 = FUN_00343dcb(local_8,param_2,local_c);
          if (iVar2 == 0) {
            return false;
          }
        }
        iVar2 = FUN_00343dcb(local_14,local_8,local_18);
        if (iVar2 != 0) {
          iVar2 = FUN_00343dcb(param_1,local_14,local_1c);
          return iVar2 != 0;
        }
      }
    }
  }
  return false;
}
