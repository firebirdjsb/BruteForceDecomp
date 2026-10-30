/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F1D144E070BDACB859839B3C2EBCADE23911E674C03F9D20BEA802EE0F4F7898
 * Entry: 0x00110c60, Ghidra index: 3551, label: FUN_00110c60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00110c60(void)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 2;
  puVar1 = in_EAX;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  in_EAX[5] = 0;
  in_EAX[6] = 0;
  in_EAX[7] = 0;
  return;
}
