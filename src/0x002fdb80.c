/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 89B4F93C347597D279C326FE96002DCC8C9132AAC48DA2DFFBA8FE2722777DD6
 * Entry: 0x002fdb80, Ghidra index: 10993, label: FUN_002fdb80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002fdb80(int param_1,int param_2,int param_3,int param_4)

{
  FUN_002fb770(param_1,param_4 + (param_3 - param_1) * 4);
  while (0x200 < param_1) {
    param_1 = param_1 >> 2;
    FUN_002fdae0(param_1,param_2,param_3,param_4);
    FUN_002fdb80(param_1,param_2 + param_1 * 4,param_3,param_4);
    FUN_002fdae0(param_1,param_2 + param_1 * 8,param_3,param_4);
    param_2 = param_2 + param_1 * 0xc;
    FUN_002fb770(param_1,param_4 + (param_3 - param_1) * 4);
  }
  FUN_002fd640(param_2,param_3,param_4);
  return;
}
