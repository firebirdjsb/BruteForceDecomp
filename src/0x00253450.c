/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6F00383CCF7CBB8787AF01D69E76C35C734D093961CD20A8A12D4E32B970F78C
 * Entry: 0x00253450, Ghidra index: 8398, label: FUN_00253450
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00253450(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (param_2 != param_3) {
    uVar1 = FUN_00252d90(param_3);
    FUN_0023c540();
    *(undefined4 *)(unaff_ESI + 8) = uVar1;
  }
  *param_1 = param_2;
  return;
}
