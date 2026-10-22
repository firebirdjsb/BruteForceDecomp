/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 47B2CDF1E965AA5F11C8E94D60FDD477CFC01EA007452541A56F7888EFC2B84D
 * Entry: 0x00106660, Ghidra index: 3356, label: FUN_00106660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00106660(void)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  int iVar2;
  
  *in_EAX = 0;
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  in_EAX[3] = 4;
  in_EAX[4] = 0;
  puVar1 = in_EAX + 6;
  iVar2 = 0xc;
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
