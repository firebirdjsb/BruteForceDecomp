/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B8AD52417A26E4AABA0A33B334867491F0D160AFF3A33D3FC907BF38B933C5E
 * Entry: 0x001a79b0, Ghidra index: 5412, label: FUN_001a79b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Allocator guest32 return/one-DWORD interface is recorded;
 * this caller size and guest memory/stack ABI remain unverified. */
#include "bf_002ea01d_allocator_guest32.h"
int FUN_001a79b0(void)

{
  int iVar1;
  
  iVar1 = FUN_002ea01d(0x90);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(undefined4 *)(iVar1 + 0x40) = 0;
    *(undefined4 *)(iVar1 + 0x44) = 0;
    *(undefined4 *)(iVar1 + 0x4c) = 0;
    *(undefined4 *)(iVar1 + 0x50) = 0;
    *(undefined4 *)(iVar1 + 0x54) = 0;
    *(undefined4 *)(iVar1 + 0x5c) = 0;
    *(undefined4 *)(iVar1 + 0x60) = 0;
    *(undefined4 *)(iVar1 + 100) = 0;
    *(undefined4 *)(iVar1 + 0x6c) = 0;
    *(undefined4 *)(iVar1 + 0x70) = 0;
    *(undefined4 *)(iVar1 + 0x74) = 0;
    *(undefined4 *)(iVar1 + 0x7c) = 0;
    *(undefined4 *)(iVar1 + 0x80) = 0;
    *(undefined4 *)(iVar1 + 0x84) = 0;
    return iVar1;
  }
  return 0;
}
