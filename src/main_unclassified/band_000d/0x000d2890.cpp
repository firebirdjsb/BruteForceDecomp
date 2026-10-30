/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6E927ADF30C289A050C6F98853D8DEBD45E5F8B05A2917AE7D79AB4CC33BE1A0
 * Entry: 0x000d2890, Ghidra index: 2617, label: FUN_000d2890
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000d1970(void);

uint FUN_000d2890(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *unaff_ESI;
  
  if (param_1 == -1) {
    iVar3 = unaff_ESI[1];
    if (iVar3 == -1) {
      param_1 = 0;
    }
    else {
      iVar1 = unaff_ESI[2];
      if (iVar1 < iVar3) {
        param_1 = (iVar1 - iVar3) + 1 + *unaff_ESI;
      }
      else {
        param_1 = (iVar1 - iVar3) + 1;
      }
    }
    param_1 = param_1 + -1;
  }
  iVar3 = unaff_ESI[1];
  if (iVar3 == -1) {
    uVar2 = 0;
  }
  else {
    iVar1 = unaff_ESI[2];
    if (iVar1 < iVar3) {
      uVar2 = (iVar1 - iVar3) + 1 + *unaff_ESI;
    }
    else {
      uVar2 = (iVar1 - iVar3) + 1;
    }
  }
  if (((param_1 < (int)uVar2) && (-1 < param_1)) && (-1 < iVar3)) {
    if (iVar3 == -1) {
      iVar3 = 0;
      iVar1 = iVar3;
    }
    else {
      iVar1 = unaff_ESI[2];
      if (iVar1 < iVar3) {
        iVar3 = (iVar1 - iVar3) + 1 + *unaff_ESI;
        iVar1 = iVar3;
      }
      else {
        iVar3 = (iVar1 - iVar3) + 1;
        iVar1 = iVar3;
      }
    }
    while (param_1 <= iVar1 + -1) {
      FUN_000d1970();
      iVar3 = *unaff_ESI;
      unaff_ESI[2] = unaff_ESI[2] - 1U & iVar3 - 1U;
      iVar1 = iVar1 + -1;
    }
    if (param_1 == 0) {
      iVar3 = -1;
      unaff_ESI[1] = -1;
      unaff_ESI[2] = -1;
    }
    return CONCAT31((int3)((uint)iVar3 >> 8),1);
  }
  return uVar2 & 0xffffff00;
}
