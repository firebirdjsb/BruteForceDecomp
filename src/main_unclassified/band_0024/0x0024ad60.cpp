/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1724FBD5D0373DA4A235CC73D9F5CEF8DFD4D085300DF6E32AFFF6B1BBCE3D2E
 * Entry: 0x0024ad60, Ghidra index: 8234, label: FUN_0024ad60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_0024ad60(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    iVar1 = param_3 + -0x20;
    iVar2 = param_4 + -0x20;
    FUN_0001f4f0(iVar1,0,0xffffffff);
    *(undefined4 *)(param_4 + -4) = *(undefined4 *)(param_3 + -4);
    param_3 = iVar1;
    param_4 = iVar2;
  } while (iVar1 != param_2);
  *param_1 = iVar2;
  return param_1;
}
