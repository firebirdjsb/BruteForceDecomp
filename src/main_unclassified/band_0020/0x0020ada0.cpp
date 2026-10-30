/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D0D3015B6C7C0DC0B876333E398124499B7C25EF296352A53A06E49DAA999939
 * Entry: 0x0020ada0, Ghidra index: 7332, label: FUN_0020ada0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_0020ada0(undefined4 param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = FUN_001fedb0(param_1,param_2,param_3);
  if ((cVar1 == '\0') && (*param_2 == -0xec71fdf)) {
    if ((char)param_1 != '\0') {
      FUN_00154780();
      return '\x01';
    }
    FUN_00154780();
    cVar1 = '\x01';
  }
  return cVar1;
}
