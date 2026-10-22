/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8738EB397788DBDFEFB1AA94C3168633F508FB7FBE8505A6B92079071D99B6A3
 * Entry: 0x0023bda0, Ghidra index: 7921, label: FUN_0023bda0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0023bda0(void)

{
  uint uVar1;
  float *in_EAX;
  float *in_ECX;
  uint *in_EDX;
  float fVar2;
  int unaff_ESI;
  
  uVar1 = *in_EDX;
  if (uVar1 < 0xeee373bf) {
    if (uVar1 == 0xeee373be) {
      *(char *)in_ECX = (char)(int)*in_EAX;
      return 1;
    }
    if (uVar1 == 0xa38d8e) {
      *in_ECX = *in_EAX;
      return 1;
    }
    if (uVar1 == 0x1d3e389e) {
      *in_ECX = *in_EAX;
      if (unaff_ESI < 1) {
        fVar2 = in_EAX[unaff_ESI];
      }
      else {
        fVar2 = in_EAX[1];
      }
      in_ECX[1] = fVar2;
      if (unaff_ESI < 2) {
        fVar2 = in_EAX[unaff_ESI];
      }
      else {
        fVar2 = in_EAX[2];
      }
      in_ECX[2] = fVar2;
      if (2 < unaff_ESI) {
        in_ECX[3] = in_EAX[3];
        return 1;
      }
      in_ECX[3] = in_EAX[unaff_ESI];
      return 1;
    }
    if (uVar1 == 0xeda5d734) {
      *in_ECX = (float)(int)*in_EAX;
      return 1;
    }
  }
  else if (uVar1 == 0xf05d9dab) {
    *in_ECX = *in_EAX;
    in_ECX[1] = in_EAX[1];
  }
  else if (uVar1 == 0xf95aad3d) {
    *in_ECX = *in_EAX;
    if (unaff_ESI < 1) {
      fVar2 = in_EAX[unaff_ESI];
    }
    else {
      fVar2 = in_EAX[1];
    }
    in_ECX[1] = fVar2;
    if (1 < unaff_ESI) {
      in_ECX[2] = in_EAX[2];
      return 1;
    }
    in_ECX[2] = in_EAX[unaff_ESI];
    return 1;
  }
  return 1;
}
