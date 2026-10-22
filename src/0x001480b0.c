/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B723D0DFB1B0CAD6E0406AD1763F074E9702E02456DF5E5F07386072364856BD
 * Entry: 0x001480b0, Ghidra index: 4250, label: FUN_001480b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001480b0(int *param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x59c) != 0) {
    (**(code **)(*param_1 + 0x5c))();
    iVar1 = (**(code **)(*param_1 + 0x1c))();
    FUN_0005c5e0(*(undefined4 *)(param_2 + 0x59c),(float)*(int *)(iVar1 + 0x18),1);
  }
  return;
}
