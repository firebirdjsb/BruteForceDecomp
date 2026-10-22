/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F52D49904F515DC5ABA3D76BEED1E10F4ED49AF88500829C4953535AA54BA7C1
 * Entry: 0x00252d00, Ghidra index: 8384, label: FUN_00252d00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00252d00(undefined4 param_1)

{
  undefined4 *puVar1;
  int *unaff_ESI;
  
  puVar1 = (undefined4 *)FUN_002ea01d(0x3c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[0xe] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    *puVar1 = param_1;
    puVar1[0xd] = 0xf9d40e62;
    puVar1[10] = 0x3f800000;
    puVar1[0xb] = 0x3f800000;
    puVar1[0xc] = 0x3f800000;
    *(byte *)(puVar1 + 9) = *(byte *)(puVar1 + 9) & 0xf8 | 0x18;
    *unaff_ESI = (int)puVar1;
    return 1;
  }
  *unaff_ESI = 0;
  return 0;
}
