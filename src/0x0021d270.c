/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 853CFEC1977A465389A7D82D9F1920E978110FBA200A0BA853996C1972559997
 * Entry: 0x0021d270, Ghidra index: 7537, label: FUN_0021d270
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0021d270(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int *in_EAX;
  int iVar3;
  undefined4 in_ECX;
  float10 fVar4;
  int *piStack_24;
  int local_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  if (*in_EAX != 0) {
    piStack_24 = (int *)0x1;
    FUN_0021a850(in_ECX,in_EAX,param_1);
    if (((*in_EAX != 0) && (piVar1 = (int *)in_EAX[1], piVar1 != (int *)0x0)) &&
       (piVar2 = (int *)in_EAX[4], piVar2 != (int *)0x0)) {
      piStack_24 = &local_1c;
      iVar3 = (**(code **)(*piVar1 + 0xd0))(piVar1);
      if (iVar3 == 0) {
        (**(code **)(*piVar2 + 0x38))(&piStack_24);
        piVar2[0x23] = local_1c;
        piVar2[0x3d] = (int)fStack_14;
        piVar2[0x3c] = (int)fStack_18;
        piVar2[0x3e] = (int)fStack_10;
        fVar4 = (float10)FUN_0009e9a0();
        if ((((float10)0.1 < fVar4) &&
            (0.000361 < fStack_18 * fStack_18 + fStack_14 * fStack_14 + fStack_10 * fStack_10)) &&
           (*(float *)(piVar2[2] + 0xc58) < 1.0)) {
          *(byte *)(piVar2 + 0x25) = *(byte *)(piVar2 + 0x25) | 0x40;
          return;
        }
      }
      *(byte *)(piVar2 + 0x25) = *(byte *)(piVar2 + 0x25) & 0xbf;
    }
  }
  return;
}
