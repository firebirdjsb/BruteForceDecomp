/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9D62BD398022D61A8BDCB44DB5C3E01C1F0C20A78CC17D715BF9BA0F47E12714
 * Entry: 0x000bcfe0, Ghidra index: 2303, label: FUN_000bcfe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000bb9d0(int *param_1);

void FUN_000bcfe0(void)

{
  int *piVar1;
  int in_EAX;
  int unaff_retaddr;
  
  if (*(int *)(in_EAX + 0xe4) != 0) {
    piVar1 = *(int **)(in_EAX + 0x114);
    FUN_000bb9d0(piVar1);
    (**(code **)(*piVar1 + 0x14))(0x3f800000);
    piVar1[0x13] = unaff_retaddr;
  }
  return;
}
