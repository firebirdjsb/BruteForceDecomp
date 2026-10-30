/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E0FA222F96C2DBD9870F91147991C33FA1BD02C8C1CD0F6C8A334238197DD2DC
 * Entry: 0x00241220, Ghidra index: 8000, label: FUN_00241220
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00241220(void)

{
  undefined4 in_EAX;
  int in_ECX;
  int iVar1;
  
  if (*(int *)(in_ECX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x38;
    if (iVar1 != 0) goto LAB_0024125b;
  }
  FUN_002421f0(in_EAX);
LAB_0024125b:
  FUN_00243740(0,0);
  return iVar1 * 0x38 + *(int *)(in_ECX + 4);
}
