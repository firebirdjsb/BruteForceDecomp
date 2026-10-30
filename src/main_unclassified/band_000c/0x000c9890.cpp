/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D2B992FFEB0E545341DC0888328913675CE01AFD62BB47C17CFEE3617AB6D7A4
 * Entry: 0x000c9890, Ghidra index: 2493, label: FUN_000c9890
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c9890(int param_1)

{
  int iVar1;
  float local_c;
  float local_8 [2];
  
  if ((((*(byte *)(param_1 + 0x3b) & 8) != 0) && (*(short *)(param_1 + 0x34) != 0)) &&
     (*(int *)(param_1 + 0x24) != 0)) {
    local_8[0] = *(float *)(param_1 + 0x40);
    if (*(char *)(param_1 + 0x3c) == '\0') {
      if (*(uint *)(param_1 + 0x1c) < 8) {
        iVar1 = param_1 + 8;
      }
      else {
        iVar1 = *(int *)(param_1 + 8);
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0x20);
    }
    FUN_000ccae0(*(undefined4 *)(param_1 + 0x24),iVar1,local_8,&local_c,0,local_8[0]);
    *(short *)(param_1 + 0x30) = (short)(int)local_8[0];
    *(short *)(param_1 + 0x32) = (short)(int)local_c;
  }
  return;
}
