/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3CD5312141F5C3785748CA8DDB6F725EA659FFA25FCCD4C61C6D7C608F122E22
 * Entry: 0x00339d91, Ghidra index: 12496, label: FUN_00339d91
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_00339d91(undefined4 param_1)

{
  int in_EAX;
  int iVar1;
  byte *in_ECX;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (in_EAX == 0) {
    in_EAX = 0x10;
  }
  iVar1 = FUN_00343bd0(param_1,in_EAX,&local_c,&local_18);
  if (iVar1 == 0) {
    return false;
  }
  *in_ECX = 0;
  iVar1 = FUN_00343bd0(local_c,0x80000000,&local_8,&local_10);
  if ((((iVar1 != 0) && (iVar1 = FUN_00338ead(local_8), iVar1 != 0)) &&
      (iVar1 = FUN_00343dcb(local_c,local_8,local_10), iVar1 != 0)) &&
     ((((iVar1 = FUN_00343bd0(local_c,0x80000001,&local_8,&local_10), iVar1 != 0 &&
        (iVar1 = FUN_00338f69(local_8,in_ECX + 0x10), iVar1 != 0)) &&
       ((iVar1 = FUN_00343dcb(local_c,local_8,local_10), iVar1 != 0 &&
        ((iVar1 = FUN_00343bd0(local_c,0x80000002,&local_8,&local_10), iVar1 != 0 &&
         (iVar1 = FUN_003444d6(local_8,2,in_ECX + 0x14), iVar1 != 0)))))) &&
      (iVar1 = FUN_00343dcb(local_c,local_8,local_10), iVar1 != 0)))) {
    FUN_00343c3f(local_c,&local_14);
    if (local_14 == -0x7ffffffd) {
      *in_ECX = *in_ECX | 0x80;
      iVar1 = FUN_00343bd0(local_c,0x80000003,&local_8,&local_10);
      if (iVar1 == 0) {
        return false;
      }
      iVar1 = FUN_00344c2e(local_8,0x18,in_ECX + 0x18);
      if (iVar1 == 0) {
        return false;
      }
      iVar1 = FUN_00343dcb(local_c,local_8,local_10);
      if (iVar1 == 0) {
        return false;
      }
    }
    iVar1 = FUN_00343bd0(local_c,0x80000004,&local_8,&local_10);
    if (((((iVar1 != 0) && (iVar1 = FUN_0034439f(local_8,3,in_ECX + 0x28), iVar1 != 0)) &&
         (iVar1 = FUN_00343dcb(local_c,local_8,local_10), iVar1 != 0)) &&
        ((iVar1 = FUN_00343bd0(local_c,0x80000005,&local_8,&local_10), iVar1 != 0 &&
         (iVar1 = FUN_00344c2e(local_8,0x18,in_ECX + 0x30), iVar1 != 0)))) &&
       (iVar1 = FUN_00343dcb(local_c,local_8,local_10), iVar1 != 0)) {
      FUN_00343c3f(local_c,&local_14);
      if (local_14 == -0x7ffffffa) {
        *in_ECX = *in_ECX | 0x40;
        iVar1 = FUN_00343bd0(local_c,0x80000006,&local_8,&local_10);
        if (iVar1 == 0) {
          return false;
        }
        iVar1 = FUN_00344c2e(local_8,0x18,in_ECX + 0x3e);
        if (iVar1 == 0) {
          return false;
        }
        iVar1 = FUN_00343dcb(local_c,local_8,local_10);
        if (iVar1 == 0) {
          return false;
        }
      }
      iVar1 = FUN_00343bd0(local_c,0x80000007,&local_8,&local_10);
      if (((iVar1 != 0) && (iVar1 = FUN_00344c2e(local_8,0x18,in_ECX + 0x4c), iVar1 != 0)) &&
         (iVar1 = FUN_00343dcb(local_c,local_8,local_10), iVar1 != 0)) {
        FUN_00343c3f(local_c,&local_14);
        if (local_14 == -0x7ffffff8) {
          *in_ECX = *in_ECX | 0x20;
          iVar1 = FUN_00343bd0(local_c,0x80000008,&local_8,&local_10);
          if (iVar1 == 0) {
            return false;
          }
          iVar1 = FUN_00344c2e(local_8,0x18,in_ECX + 0x5a);
          if (iVar1 == 0) {
            return false;
          }
          iVar1 = FUN_00343dcb(local_c,local_8,local_10);
          if (iVar1 == 0) {
            return false;
          }
        }
        iVar1 = FUN_00343bd0(local_c,0x80000009,&local_8,&local_10);
        if ((((iVar1 != 0) && (iVar1 = FUN_003445aa(local_8,0x1b,in_ECX + 0x68), iVar1 != 0)) &&
            (iVar1 = FUN_00343dcb(local_c,local_8,local_10), iVar1 != 0)) &&
           (((iVar1 = FUN_00343bd0(local_c,0x8000000a,&local_8,&local_10), iVar1 != 0 &&
             (iVar1 = FUN_00338ff2(local_8), iVar1 != 0)) &&
            (iVar1 = FUN_00343dcb(local_c,local_8,local_10), iVar1 != 0)))) {
          FUN_00343c3f(local_c,&local_14);
          if (local_14 == -0x7ffffff5) {
            *in_ECX = *in_ECX | 0x10;
            iVar1 = FUN_00343bd0(local_c,0x8000000b,&local_8,&local_10);
            if (iVar1 == 0) {
              return false;
            }
            iVar1 = FUN_00339080(local_8,in_ECX + 0x74);
            if (iVar1 == 0) {
              return false;
            }
            iVar1 = FUN_00343dcb(local_c,local_8,local_10);
            if (iVar1 == 0) {
              return false;
            }
          }
          FUN_00343c3f(local_c,&local_14);
          if (local_14 == -0x7ffffff4) {
            *in_ECX = *in_ECX | 8;
            iVar1 = FUN_00339814(local_c,in_ECX + 0x78);
            if (iVar1 == 0) {
              return false;
            }
          }
          iVar1 = FUN_00343dcb(param_1,local_c,local_18);
          return iVar1 != 0;
        }
      }
    }
  }
  return false;
}
