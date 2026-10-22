/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3A38C7D0A604322AC81C0F79C1E5F72F9FBA3612DE1F5EB15D70E6830BDA91CE
 * Entry: 0x0033afc8, Ghidra index: 12514, label: FUN_0033afc8
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_0033afc8(void)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  byte *in_ECX;
  undefined4 in_EDX;
  byte *local_c;
  byte *local_8;
  
  if (in_EAX == 0) {
    in_EAX = 0x10;
  }
  local_c = in_ECX;
  local_8 = in_ECX;
  iVar1 = FUN_003449ff(in_EDX,in_EAX,&local_c);
  if ((((iVar1 == 0) || (iVar1 = FUN_003449ff(in_EDX,0x80000000,&local_8), iVar1 == 0)) ||
      (iVar1 = FUN_0033a8a2(), iVar1 == 0)) || (iVar1 = FUN_00344a56(in_EDX,local_8), iVar1 == 0)) {
    return false;
  }
  if ((*in_ECX & 0x80) != 0) {
    uVar2 = XAPILIB__lstrlenA(*(undefined4 *)(in_ECX + 0x10));
    iVar1 = FUN_003449ff(in_EDX,0x80000001,&local_8);
    if (iVar1 == 0) {
      return false;
    }
    iVar1 = FUN_00344c6b(in_EDX,0x1b,uVar2,*(undefined4 *)(in_ECX + 0x10));
    if (iVar1 == 0) {
      return false;
    }
    iVar1 = FUN_00344a56(in_EDX,local_8);
    if (iVar1 == 0) {
      return false;
    }
  }
  if (((((((*in_ECX & 0x40) == 0) ||
         (((iVar1 = FUN_003449ff(in_EDX,0x80000002,&local_8), iVar1 != 0 &&
           (iVar1 = FUN_0033a667(), iVar1 != 0)) &&
          (iVar1 = FUN_00344a56(in_EDX,local_8), iVar1 != 0)))) &&
        (((*in_ECX & 0x20) == 0 ||
         (((iVar1 = FUN_003449ff(in_EDX,0x80000003,&local_8), iVar1 != 0 &&
           (iVar1 = FUN_00344d81(in_EDX,3,*(undefined4 *)(in_ECX + 0x1c),
                                 *(undefined4 *)(in_ECX + 0x20)), iVar1 != 0)) &&
          (iVar1 = FUN_00344a56(in_EDX,local_8), iVar1 != 0)))))) &&
       (((*in_ECX & 0x10) == 0 ||
        (((iVar1 = FUN_003449ff(in_EDX,0x80000004,&local_8), iVar1 != 0 &&
          (iVar1 = FUN_00344dfd(in_EDX,0x18,in_ECX + 0x24), iVar1 != 0)) &&
         (iVar1 = FUN_00344a56(in_EDX,local_8), iVar1 != 0)))))) &&
      (((*in_ECX & 8) == 0 ||
       (((iVar1 = FUN_003449ff(in_EDX,0x80000005,&local_8), iVar1 != 0 &&
         (iVar1 = FUN_00344dfd(in_EDX,0x18,in_ECX + 0x32), iVar1 != 0)) &&
        (iVar1 = FUN_00344a56(in_EDX,local_8), iVar1 != 0)))))) &&
     ((((*in_ECX & 4) == 0 ||
       (((iVar1 = FUN_003449ff(in_EDX,0x80000006,&local_8), iVar1 != 0 &&
         (iVar1 = FUN_00344dfd(in_EDX,0x18,in_ECX + 0x40), iVar1 != 0)) &&
        (iVar1 = FUN_00344a56(in_EDX,local_8), iVar1 != 0)))) &&
      (((*in_ECX & 2) == 0 ||
       (((iVar1 = FUN_003449ff(in_EDX,0x80000007,&local_8), iVar1 != 0 &&
         (iVar1 = FUN_00344dfd(in_EDX,0x18,in_ECX + 0x4e), iVar1 != 0)) &&
        (iVar1 = FUN_00344a56(in_EDX,local_8), iVar1 != 0)))))))) {
    if ((*in_ECX & 1) != 0) {
      uVar2 = XAPILIB__lstrlenA(*(undefined4 *)(in_ECX + 0x5c));
      iVar1 = FUN_003449ff(in_EDX,0x80000008,&local_8);
      if (iVar1 == 0) {
        return false;
      }
      iVar1 = FUN_00344c6b(in_EDX,0x1b,uVar2,*(undefined4 *)(in_ECX + 0x5c));
      if (iVar1 == 0) {
        return false;
      }
      iVar1 = FUN_00344a56(in_EDX,local_8);
      if (iVar1 == 0) {
        return false;
      }
    }
    if ((((in_ECX[1] & 0x80) == 0) ||
        (((iVar1 = FUN_003449ff(in_EDX,0x80000009,&local_8), iVar1 != 0 &&
          (iVar1 = FUN_0033a667(), iVar1 != 0)) &&
         (iVar1 = FUN_00344a56(in_EDX,local_8), iVar1 != 0)))) &&
       (((in_ECX[1] & 0x40) == 0 ||
        (((iVar1 = FUN_003449ff(in_EDX,0x8000000a,&local_8), iVar1 != 0 &&
          (iVar1 = FUN_0033a6dc(in_ECX + 0x68), iVar1 != 0)) &&
         (iVar1 = FUN_00344a56(in_EDX,local_8), iVar1 != 0)))))) {
      iVar1 = FUN_00344a56(in_EDX,local_c);
      return iVar1 != 0;
    }
  }
  return false;
}
