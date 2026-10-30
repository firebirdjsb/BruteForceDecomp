/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B8D990D03184A78CA5011FA682332E9B156DCAD3953A88E6882F165695A5E899
 * Entry: 0x002416a0, Ghidra index: 8012, label: FUN_002416a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Allocator guest32 return/one-DWORD interface is recorded;
 * this caller size and guest memory/stack ABI remain unverified. */
#include "bf_002ea01d_allocator_guest32.h"
undefined4 * FUN_002416a0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_002ea01d(100);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[7] = 0xf;
    puVar1[6] = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}
