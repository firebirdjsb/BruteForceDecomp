/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 880FE07195EF91B732A821F28DE3644D3BA1D561E2B1167A0F006A794FA4A9FA
 * Entry: 0x0012de20, Ghidra index: 3806, label: FUN_0012de20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0012de20(void)

{
  int in_EAX;
  int iVar1;
  uint3 uVar2;
  int in_ECX;
  
  iVar1 = in_EAX * 0x10 + in_ECX;
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if (*(int *)(iVar1 + 0x264) != 0) {
    return CONCAT31(uVar2,*(undefined1 *)(iVar1 + 0x269));
  }
  return (uint)uVar2 << 8;
}
