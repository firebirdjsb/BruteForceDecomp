/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5A528C5CD9161A40EE3ADCF2610D926C9C800753337218F0661092D1D2929180
 * Entry: 0x002f108b, Ghidra index: 10771, label: __CopyMan
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    __CopyMan
   
   Library: Visual Studio 2003 Release */

void __CopyMan(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = 3;
  param_1 = param_1 - (int)param_2;
  do {
    *(undefined4 *)(param_1 + (int)param_2) = *param_2;
    param_2 = param_2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}
