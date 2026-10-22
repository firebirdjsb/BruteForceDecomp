/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C6324D52D38D8DDB4B79BFD3E2A94B72C195F64C1C16B72B99225E5711CBB5AE
 * Entry: 0x0001d800, Ghidra index: 141, label: FUN_0001d800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0001d800(int param_1,int param_2)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int unaff_EBX;
  
  if (in_EAX <= param_2) {
    *(int *)(param_1 + in_EAX * 4) = unaff_EBX;
    return;
  }
  do {
    iVar2 = (in_EAX + -1) / 2;
    iVar1 = *(int *)(param_1 + iVar2 * 4);
    if (*(float *)(unaff_EBX + 0x2c) <= *(float *)(iVar1 + 0x2c)) break;
    *(int *)(param_1 + in_EAX * 4) = iVar1;
    in_EAX = iVar2;
  } while (param_2 < iVar2);
  *(int *)(param_1 + in_EAX * 4) = unaff_EBX;
  return;
}
