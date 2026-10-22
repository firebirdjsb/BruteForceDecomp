/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E767B15F30E3AC43CB573E5BDD0BA40DB4A580FF9CA5289BB1A34B15A1F824B5
 * Entry: 0x000cfe40, Ghidra index: 2569, label: FUN_000cfe40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000cfe40(int param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  int in_EAX;
  int iVar2;
  int unaff_EBX;
  
  while (param_1 < in_EAX) {
    iVar2 = (in_EAX + -1) / 2;
    pfVar1 = *(float **)(unaff_EBX + iVar2 * 4);
    if ((*param_3 - *param_2) * (*param_3 - *param_2) +
        (param_3[2] - param_2[1]) * (param_3[2] - param_2[1]) <=
        (*param_3 - *pfVar1) * (*param_3 - *pfVar1) +
        (param_3[2] - pfVar1[1]) * (param_3[2] - pfVar1[1])) break;
    *(float **)(unaff_EBX + in_EAX * 4) = pfVar1;
    in_EAX = iVar2;
  }
  *(float **)(unaff_EBX + in_EAX * 4) = param_2;
  return;
}
