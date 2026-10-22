/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 41B19AED9B44838F58A7983C2568EE9F5C3ED7D9A840D6E2C0CA1D541215A1F5
 * Entry: 0x0033b617, Ghidra index: 12520, label: FUN_0033b617
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_0033b617(void)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  byte *in_ECX;
  undefined4 in_EDX;
  bool bVar3;
  byte *local_c;
  byte *local_8;
  
  if (in_EAX == 0) {
    in_EAX = 0x10;
  }
  local_c = in_ECX;
  local_8 = in_ECX;
  iVar1 = FUN_003449ff(in_EDX,in_EAX,&local_c);
  if (((((iVar1 == 0) || (iVar1 = FUN_003449ff(in_EDX,0x80000000,&local_8), iVar1 == 0)) ||
       (iVar1 = FUN_00344d81(in_EDX,3,*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8)),
       iVar1 == 0)) || (iVar1 = FUN_00344a56(in_EDX,local_8), iVar1 == 0)) ||
     (((*in_ECX & 0x80) != 0 &&
      (((iVar1 = FUN_003449ff(in_EDX,0x80000001,&local_8), iVar1 == 0 ||
        (iVar1 = FUN_0033a667(), iVar1 == 0)) || (iVar1 = FUN_00344a56(in_EDX,local_8), iVar1 == 0))
      )))) {
    bVar3 = false;
  }
  else {
    uVar2 = XAPILIB__lstrlenA(*(undefined4 *)(in_ECX + 0x14));
    iVar1 = FUN_003449ff(in_EDX,0x80000002,&local_8);
    if (((((iVar1 == 0) ||
          (iVar1 = FUN_00344c6b(in_EDX,0x1b,uVar2,*(undefined4 *)(in_ECX + 0x14)), iVar1 == 0)) ||
         (iVar1 = FUN_00344a56(in_EDX,local_8), iVar1 == 0)) ||
        (((*in_ECX & 0x40) != 0 &&
         (((iVar1 = FUN_003449ff(in_EDX,0x80000003,&local_8), iVar1 == 0 ||
           (iVar1 = FUN_0033a667(), iVar1 == 0)) ||
          (iVar1 = FUN_00344a56(in_EDX,local_8), iVar1 == 0)))))) ||
       ((((*in_ECX & 0x20) != 0 &&
         (((iVar1 = FUN_003449ff(in_EDX,0x80000004,&local_8), iVar1 == 0 ||
           (iVar1 = FUN_00344dfd(in_EDX,0x18,in_ECX + 0x20), iVar1 == 0)) ||
          (iVar1 = FUN_00344a56(in_EDX,local_8), iVar1 == 0)))) ||
        (((((iVar1 = FUN_003449ff(in_EDX,0x80000005,&local_8), iVar1 == 0 ||
            (iVar1 = FUN_00344dfd(in_EDX,0x18,in_ECX + 0x2e), iVar1 == 0)) ||
           (iVar1 = FUN_00344a56(in_EDX,local_8), iVar1 == 0)) ||
          (((*in_ECX & 0x10) != 0 &&
           (((iVar1 = FUN_003449ff(in_EDX,0x80000006,&local_8), iVar1 == 0 ||
             (iVar1 = FUN_00344dfd(in_EDX,0x18,in_ECX + 0x3c), iVar1 == 0)) ||
            (iVar1 = FUN_00344a56(in_EDX,local_8), iVar1 == 0)))))) ||
         (((iVar1 = FUN_003449ff(in_EDX,0x80000007,&local_8), iVar1 == 0 ||
           (iVar1 = FUN_00344e30(in_EDX,2,*(undefined4 *)(in_ECX + 0x4c)), iVar1 == 0)) ||
          ((((iVar1 = FUN_00344a56(in_EDX,local_8), iVar1 == 0 ||
             (iVar1 = FUN_00338cc3(in_ECX + 0x50), iVar1 == 0)) ||
            (((*in_ECX & 8) != 0 &&
             (((iVar1 = FUN_003449ff(in_EDX,0x80000009,&local_8), iVar1 == 0 ||
               (iVar1 = FUN_0033a6dc(in_ECX + 0x54), iVar1 == 0)) ||
              (iVar1 = FUN_00344a56(in_EDX,local_8), iVar1 == 0)))))) ||
           ((((*in_ECX & 4) != 0 &&
             (((iVar1 = FUN_003449ff(in_EDX,0x8000000a,&local_8), iVar1 == 0 ||
               (iVar1 = FUN_0033a7c4(in_EDX,0,in_ECX + 0x58), iVar1 == 0)) ||
              (iVar1 = FUN_00344a56(in_EDX,local_8), iVar1 == 0)))) ||
            (((*in_ECX & 2) != 0 && (iVar1 = FUN_0033b402(in_ECX + 0x6c), iVar1 == 0)))))))))))))) {
      bVar3 = false;
    }
    else {
      iVar1 = FUN_00344a56(in_EDX,local_c);
      bVar3 = iVar1 != 0;
    }
  }
  return bVar3;
}
