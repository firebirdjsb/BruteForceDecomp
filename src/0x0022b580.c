/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B57B2BB8BA96BA8EADC9EB48569542FFF4CCA75F0FDBF2DDC63A0B6773900986
 * Entry: 0x0022b580, Ghidra index: 7686, label: FUN_0022b580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0022b580(void)

{
  int iVar1;
  int in_EAX;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0xbe0) + 4);
  if ((*(int *)(iVar1 + 4) != 0) &&
     (*(uint *)(in_EAX + 0x2c4) < (uint)(*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 2))) {
    return *(undefined4 *)(*(int *)(iVar1 + 4) + *(uint *)(in_EAX + 0x2c4) * 4);
  }
  return 0;
}
