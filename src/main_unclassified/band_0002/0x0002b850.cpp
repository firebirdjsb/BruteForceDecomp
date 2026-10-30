/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4B616D22A6AF1374A871677AA387D3B0237FF3DBE0BD847A67191387175B8B67
 * Entry: 0x0002b850, Ghidra index: 291, label: FUN_0002b850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0004e8f0(void);

undefined4 FUN_0002b850(void)

{
  int iVar1;
  int in_ECX;
  
  FUN_0004e8f0();
  *(undefined4 *)(in_ECX + 0x160) = 0;
  *(undefined4 *)(in_ECX + 0x158) = 0;
  *(byte *)(in_ECX + 0x15c) = *(byte *)(in_ECX + 0x15c) & 0xfa | 2;
  iVar1 = *(int *)(in_ECX + 0x550);
  *(undefined4 *)(in_ECX + 0x730) = 0;
  if (iVar1 != 0) {
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x28) = *(uint *)(iVar1 + 0x28) & 0xfffffffe;
    }
    *(undefined4 *)(in_ECX + 0x550) = 0;
  }
  return 1;
}
