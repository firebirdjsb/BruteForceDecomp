/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B146371D2E644AA9A70FF0395FEABAD7B737B1B7E7E3672FD6C565D6A7BB689E
 * Entry: 0x002f01a2, Ghidra index: 10737, label: __fload
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    __fload
   
   Libraries: Visual Studio 1998, Visual Studio 2003, Visual Studio 2019 */

float10 __fload(uint param_1,int param_2)

{
  float10 fVar1;
  
  if ((param_2._2_2_ & 0x7ff0) == 0x7ff0) {
    fVar1 = (float10)CONCAT28(param_2._2_2_ | 0x7fff,
                              CONCAT44(param_2 << 0xb | param_1 >> 0x15,param_1));
  }
  else {
    fVar1 = (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
  }
  return fVar1;
}
