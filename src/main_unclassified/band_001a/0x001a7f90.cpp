/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DEF12375880178BFC40E644A9EE1EBC4620022289785FFC0B72BA13126CF1810
 * Entry: 0x001a7f90, Ghidra index: 5425, label: FUN_001a7f90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001a7f90(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_002ea01d(0x44);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    *(undefined1 *)(puVar1 + 0xf) = 0x80;
    puVar1[0x10] = 0xffc00000;
    return puVar1;
  }
  return (undefined4 *)0x0;
}
