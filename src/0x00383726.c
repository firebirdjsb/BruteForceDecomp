/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B9263D96A645B8E09548AD0EC3558AF68C10BA735793FA0A4D72549EDF544F91
 * Entry: 0x00383726, Ghidra index: 13618, label: FUN_00383726
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00383726(void)

{
  int iVar1;
  uint uVar2;
  int in_EDX;
  
  iVar1 = *(int *)(in_EDX + 0x10);
  uVar2 = *(uint *)(iVar1 + 8) & 1;
  *(uint *)(in_EDX + 0x14) = uVar2;
  if ((*(char *)(iVar1 + 0x26) != '\0') || (*(char *)(iVar1 + 0x27) != '\0')) {
    *(uint *)(in_EDX + 0x14) = uVar2 | 2;
  }
  return 0;
}
