/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 637B94CF8D7D8B68708F94048AD0F09613710BAA626A93EB96F7B980FD4C8B32
 * Entry: 0x002efb55, Ghidra index: 10725, label: __fassign
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    __fassign
   
   Library: Visual Studio 2003 Release */

void __fassign(int param_1,int *param_2,undefined4 param_3)

{
  int local_c;
  int local_8;
  
  if (param_1 != 0) {
    FUN_002f12be(&local_c);
    *param_2 = local_c;
    param_2[1] = local_8;
    return;
  }
  FUN_002f12eb(&param_1,param_3);
  *param_2 = param_1;
  return;
}
