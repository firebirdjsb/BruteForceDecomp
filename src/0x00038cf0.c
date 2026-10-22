/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 90357D1570ECE694536C907F2045AFF7B1C54ECD0FB97D5A0A9C14011A2CE179
 * Entry: 0x00038cf0, Ghidra index: 387, label: FUN_00038cf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00038cf0(int param_1,int param_2)

{
  int *in_EAX;
  int iVar1;
  int iVar2;
  int *unaff_EBX;
  
  iVar2 = param_2 - param_1 >> 2;
  if (0 < iVar2) {
    do {
      iVar1 = iVar2 / 2;
      if (**(int **)(param_1 + iVar1 * 4) < *in_EAX) {
        param_1 = param_1 + 4 + iVar1 * 4;
        iVar1 = iVar2 + (-1 - iVar1);
      }
      iVar2 = iVar1;
    } while (0 < iVar1);
  }
  *unaff_EBX = param_1;
  return;
}
