/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 72B4DC6FD3B4C00D730726994C4AC9CAD5A6CED102C9D7DC2A483C44F057CC31
 * Entry: 0x002efff0, Ghidra index: 10733, label: __ctrandisp2
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    __ctrandisp2
   
   Libraries: Visual Studio 1998, Visual Studio 2003, Visual Studio 2019 */

void __ctrandisp2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __fload(param_1,param_2);
  __fload(param_3,param_4);
  __trandisp2();
  FUN_002f002a();
  return;
}
