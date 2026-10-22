/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FFAB28886170EF41FAFF854AA1EE7EE9FA56AFA291C81E23431416065CECB030
 * Entry: 0x00379062, Ghidra index: 13477, label: FUN_00379062
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00379062(void)

{
  int *in_EAX;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(*in_EAX + 0x8918);
  iVar2 = 2;
  do {
    puVar1[-2] = 0x1000;
    *puVar1 = 0x1000;
    puVar1[8] = 0x100000;
    puVar1[10] = 0x100000;
    puVar1[6] = 0;
    puVar1[4] = 0xffffffff;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
