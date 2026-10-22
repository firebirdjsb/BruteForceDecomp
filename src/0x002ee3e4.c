/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B72167CBB54BE4F87B2E790295F390FE5CC759F291427DBB9009E96D922E9962
 * Entry: 0x002ee3e4, Ghidra index: 10696, label: __itoa
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    __itoa
   
   Library: Visual Studio 2003 Release */

undefined4 __itoa(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_3 == 10) && (param_1 < 0)) {
    uVar1 = 1;
    param_3 = 10;
  }
  else {
    uVar1 = 0;
  }
  FUN_002ee3a6(param_3,uVar1);
  return param_2;
}
