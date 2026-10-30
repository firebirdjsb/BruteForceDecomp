/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2B6456AC3E7A874612DFA7BE0640CD075010E8B4D945CD2D19FD2EFABAE306BF
 * Entry: 0x0009d9f0, Ghidra index: 1871, label: FUN_0009d9f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_002ea01d(uint32_t guest_size);
extern void FUN_0009da70(void);

undefined4 FUN_0009d9f0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if ((*param_2 != 0x10) || (param_2[1] != *(int *)(param_1 + 8))) {
    *param_3 = 0;
    return 0x80004002;
  }
  iVar1 = FUN_002ea01d(0x90);
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  iVar1 = FUN_0009da70();
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  *(undefined1 *)(iVar1 + 0x58) = 0;
  *(undefined1 *)(iVar1 + 0x59) = 0;
  *param_3 = iVar1;
  return 0;
}
