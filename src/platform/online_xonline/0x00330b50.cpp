/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CB72B0EDD467C5B2F2BA8B0C8EF612381D30D7A9EF4D910A60A3C0F5C8F9388F
 * Entry: 0x00330b50, Ghidra index: 12370, label: FUN_00330b50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x00330b67) */
/* WARNING: Removing unreachable block (ram,0x00330b74) */
/* WARNING: Removing unreachable block (ram,0x00330b76) */

undefined4 FUN_00330b50(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = "d:\\update.xbe";
  iVar1 = FUN_0033030f("update.xbe",*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),
                       3,0);
  if (-1 < iVar1) {
    pcVar2 = "t:\\$u\\update.xbe";
  }
  XONLINES__XoUpdateLaunchNewImageInternal(pcVar2,param_1,0,0);
  return 0;
}
