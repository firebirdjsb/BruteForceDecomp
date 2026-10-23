/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 82520FE89231FC4C6DB7CB97F0387258CA655674C09D757DBF8C745D89F895AB
 * Entry: 0x002a9700, Ghidra index: 9635, label: FUN_002a9700
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002a9700(int *param_1)

{
  int iVar1;
  
  if (param_1[0xe] != 0) {
    param_1[0xe] = param_1[0xe] + -1;
  }
  iVar1 = param_1[0xe];
  if (iVar1 == 0) {
    param_1[0xe] = 1;
    (**(code **)(*param_1 + 0x6c))(1);
    iVar1 = 0;
  }
  return iVar1;
}
