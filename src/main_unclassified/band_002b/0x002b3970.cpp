/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3D6AEFFCAE62D618425B271262422E366CB3ACBE0F048D1E9F872FEF3E73ADFF
 * Entry: 0x002b3970, Ghidra index: 9767, label: FUN_002b3970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002b3970(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int in_EAX;
  undefined4 *in_ECX;
  
  iVar3 = *(int *)(in_EAX + 0x90);
  uVar1 = *(undefined4 *)(iVar3 + 0x130);
  uVar2 = *(undefined4 *)(iVar3 + 0x134);
  *in_ECX = *(undefined4 *)(iVar3 + 300);
  in_ECX[1] = uVar1;
  in_ECX[2] = uVar2;
  return iVar3 + 300;
}
