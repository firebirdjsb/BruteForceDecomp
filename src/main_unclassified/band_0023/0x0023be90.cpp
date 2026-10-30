/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6C2F8E70C27724ECCA3DEFDB49665DAEA1B9B9B8A39547F1F8191F201FC57E5C
 * Entry: 0x0023be90, Ghidra index: 7922, label: FUN_0023be90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0023be90(uint *param_1)

{
  uint uVar1;
  float *in_EAX;
  undefined4 uVar2;
  float *in_ECX;
  uint *in_EDX;
  
  uVar1 = *param_1;
  if (uVar1 < 0xeee373bf) {
    if (uVar1 == 0xeee373be) {
      uVar2 = FUN_0023c050();
      return uVar2;
    }
    if (uVar1 == 0xa38d8e) {
      uVar2 = FUN_0023c160();
      return uVar2;
    }
    if (uVar1 == 0x1d3e389e) {
      uVar2 = FUN_0023bda0();
      return uVar2;
    }
    if (uVar1 != 0xeda5d734) {
      return 0;
    }
    uVar2 = FUN_0023c0e0();
    return uVar2;
  }
  if (uVar1 == 0xf05d9dab) {
    uVar1 = *in_EDX;
    if (uVar1 < 0xeee373bf) {
      if (uVar1 == 0xeee373be) {
        *(char *)in_ECX = (char)(int)*in_EAX;
        return 1;
      }
      if (uVar1 != 0xa38d8e) {
        if (uVar1 == 0x1d3e389e) {
          *in_ECX = *in_EAX;
          in_ECX[1] = in_EAX[1];
          in_ECX[2] = in_EAX[1];
          in_ECX[3] = in_EAX[1];
          return 1;
        }
        if (uVar1 != 0xeda5d734) {
          return 1;
        }
        *in_ECX = (float)(int)*in_EAX;
        return 1;
      }
      goto LAB_0023bf67;
    }
    if (uVar1 != 0xf05d9dab) {
      if (uVar1 != 0xf95aad3d) {
        return 1;
      }
      *in_ECX = *in_EAX;
      in_ECX[1] = in_EAX[1];
      in_ECX[2] = in_EAX[1];
      return 1;
    }
  }
  else {
    if (uVar1 != 0xf95aad3d) {
      return 0;
    }
    uVar1 = *in_EDX;
    if (uVar1 < 0xeee373bf) {
      if (uVar1 == 0xeee373be) {
        *(char *)in_ECX = (char)(int)*in_EAX;
        return 1;
      }
      if (uVar1 != 0xa38d8e) {
        if (uVar1 == 0x1d3e389e) {
          *in_ECX = *in_EAX;
          in_ECX[1] = in_EAX[1];
          in_ECX[2] = in_EAX[2];
          in_ECX[3] = in_EAX[2];
          return 1;
        }
        if (uVar1 != 0xeda5d734) {
          return 1;
        }
        *in_ECX = (float)(int)*in_EAX;
        return 1;
      }
LAB_0023bf67:
      *in_ECX = *in_EAX;
      return 1;
    }
    if (uVar1 != 0xf05d9dab) {
      if (uVar1 != 0xf95aad3d) {
        return 1;
      }
      *in_ECX = *in_EAX;
      in_ECX[1] = in_EAX[1];
      in_ECX[2] = in_EAX[2];
      return 1;
    }
  }
  *in_ECX = *in_EAX;
  in_ECX[1] = in_EAX[1];
  return 1;
}
