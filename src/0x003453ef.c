/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 008218D7087A57484B175D977A3E7EB407D4E7CEBDFAEE94285E4A946C2347BC
 * Entry: 0x003453ef, Ghidra index: 12803, label: FUN_003453ef
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_003453ef(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    iVar1 = iVar1 + *param_1;
    param_1 = param_1 + 2;
  }
  return iVar1;
}
