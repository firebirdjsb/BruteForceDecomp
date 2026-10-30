/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7988AD4057F55ABE582DEBA36ECCFA7C73BB421F10CAA4F4FC42A1FF3695D06C
 * Entry: 0x0005d2b0, Ghidra index: 963, label: FUN_0005d2b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0005d410(uint *param_1);

int FUN_0005d2b0(void)

{
  undefined4 *in_EAX;
  int *piVar1;
  undefined4 local_10 [4];
  
  local_10[0] = *in_EAX;
  piVar1 = (int *)FUN_0005d410(local_10);
  return *piVar1 + 0x10;
}
