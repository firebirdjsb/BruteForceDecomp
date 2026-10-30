/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9AD9CC8DF8EBF35EBBE943DD8B812D655BE7135AAACD923B81222838FC1C2EE2
 * Entry: 0x002f1e00, Ghidra index: 10789, label: ___addl
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    ___addl
   
   Library: Visual Studio 2003 Release */

undefined4 ___addl(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1 + param_2;
  uVar2 = 0;
  if ((uVar1 < param_1) || (uVar1 < param_2)) {
    uVar2 = 1;
  }
  *param_3 = uVar1;
  return uVar2;
}
