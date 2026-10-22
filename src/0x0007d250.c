/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3706A32FD37289DD2DB5AC16A9853331C3AE941ABE9ED8ED2BD1C4694D1E0152
 * Entry: 0x0007d250, Ghidra index: 1486, label: FUN_0007d250
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0007d250(void)

{
  byte *pbVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  
  iVar3 = 1;
  iVar2 = 8;
  do {
    pbVar1 = (byte *)(**(code **)(*in_ECX + 0x130))(iVar3);
    *pbVar1 = *pbVar1 & 0xfe;
    (**(code **)(*in_ECX + 0x134))(iVar3);
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
