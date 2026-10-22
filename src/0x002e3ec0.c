/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D8135C5A3BE1055EF0DA5872838B1D17B2258192B295096113B869D01C97EAF6
 * Entry: 0x002e3ec0, Ghidra index: 10424, label: FUN_002e3ec0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e3ec0(void)

{
  int in_ECX;
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  uint local_8;
  int local_4;
  
  iVar2 = *(int *)(in_ECX + 0x1c);
  uVar3 = *(uint *)(in_ECX + 0x18);
  if (*(char *)(in_ECX + 0x20) != '\0') {
    XAPILIB__QueryPerformanceCounter(&local_8);
    uVar1 = local_8 - *(uint *)(in_ECX + 0x10);
    bVar4 = CARRY4(uVar3,uVar1);
    uVar3 = uVar3 + uVar1;
    iVar2 = iVar2 + ((local_4 - *(int *)(in_ECX + 0x14)) -
                    (uint)(local_8 < *(uint *)(in_ECX + 0x10))) + (uint)bVar4;
  }
  uVar5 = __allmul(uVar3,iVar2,1000,0);
  __alldiv(uVar5,*(undefined4 *)(in_ECX + 8),*(undefined4 *)(in_ECX + 0xc));
  return;
}
