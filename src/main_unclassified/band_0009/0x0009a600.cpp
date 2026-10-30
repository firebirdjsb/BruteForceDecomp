/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F244D25A3AF1EA0D34A917765D85D4898D20212512B0038B443AE6D1E4CAE24E
 * Entry: 0x0009a600, Ghidra index: 1854, label: FUN_0009a600
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_002ea01d_allocator_guest32.h"
extern void FUN_0009a690(void);

undefined4 FUN_0009a600(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((*param_2 != 0x10) || (param_2[1] != *(int *)(param_1 + 8))) {
    *param_3 = 0;
    return 0x80004002;
  }
  iVar1 = FUN_002ea01d(0xac);
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  iVar1 = FUN_0009a690();
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  *(undefined1 *)(iVar1 + 0x98) = 0;
  puVar3 = (undefined4 *)(iVar1 + 0xc);
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *param_3 = iVar1;
  return 0;
}
