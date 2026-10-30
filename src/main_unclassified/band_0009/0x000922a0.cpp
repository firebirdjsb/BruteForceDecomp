/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 26D39A6A1CB5E9B978704CAE215B194375657F34E503D2CF3B5341D3B2ED0DF9
 * Entry: 0x000922a0, Ghidra index: 1796, label: FUN_000922a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_002ea01d_allocator_guest32.h"
extern void FUN_00092330(void);

undefined4 FUN_000922a0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if ((*param_2 != 0x10) || (param_2[1] != *(int *)(param_1 + 8))) {
    *param_3 = 0;
    return 0x80004002;
  }
  iVar1 = FUN_002ea01d(0x50);
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  iVar1 = FUN_00092330();
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  *(byte *)(iVar1 + 0x3c) = *(byte *)(iVar1 + 0x3c) | 3;
  *(undefined4 *)(iVar1 + 0x38) = 0x3a83126f;
  *(undefined1 *)(iVar1 + 0x3d) = 0;
  *param_3 = iVar1;
  return 0;
}
