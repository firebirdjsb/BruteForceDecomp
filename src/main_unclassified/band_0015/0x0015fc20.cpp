/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F3ECACA2B85759CBEEEB0A3046DEDCEB36A93ACB24D8C0605141DEA5D1001EAB
 * Entry: 0x0015fc20, Ghidra index: 4578, label: FUN_0015fc20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_0015fc20(undefined4 param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_001552e0(param_1,param_2,param_3);
  if ((cVar1 == '\0') && (*param_2 == -0x1854e275)) {
    if ((char)param_1 != '\0') {
      FUN_0003d730(param_3,in_ECX + 0x48);
      return '\x01';
    }
    FUN_0003d730(in_ECX + 0x48,param_3);
    cVar1 = '\x01';
  }
  return cVar1;
}
