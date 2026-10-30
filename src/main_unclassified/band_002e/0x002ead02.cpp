/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 535CBC7F30D645AAD3FBF3D9CB99CE9F08BD9699A9EF457B233F8EA45AB3609A
 * Entry: 0x002ead02, Ghidra index: 10599, label: FUN_002ead02
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002ead02(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_18 [20];
  
  __itoa(param_1,local_18,param_3);
  FUN_002ee365(param_2,local_18,0x14);
  return param_2;
}
