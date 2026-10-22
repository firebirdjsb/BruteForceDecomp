/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4FA1DDB49ADE0DBA61480D3ADDFE569E1AA2084E39EFF2F7D60CA8ABCAE454A6
 * Entry: 0x001ff870, Ghidra index: 7247, label: FUN_001ff870
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_001ff870(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char cVar2;
  int in_ECX;
  
  uVar1 = param_2;
  cVar2 = FUN_001fedb0(param_1,param_2,param_3);
  param_3 = CONCAT31(param_3._1_3_,cVar2);
  if (cVar2 == '\0') {
    param_2 = 0xfe604ae;
    FUN_000ee560(*(undefined4 *)(in_ECX + 0x10),param_1,&param_2,uVar1,2);
    cVar2 = (char)param_3;
  }
  return cVar2;
}
