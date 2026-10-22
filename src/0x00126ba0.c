/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0F271801D82F2163B6C0945CD05067D96A40A085DBA626F7F8223BFA929B493B
 * Entry: 0x00126ba0, Ghidra index: 3724, label: FUN_00126ba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00126ba0(void)

{
  int in_EAX;
  uint uVar1;
  
  uVar1 = 0;
  if ((*(uint **)(in_EAX + 0x1fc) != (uint *)0x0) &&
     (((uVar1 = **(uint **)(in_EAX + 0x1fc), uVar1 == 0x13 || (uVar1 == 0)) || (uVar1 == 0x2b)))) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}
