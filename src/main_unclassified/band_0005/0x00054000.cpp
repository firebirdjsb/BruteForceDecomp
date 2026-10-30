/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FC24570761FDCF86C204A0BAE078E5B97BBA2D70E6D26A60A4C7CA7F3C799CA2
 * Entry: 0x00054000, Ghidra index: 784, label: FUN_00054000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00054000(float *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  
  if ((param_1 != param_2) && (pfVar3 = param_1 + 5, pfVar3 != param_2)) {
    pfVar4 = param_1 + 10;
    do {
      pfVar2 = pfVar3;
      pfVar1 = param_1;
      if (*param_1 <= *pfVar3) {
        do {
          pfVar1 = pfVar2;
          pfVar2 = pfVar1 + -5;
        } while (*pfVar3 < *pfVar2);
      }
      if ((pfVar1 != pfVar3) && (pfVar3 != pfVar4)) {
        FUN_00054690(pfVar1,pfVar3,pfVar4,0,0);
      }
      pfVar3 = pfVar3 + 5;
      pfVar4 = pfVar4 + 5;
    } while (pfVar3 != param_2);
  }
  return;
}
