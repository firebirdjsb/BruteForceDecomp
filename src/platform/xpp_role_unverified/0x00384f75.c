/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3E163666D578DCC0E1E7433D5E4F77E9DAB0B5903126B09F2E85C815E1110B47
 * Entry: 0x00384f75, Ghidra index: 13662, label: FUN_00384f75
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00384f75(void)

{
  int in_ECX;
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(*(int *)(in_ECX + 8) + 0x80);
  return ((uVar1 ^ *(uint *)(in_ECX + 0x418)) & 0x8000) +
         (uVar1 & 0x7fff | *(uint *)(in_ECX + 0x418));
}
