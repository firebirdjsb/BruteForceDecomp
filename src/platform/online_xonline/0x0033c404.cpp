/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E946F3CB7AEBCC654DFDA3AB192E226DFAB713BF308EAC7CF62382CF924276B8
 * Entry: 0x0033c404, Ghidra index: 12549, label: FUN_0033c404
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0033c404(int param_1,int param_2)

{
  int in_ECX;
  char *pcVar1;
  char cVar2;
  
  cVar2 = *(char *)(*(int *)(param_2 + 8) * 0x200 + param_1 + *(int *)(param_2 + 0xc)) + '\x01';
  pcVar1 = (char *)(in_ECX + 0x83c);
  *pcVar1 = cVar2;
  if (cVar2 == '*') {
    *pcVar1 = '+';
  }
  *(char *)(*(int *)(param_2 + 8) * 0x200 + param_1 + *(int *)(param_2 + 0xc)) = *pcVar1;
  FUN_0033bbd6(1);
  return;
}
