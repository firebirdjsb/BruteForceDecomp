/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 14ED854DD955AE7F5CDF0B6F300F15BDB7E5BA1608D307AA64660BA80D2719AC
 * Entry: 0x000c2440, Ghidra index: 2370, label: FUN_000c2440
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000c2440(int param_1,char param_2)

{
  int iVar1;
  int in_ECX;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x70) & 1) == 0)) {
    puVar2 = (undefined4 *)0x0;
    if (*(undefined4 **)(in_ECX + 0x68) != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)**(undefined4 **)(in_ECX + 0x68);
    }
    for (; puVar2 != *(undefined4 **)(in_ECX + 0x68); puVar2 = (undefined4 *)*puVar2) {
      if (*(int *)(puVar2[2] + 0x44) == param_1) {
        return puVar2[2];
      }
    }
    if (param_2 != '\0') {
      iVar1 = FUN_000c2330();
    }
  }
  return iVar1;
}
