/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 54990A7A34412D63A665AD8C1B7D4F29A58D85F436F9DD1BDAF4B37B4CFC3794
 * Entry: 0x001d9250, Ghidra index: 6458, label: FUN_001d9250
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original-address 0x0010BC40 is a void() Ghidra draft with implicit
 * EAX/ECX guest inputs. This declaration does not verify its Xbox ABI. */
extern void FUN_0010bc40(void);
int * FUN_001d9250(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    iVar1 = param_3 + -0x18;
    iVar2 = param_4 + -0x18;
    FUN_0010bc40();
    *(undefined4 *)(param_4 + -8) = *(undefined4 *)(param_3 + -8);
    *(undefined4 *)(param_4 + -4) = *(undefined4 *)(param_3 + -4);
    param_3 = iVar1;
    param_4 = iVar2;
  } while (iVar1 != param_2);
  *param_1 = iVar2;
  return param_1;
}
