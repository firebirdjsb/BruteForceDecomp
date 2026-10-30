/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D8A10E3A0787EFA8B5677D9C8DEE425C8B4F5023EDF4B8032EDC501F7193DA92
 * Entry: 0x00027ea0, Ghidra index: 275, label: FUN_00027ea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_000120f0(int32_t in_EAX);

undefined4 FUN_00027ea0(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_000120f0();
  (**(code **)(*in_ECX + 0xc))();
  *(undefined1 *)(iVar1 + 0x670) = 0;
  *(undefined4 *)(iVar1 + 0x7dc) = 0;
  return 1;
}
