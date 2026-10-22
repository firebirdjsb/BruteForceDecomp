/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7FC1680669D6737B01B2835DEC8517010264B22253DA1D97859F62D329B12B0A
 * Entry: 0x0012de00, Ghidra index: 3805, label: FUN_0012de00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0012de00(void)

{
  int in_EAX;
  int iVar1;
  uint3 uVar2;
  int in_ECX;
  
  iVar1 = in_EAX * 0x10 + in_ECX;
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if (*(int *)(iVar1 + 0x264) != 0) {
    return CONCAT31(uVar2,*(undefined1 *)(iVar1 + 0x268));
  }
  return (uint)uVar2 << 8;
}
