/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C0C2EFD74D8AC1046E6170F29F185AD6D486A742F5BA57C8917131F605F30FF9
 * Entry: 0x002ee4ff, Ghidra index: 10701, label: __inc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    __inc
   
   Library: Visual Studio 2003 Release */

uint __inc(void)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  undefined4 *in_EDX;
  
  piVar1 = in_EDX + 1;
  *piVar1 = *piVar1 + -1;
  if (-1 < *piVar1) {
    bVar2 = *(byte *)*in_EDX;
    *in_EDX = (byte *)*in_EDX + 1;
    return (uint)bVar2;
  }
  uVar3 = __filbuf();
  return uVar3;
}
